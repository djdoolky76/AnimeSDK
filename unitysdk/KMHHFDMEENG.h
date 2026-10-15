#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CommonActivityLightConeRewardData; }
namespace RPG::Client { class CommonActivityLightConeRewardGroup; }
namespace RPG::GameCore { class MusicRhythmOpticalRow; }

#define KMHHFDMEENG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB556E80)
#define KMHHFDMEENG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5573C0)
#define KMHHFDMEENG_NBBMINIOAIP_OFFSET UNITYSDK_OFFSET(0xB557290)

	class KMHHFDMEENG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHHFDMEENG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CommonActivityLightConeRewardData* BPLPBPMEODA()
		{
			return ((::RPG::Client::CommonActivityLightConeRewardData*(*)())((::PBYTE)hIl2Cpp + KMHHFDMEENG_BPLPBPMEODA_OFFSET))();
		}

		static ::RPG::Client::CommonActivityLightConeRewardGroup* NBBMINIOAIP(::RPG::GameCore::MusicRhythmOpticalRow* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::CommonActivityLightConeRewardGroup*(*)(::RPG::GameCore::MusicRhythmOpticalRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMHHFDMEENG_NBBMINIOAIP_OFFSET))(a1, a2);
		}

	};
