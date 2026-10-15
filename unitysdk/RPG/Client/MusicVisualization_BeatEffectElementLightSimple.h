#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementLightSimple_ControlType.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementLightSimple_LightType.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/Color.h"
class BOMMJNIPOLG;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace VLB { class VolumetricLightBeam; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD918E30)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_ECKJAKPNDDE_OFFSET UNITYSDK_OFFSET(0xD9184F0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_HMJBNNKKHPM_OFFSET UNITYSDK_OFFSET(0xD918AA0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_JKFJNBFMJFN_OFFSET UNITYSDK_OFFSET(0xD918A20)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_JLDADNJNHKF_OFFSET UNITYSDK_OFFSET(0xD918C90)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_KFDMIOANNDO_OFFSET UNITYSDK_OFFSET(0xD918980)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementLightSimple_TypeDefinitionIndex = 70812;

	class MusicVisualization_BeatEffectElementLightSimple : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::RPG::Client::MusicVisualization_BeatEffectElementLightSimple_LightType LightMode; // 0x30
		::RPG::Client::MusicVisualization_BeatEffectElementLightSimple_ControlType ControlMode; // 0x34
		::System::Boolean IncludeChilds; // 0x38
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0x40
		::System::Collections::Generic::List_1<::VLB::VolumetricLightBeam*>* _volumetricLightBeams; // 0x48
		::System::Int32 _ColorIndex; // 0x50
		::System::Single _PerMusicVal; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_CTOR_OFFSET))(this);
		}

		::System::Void ECKJAKPNDDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_ECKJAKPNDDE_OFFSET))(this);
		}

		::System::Void KFDMIOANNDO(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_KFDMIOANNDO_OFFSET))(this, a1);
		}

		::System::Void JKFJNBFMJFN(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_JKFJNBFMJFN_OFFSET))(this, a1);
		}

		::System::Void HMJBNNKKHPM(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_HMJBNNKKHPM_OFFSET))(this, a1);
		}

		::System::Void JLDADNJNHKF(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_JLDADNJNHKF_OFFSET))(this, a1);
		}

	};
}
