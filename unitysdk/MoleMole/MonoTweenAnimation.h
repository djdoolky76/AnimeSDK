#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APNCODNOFLH_IOLGAFLHBCM.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOTWEENANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1310CDF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTweenAnimation_TypeDefinitionIndex = 63886;

	class MonoTweenAnimation : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::StageTweenAnimData*>* AnimDataMap; // 0x58
		::APNCODNOFLH_IOLGAFLHBCM TimeScaleMode; // 0x60
		::System::Byte _padding0[0x4];
		::System::String* AutoPlayTween; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTWEENANIMATION__CTOR_OFFSET))(this);
		}
	};
}
