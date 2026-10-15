#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEBNPKEKGFM.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OKNPLBDMOJB;
namespace RPG::GameCore { class DynamicFloat; }

#define OKNPLBDMOJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D296860)
#define OKNPLBDMOJB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D296870)
#define OKNPLBDMOJB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D296830)

	class OKNPLBDMOJB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x18
		::RPG::GameCore::StringHash BBBAMBGCGPL; // 0x20
		::FEBNPKEKGFM MCLLALGABAB; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNPLBDMOJB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OKNPLBDMOJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OKNPLBDMOJB*))((::PBYTE)hIl2Cpp + OKNPLBDMOJB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OKNPLBDMOJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OKNPLBDMOJB*))((::PBYTE)hIl2Cpp + OKNPLBDMOJB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
