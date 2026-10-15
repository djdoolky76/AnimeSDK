#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BOMMJNIPOLG;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_CTOR_OFFSET UNITYSDK_OFFSET(0xD91BD70)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_DPPBAHPBDAE_OFFSET UNITYSDK_OFFSET(0xD91BB30)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_KFDMIOANNDO_OFFSET UNITYSDK_OFFSET(0xD91B9F0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_OMANCEAKIHD_OFFSET UNITYSDK_OFFSET(0xD91BA40)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementTransGeneral_TypeDefinitionIndex = 70821;

	class MusicVisualization_BeatEffectElementTransGeneral : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::System::Boolean IsAffectTransLocalPos; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 AxisScale; // 0x34
		::System::Boolean IsAffectTransLocalRotate; // 0x40
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 EularAngleScale; // 0x44
		::System::Boolean IsAffectTransLocalScale; // 0x50
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 ScaleScale; // 0x54
		::System::Boolean IncludeChild; // 0x60
		::System::Boolean SetGOActive; // 0x61
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_CTOR_OFFSET))(this);
		}

		::System::Void KFDMIOANNDO(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_KFDMIOANNDO_OFFSET))(this, a1);
		}

		::System::Void OMANCEAKIHD(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_OMANCEAKIHD_OFFSET))(this, a1);
		}

		::System::Void DPPBAHPBDAE(::BOMMJNIPOLG* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_DPPBAHPBDAE_OFFSET))(this, a1, a2);
		}

	};
}
