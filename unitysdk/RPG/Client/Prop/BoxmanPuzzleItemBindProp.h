#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
class EDHPIGIAOLE;
namespace RPG::Client::Prop { class BoxmanPuzzleItem; }
namespace RPG::GameCore { class PropComponent; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_CTOR_OFFSET UNITYSDK_OFFSET(0xDC34A40)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_EGMHLIOFIBP_OFFSET UNITYSDK_OFFSET(0xDC349A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0xDC34A20)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_JPGOFMKMMLN_OFFSET UNITYSDK_OFFSET(0xDC32A10)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDC32410)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_SET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0xDC34A30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleItemBindProp_TypeDefinitionIndex = 78846;

	class BoxmanPuzzleItemBindProp : public ::System::Object
	{
	public:
		::System::Boolean _CanInteract_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropState ActivePropState; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 PropID; // 0x1C
		::RPG::Client::Prop::BoxmanPuzzleItem* _BoxmanItem; // 0x20
		::RPG::GameCore::PropComponent* _BindPropEntity; // 0x28
		::EDHPIGIAOLE* _BindPropMovement; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JPGOFMKMMLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_JPGOFMKMMLN_OFFSET))(this);
		}

		::System::Void EGMHLIOFIBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_EGMHLIOFIBP_OFFSET))(this);
		}

		::System::Boolean get_CanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_GET_CANINTERACT_OFFSET))(this);
		}

		::System::Void set_CanInteract(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_SET_CANINTERACT_OFFSET))(this, a1);
		}

	};
}
