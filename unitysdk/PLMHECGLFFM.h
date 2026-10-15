#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PLMHECGLFFM;

#define PLMHECGLFFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D303AD0)
#define PLMHECGLFFM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D303AE0)
#define PLMHECGLFFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D303AA0)

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
