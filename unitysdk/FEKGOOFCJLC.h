#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitSecond.h"
class FCOEMCEDLNL;
class FEKGOOFCJLC;

#define FEKGOOFCJLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE2020)
#define FEKGOOFCJLC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDE2090)
#define FEKGOOFCJLC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE1F90)

	class FEKGOOFCJLC : public ::RPG::GameCore::WaitSecond
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKGOOFCJLC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FEKGOOFCJLC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FEKGOOFCJLC*))((::PBYTE)hIl2Cpp + FEKGOOFCJLC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FEKGOOFCJLC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FEKGOOFCJLC*))((::PBYTE)hIl2Cpp + FEKGOOFCJLC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
