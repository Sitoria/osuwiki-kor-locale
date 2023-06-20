# SEV 레이팅

SEV는 [Nomination Assessment Team](/wiki/People/Nomination_Assessment_Team) (*NAT*)에서 [노미네이션 리셋](/wiki/Beatmap_ranking_procedure#nomination-resets)이 해당 노미네이션을 진행한 [비트맵 노미네이터](/wiki/People/Beatmap_Nominators) (*BN*)의 평가와 얼마나 관련이 있는지 조사하기 위해 사용하는 측정 시스템으로, 투명성과 일관성을 모두 제공합니다. 이 측정은 두 가지의 값으로 나뉘어지며, *명백성/심각도*로 표시됩니다. 두 값 모두 0에서 2 사이의 범위이므로 직관적이고 사용이 쉬운 시스템입니다.

## 명백성과 심각도

*메모: 수정하지 않아도 괜찮을 것으로 간주되는 문제를 수정하기 수행한 초기화는 항상 0/0으로 평가됩니다. 이는 [Qualified](/wiki/Beatmap/Category#qualified) 상태의 모딩 및 개선 사항을 조정하고 적용하는 것을 방해하지 않기 위한 것입니다.*

**명백성**은 문제를 얼마나 쉽게 발견할 수 있는지와 관련이 있습니다.

| 등급 | 정의 | 설명 |
| :-: | :-- | :-- |
| 0 | 명백하지 않음 | 문제가 모호하거나 너무 세분화되어 지속적으로 파악하기에 어려운 경우에 적용됩니다. |
| 1 | 경험으로 찾을 수 있음 | 파악하려면 지식/경험/주의가 필요합니다. 프로그램이나 일반 사용자는 발견하기 어렵습니다. (예시: 타이밍, 메타데이터 문제) |
| 2 | 한 눈에 확인 가능함 | 일반 사용자가 발견할 수 있거나 프로그램을 제대로 확인하고 사용하면 놓칠 수 없는 문제일 수 있습니다. |

**심각도**는 게임 플레이에 얼마나 영향을 미치는지와 관련이 있습니다.

| 등급 | 정의 | 설명 |
| :-: | :-- | :-- |
| 0 | 무시할 수 있음 | 게임 플레이에 영향을 미치지 않거나 거의 영향을 주지 않습니다. |
| 1 | 주목할 만한 사항 | 게임 플레이에 부정적인 영향을 미치지만 크게 영향을 가하지는 않습니다. |
| 2 | 중간 수준의 설계 결함 | 일반 사용자에게도 눈에 보일 정도로 게임 플레이에 해를 끼칩니다. (예시: 낮은 난이도에서 큰 점프) 실제로, 리딩이 어렵거나 불필요한 난이도 급상승 등 여러가지 주목할 만한 이유가 결합된 경우가 많습니다.  |

다음은 SEV 등급과 평가자가 이를 대략적으로 해석하는 예시입니다:

| SEV | 설명 |
| :-- | :-- |
| 0/0 | 이 리셋은 중요하지 않으며 평가 목적으로는 사용되지 않습니다. |
| 0/1 | 무언가 잘못되었지만 발견하기 어려웠기에 비트맵 노미네이터를 비난하기는 어렵습니다. |
| 1/0 | 비트맵 노미네이터가 조금 더 주의를 기울였더라면 수정될 수 있었겠지만, 중요한 문제는 아닙니다. |
| 1/1 | 비트맵 노미네이터가 조금 더 주의를 기울였다면 해결할 수 있었던 문제가 발생했습니다. |
| 1/2 | 종종 많은 일이 잘못되었다는 것을 의미하지만, 이 모든 것을 쉽게 발견하려면 경험이 필요합니다. |
| 2/0 | 메타데이터 누락과 같은 맵 설정에서 문제가 발견되었습니다. |
| 2/1 | 히트사운드 누락과 같은 맵의 게임 플레이에서 눈에 띄는 문제가 발견되었습니다. |
| 2/2 | 겹쳐 있는 오브젝트와 같은 발견하기 쉬울 정도로 심각한 문제가 누락되었습니다. |

## 사용처

SEV 등급은 [비트맵 노미네이터 평가](/wiki/People/Nomination_Assessment_Team/Evaluations)에 사용되며, 비트맵 노미네이터의 노미네이트 횟수에 따라 가중치를 둡니다. 

실수는 누구나 할 수 있고, 어느 정도는 학습에 도움이 되지만, 너무 자주 발생하거나 동일한 실수가 반복되면 문제가 됩니다. 그렇기에 평가는 개별 SEV 등급에 초점을 맞추지 않고 사례별로 전체 상황을 고려하는 이유입니다.

## 일반적인 리셋 사유

*이 데이터는 모든 리셋의 90%를 차지합니다.*

Here is an exhaustive list of reasons nominations have been reset for with their respective SEV rating. These are based on stats of all SEV ratings set in the osu! game mode from February 2020 to April 2021, with percentages to show how common issues are.

This list does not cover every possible reset reason, and the NAT may rate resets for the same reasons listed differently, depending on the specific context.

### Metadata

*Makes up 22% of all >0/0 resets, 30% of all resets.*

Metadata resets *never* have a severity above 0, as they do not affect gameplay.

- **0/0:** (70%)
  - Adding tags for a new Featured Artist
  - Adding guest mappers to tags due to a username change
  - Adding tags that are more descriptive but are not required by the ranking criteria
  - Resets due to the addition of a new rule
  - Difficulty name changes
- **1/0:** (23%)
  - Romanised artist name order
  - Small romanisation and capitalisation errors
  - 1 wrong character, spelling mistakes, etc.
  - Missing genre/language tags
- **2/0:** (5%)
  - Missing guest mappers in tags
  - Missing Unicode field
  - Wrong artist/title/source

### Mapping

*Makes up 23% of all >0/0 resets, 18% of all resets.*

Resets due to mapping issues rarely have 2 in obviousness, as they require good mapping/modding knowledge to identify easily.

- **0/0:** (46%)
  - Any changes from a state that was already acceptable, regardless of amount of changes:
    - Fixing a broken stack (that does not affect readability)
    - Adjusting a few patterns to improve a buildup
    - Remapping an acceptable difficulty entirely because the mapper was unsatisfied with it
- **1/1:** (28%)
  - Common mapping mistakes that negatively impact the map to a notable degree
    - Unwarranted difficulty spikes (as in not fitting the song)
    - Dense rhythms/high spacing in calm sections
    - Overmapping in a way that is introduced/executed poorly
    - Mapping a big stream over multiple distinct [layers](/wiki/Music_theory/Layer) and sounds
- **1/2:** (14%)
  - Same reasons as for 1/1, but more severe; typically a combination

### Timing

*Makes up 15% of all >0/0 resets, 8% of all resets.*

- **0/0:** (20%)
  - Adjusting the preview point/kiai time
  - Adding a red line to account for the Nightcore mod
  - Using double/half BPM
  - Slightly wrong offset
    - For simple timing, < 6 ms off
    - For complex timing, < 10 ms off
- **1/0:** (11%)
  - Wrong time signature
- **1/1:** (49%)
  - Wrong offset
    - For simple timing, ~6–12 ms off
    - For complex timing, ~10+ ms off

### Files

*Makes up 13% of all >0/0 resets, 16% of all resets.*

Resets related to beatmap files almost never have a severity above 0, as they usually do not affect gameplay. An exception is using storyboarded hitsounds as replacement for active ones.

- **0/0:** (64%)
  - Any change made from an already acceptable/rankable state, for example:
    - Improving the audio from 128 kbps to 192 kbps
    - Any harmless changes to the background, storyboard, or skin
    - Inappropriate background(s) (where it is not obvious)
- **1/0:** (19%)
  - Using audio that has been encoded upwards from a lower bitrate
  - Using hitsound samples that affect gameplay negatively in the default skin
- **2/0:** (6%)
  - Unused file(s)
  - Missing video on some difficulties
  - Content that is obviously inappropriate

### Snapping

*Makes up 9% of all >0/0 resets, 4% of all resets.*

- **0/0:** (11%)
  - AiMod incorrectly detecting an object less than 2 ms off as unsnapped
  - Slightly mis-snapped slider end that tools cannot detect
- **1/0:** (21%)
  - Mis-snaps that hardly affect gameplay
    - Slightly mis-snapped slider end that tools could help find
    - An object being off by only a few milliseconds
- **1/1:** (42%)
  - Mis-snaps that are difficult to notice when playing, but sometimes cause 100s
- **1/2:** (8%)
  - Mis-snaps that notably affect gameplay
    - Mis-snaps that always cause 100s, sometimes 50s, or even note locks
    - Mis-snaps causing abnormal spacing to following/previous notes
    - A mis-snap part of a stream, burst, or triple (that cannot be a simplification)

### Hitsounding

*Makes up 7% of all >0/0 resets, 11% of all resets.*

- **0/0:** (73%)
  - Adding a few missing hitsounds
  - Removing a few misplaced hitsounds
- **1/0:** (14%)
  - Generally lacking hitsounds
  - Bad hitsounding, e.g. unwarranted claps/snares/cymbals on every beat or similar
- **1/1:** (6%)
  - Silenced active objects
