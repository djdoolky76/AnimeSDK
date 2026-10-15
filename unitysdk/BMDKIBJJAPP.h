#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BMDKIBJJAPP;
class FCOEMCEDLNL;

#define BMDKIBJJAPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E18D0)
#define BMDKIBJJAPP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E18E0)
#define BMDKIBJJAPP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E18A0)

inline static constexpr unsigned int BMDKIBJJAPP_TypeDefinitionIndex = 21449;

	class BMDKIBJJAPP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean PJOBGMNIOIE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDKIBJJAPP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BMDKIBJJAPP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMDKIBJJAPP*))((::PBYTE)hIl2Cpp + BMDKIBJJAPP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BMDKIBJJAPP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMDKIBJJAPP*))((::PBYTE)hIl2Cpp + BMDKIBJJAPP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
