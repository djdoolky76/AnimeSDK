#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PropSelectionEffect; }
namespace System { class Object; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xDDF0360)
#define RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDF0370)
#define RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xDDF02D0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_CTOR_OFFSET UNITYSDK_OFFSET(0xDDEEDC0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDF01E0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDDF0320)
#define RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xDDF0280)
#define RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDDF0220)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_KJOFIEKBODK_TypeDefinitionIndex = 60263;

	class PropSelectionEffect_KJOFIEKBODK : public ::System::Object
	{
	public:
		::RPG::Client::PropSelectionEffect* CEODOONOFBM; // 0x10
		::RPG::Client::PropSelectionState DLNIGFGLPLJ; // 0x18
		::RPG::Client::PropSelectionState ACHIDNBOBLA; // 0x1C
		static ::System::Int32* StaticGet_NIBJBLMPNDF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "KJOFIEKBODK")->GetStaticField(0x12D50);
		}

		::System::Void _ctor(::RPG::Client::PropSelectionEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::RPG::Client::PropSelectionState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void CHAHBFGGIDL(::RPG::Client::PropSelectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_KHGIKBFDLFB_OFFSET))(this);
		}

		::RPG::Client::PropSelectionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::PropSelectionState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_KJOFIEKBODK_BGDKFHEBDFJ_OFFSET))(this);
		}

	};
}
