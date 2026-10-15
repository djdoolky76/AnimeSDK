#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PLMHECGLFFM;

#define PLMHECGLFFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D6000)
#define PLMHECGLFFM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2D6010)
#define PLMHECGLFFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2D5FD0)

inline static constexpr unsigned int PLMHECGLFFM_TypeDefinitionIndex = 24317;

	class PLMHECGLFFM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean NPNDDLADGGJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMHECGLFFM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PLMHECGLFFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PLMHECGLFFM*))((::PBYTE)hIl2Cpp + PLMHECGLFFM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PLMHECGLFFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PLMHECGLFFM*))((::PBYTE)hIl2Cpp + PLMHECGLFFM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
