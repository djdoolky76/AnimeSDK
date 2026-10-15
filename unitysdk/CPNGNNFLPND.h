#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CPNGNNFLPND;
class FCOEMCEDLNL;

#define CPNGNNFLPND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC3200)
#define CPNGNNFLPND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCC3210)
#define CPNGNNFLPND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCC31D0)

	class CPNGNNFLPND : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean AHILIAPNFAG; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 LIFHGBNGGHK; // 0x1C
		::System::UInt32 NMBKAIEIAPE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNGNNFLPND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CPNGNNFLPND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPNGNNFLPND*))((::PBYTE)hIl2Cpp + CPNGNNFLPND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CPNGNNFLPND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPNGNNFLPND*))((::PBYTE)hIl2Cpp + CPNGNNFLPND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
