#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIDEFENCELARGETVSETTING_BELEHBMNFDG_OFFSET UNITYSDK_OFFSET(0x1807C880)
#define MOLEMOLE_UIDEFENCELARGETVSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1807C670)

namespace MoleMole
{
	inline static constexpr unsigned int UIDefenceLargeTVSetting_TypeDefinitionIndex = 63137;

	class UIDefenceLargeTVSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 FillCount; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Color>* fillColorHSV; // 0x20
		::UnityEngine::AnimationCurve* flushCurve; // 0x28
		::System::Single flushTime; // 0x30
		::UnityEngine::Color TargetColor; // 0x34
		::UnityEngine::Color BaseColor; // 0x44
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* ColorIndensityCurve; // 0x58
		::System::Single ColorIndensityLoopTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEFENCELARGETVSETTING__CTOR_OFFSET))(this);
		}

		::System::Void BELEHBMNFDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEFENCELARGETVSETTING_BELEHBMNFDG_OFFSET))(this);
		}
	};
}
