#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
#include "unitysdk/StageHarmonyLightModLinkSlot_DJLPONHKPCL.h"
class DHBOGGBEMFF;
class StageHarmonyDemodulator;
class StageHarmonyTargetLightGroup;

#define STAGEHARMONYLIGHTMODLINKSLOT_AHMCGDLMMLM_OFFSET UNITYSDK_OFFSET(0x1AC52450)
#define STAGEHARMONYLIGHTMODLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4C880)
#define STAGEHARMONYLIGHTMODLINKSLOT_FINNMFFPDLA_OFFSET UNITYSDK_OFFSET(0x1AC4C5C0)
#define STAGEHARMONYLIGHTMODLINKSLOT_JLPDLBCBJNN_OFFSET UNITYSDK_OFFSET(0x1AC4C640)
#define STAGEHARMONYLIGHTMODLINKSLOT_LPDNFAMGEGG_OFFSET UNITYSDK_OFFSET(0x1AC4C6A0)
#define STAGEHARMONYLIGHTMODLINKSLOT_OBOGCFEKGKL_OFFSET UNITYSDK_OFFSET(0x1AC52500)

inline static constexpr unsigned int StageHarmonyLightModLinkSlot_TypeDefinitionIndex = 48568;

	class StageHarmonyLightModLinkSlot : public ::StageHarmonyBaseLinkSlot
	{
	public:
		::StageHarmonyTargetLightGroup* TargetLightIDList; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_CTOR_OFFSET))(this);
		}

		static ::System::Int32 AHMCGDLMMLM(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_AHMCGDLMMLM_OFFSET))(a1, a2);
		}

		static ::StageHarmonyLightModLinkSlot_DJLPONHKPCL JLPDLBCBJNN(::System::Int32 a1)
		{
			return ((::StageHarmonyLightModLinkSlot_DJLPONHKPCL(*)(::System::Int32))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_JLPDLBCBJNN_OFFSET))(a1);
		}

		::System::Boolean FINNMFFPDLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_FINNMFFPDLA_OFFSET))(this);
		}

		::System::Void OBOGCFEKGKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_OBOGCFEKGKL_OFFSET))(this);
		}

		::System::Void LPDNFAMGEGG(::StageHarmonyDemodulator* a1, ::System::Single a2, ::DHBOGGBEMFF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*, ::System::Single, ::DHBOGGBEMFF*))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_LPDNFAMGEGG_OFFSET))(this, a1, a2, a3);
		}

	};
