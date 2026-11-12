#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CMCFPEBEHPK;
class FCOEMCEDLNL;

#define CMCFPEBEHPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EECFB40)
#define CMCFPEBEHPK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EECFB50)
#define CMCFPEBEHPK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EECFA80)

inline static constexpr unsigned int CMCFPEBEHPK_TypeDefinitionIndex = 21806;

	class CMCFPEBEHPK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCFPEBEHPK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CMCFPEBEHPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMCFPEBEHPK*))((::PBYTE)hIl2Cpp + CMCFPEBEHPK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CMCFPEBEHPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMCFPEBEHPK*))((::PBYTE)hIl2Cpp + CMCFPEBEHPK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
