#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/EMontagePriorityLayer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageLayerFragment.h"

#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENTEXTENSIONS_GETLAYERREF_1_OFFSET UNITYSDK_OFFSET(0x10DB3150)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENTEXTENSIONS_GETLAYERREF_OFFSET UNITYSDK_OFFSET(0x10DB2FC0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCMontageDataFragmentExtensions_TypeDefinitionIndex = 67998;

	class FNPCMontageDataFragmentExtensions : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::FNPCMontageLayerFragment& GetLayerRef(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer)
		{
			return ((::NPCCrowd::Ability::FNPCMontageLayerFragment&(*)(::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENTEXTENSIONS_GETLAYERREF_OFFSET))(montageData, layer);
		}

		static ::NPCCrowd::Ability::FNPCMontageLayerFragment& GetLayerRef_1(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::System::Int32 layer)
		{
			return ((::NPCCrowd::Ability::FNPCMontageLayerFragment&(*)(::NPCCrowd::Ability::FNPCMontageDataFragment&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENTEXTENSIONS_GETLAYERREF_1_OFFSET))(montageData, layer);
		}
	};
}
