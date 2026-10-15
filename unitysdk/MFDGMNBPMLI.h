#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MFDGMNBPMLI;

#define MFDGMNBPMLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D157440)
#define MFDGMNBPMLI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D157450)
#define MFDGMNBPMLI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D157410)

	class MFDGMNBPMLI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 PPJAGHAPCPJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDGMNBPMLI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MFDGMNBPMLI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MFDGMNBPMLI*))((::PBYTE)hIl2Cpp + MFDGMNBPMLI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MFDGMNBPMLI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MFDGMNBPMLI*))((::PBYTE)hIl2Cpp + MFDGMNBPMLI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
