#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PIFNKBOOHNB;
namespace RPG::GameCore { class DynamicString; }

#define PIFNKBOOHNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EE7C0)
#define PIFNKBOOHNB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2EE7D0)
#define PIFNKBOOHNB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2EE790)

	class PIFNKBOOHNB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* BFLIFKBEOPJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFNKBOOHNB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PIFNKBOOHNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PIFNKBOOHNB*))((::PBYTE)hIl2Cpp + PIFNKBOOHNB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PIFNKBOOHNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PIFNKBOOHNB*))((::PBYTE)hIl2Cpp + PIFNKBOOHNB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
