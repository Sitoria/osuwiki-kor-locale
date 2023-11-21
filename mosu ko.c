```if id == "reconnect":
                return "클라이언트가 재연결되었습니다!"
            elif id == "dan-detect":
                return "Dan 플레이가 감지되었습니다! 행운을 빌어요! <3"
            elif id == "over-message":
                return "메세지가 너무 깁니다!!\n(2000자를 초과할 수 없어요.)"
            elif id == "restricted":
                return "계정이 차단되었습니다.\n계정이 차단되었을 경우 osu!에 포함된 모든 온라인 플레이가 제한됩니다.\n공식 디스코드 서버에서 도움을 요청하세요!"
                //slightly changed the translation on bottom line: you can't play all of osu! online services when you are resctricted.
            elif id == "welcome":
                return f"접속을 환영합니다!\n현재 mamesosu.net 서버에 접속하고 있습니다."
                //2nd line is : you are currently connected on mamesosu.net server.
            elif id == "server-offline":
                return "현재 서버가 오프라인 상태이므로 온라인 기능을 사용할 수 없습니다!"
            elif id == "adapter-error":
                return "연결 오류가 발생했습니다!\nosu! 클라이언트를 재실행 후 다시 시도해보세요!"
            elif id == "already-logged-in":
                return "이미 로그인 중입니다!"
            elif id == "logged-in-error":
                return "유저명이 맞지 않습니다. 확인 후 재입력해주세요!"
            elif id == "incorrect-password":
                return "패스워드가 틀렸습니다! 재입력해주세요!"
                //add 2nd sentence: please retype!
            elif id == "login-failed":
                return "로그인에 실패하였습니다.\n공식 디스코드에 접속 후 admin에게 연락해주세요!"
                //login failed! join the official discord server and contact the admin!
            elif id == "dan-keycount-error":
                return "키 카운트를 찾을 수 없습니다.\n다시 로드해주세요!"
            elif id == "pause-detect":
                return "일시정지가 감지되었습니다!\n이 스코어는 서버로 전송되지 않습니다!"
            elif id == "dan-dt-contain":
                return "더블타임과 나이트코어는 Dan에 포함되지 않습니다!\n모드를 확인해주세요!"
                // /n please check the mod!
            elif id == "dan-ht-contain":
                return "하프타임은 Dan에 포함되지 않습니다!\n모드를 확인해주세요!"
                // /n please check the mod!
            elif id == "dan-no-pause":
                return "일시정지가 없으셨네요! 수고하셨습니다! <3"
                //changed the sentence a bit: no pause! ggwp <3
            elif id == "dan-failed":
                return "Dan 클리어에 실패했습니다...\n다음번엔 통과할 수 있을거에요!"
                //changed a sentence a bit: \n you can clear next time!
            elif id == "dan-success":
                return "Dan 클리어에 성공하였습니다! 축하드려요! <3"
            elif id == "dan-v2":
                return "이 Dan은 ScoreV2를 요구하는 Dan입니다!\n모드를 확인해주세요!"
            elif id == "dan-nm":
                return "이 Dan은 NoMod를 요구하는 Dan입니다.\n모드가 걸려있는지 확인해주세요!"
            elif id == "offline-sendmail":
                return f"{optional[0]}님은 현재 오프라인으로 확인됩니다! \n{optional[0]}님이 로그인하였을 경우 메세지를 보내드릴게요!"
            elif id == "restrict-multiplay-warn":
                return "차단된 플레이어는 멀티플레이에 참가할 수 없습니다!\n차단이 해제된 후 다시 시도해주세요."
            elif id == "silence-multiplay-warn":
                return "사일런스된 플레이어는 멀티플레이에 참가할 수 없습니다!\n사일런스가 해제된 후 다시 시도해주세요."
            elif id == "scrim-change-warn":
                return f"Changing team type while scrimming will reset the overall score! \nTo do so, please use the !mp teams {optional[0]} command."

            if id == "score-achieved":
                return f"이 맵에서 #{optional[0]}를 기록했습니다!\n수고하셨습니다, ({optional[1]})님!"
