#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionEffect_KJOFIEKBODK.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"
class NEOCEOCDEAF;
namespace RPG::Client { class PropSelectionEffect; }
namespace System { class Object; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xDDEF240)
#define RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_CTOR_OFFSET UNITYSDK_OFFSET(0xDDED6B0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDDEF350)
#define RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xDDEEDD0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDDEEFF0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK__EXIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xDDEF400)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_AKAKGFNOIAK_TypeDefinitionIndex = 60262;

	class PropSelectionEffect_AKAKGFNOIAK : public ::RPG::Client::PropSelectionEffect_KJOFIEKBODK
	{
	public:
		::NEOCEOCDEAF* BOMJIBEFLGN; // 0x20
		::System::Void _ctor(::RPG::Client::PropSelectionEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::RPG::Client::PropSelectionState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::RPG::Client::PropSelectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void _Exit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_AKAKGFNOIAK__EXIT_B__3_0_OFFSET))(this);
		}

	};
}
