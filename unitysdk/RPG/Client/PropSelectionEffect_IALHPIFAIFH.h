#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionEffect_KJOFIEKBODK.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"
class NEOCEOCDEAF;
namespace RPG::Client { class PropSelectionEffect; }
namespace System { class Object; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xDDFA720)
#define RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF7D60)
#define RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDDFA830)
#define RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xDDFA2C0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDDFA4D0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH__EXIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xDDFA8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_IALHPIFAIFH_TypeDefinitionIndex = 60261;

	class PropSelectionEffect_IALHPIFAIFH : public ::RPG::Client::PropSelectionEffect_KJOFIEKBODK
	{
	public:
		::NEOCEOCDEAF* BOMJIBEFLGN; // 0x20
		::System::Void _ctor(::RPG::Client::PropSelectionEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::RPG::Client::PropSelectionState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::RPG::Client::PropSelectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void _Exit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_IALHPIFAIFH__EXIT_B__3_0_OFFSET))(this);
		}

	};
}
