#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFCMGNCLHMD;
namespace RPG::Client::Prop { class SignPuzzle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_SIGNITEM_BDCKAIFPPJC_OFFSET UNITYSDK_OFFSET(0xDDB6510)
#define RPG_CLIENT_PROP_SIGNITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDDB6890)
#define RPG_CLIENT_PROP_SIGNITEM_DGPBJOPODCD_OFFSET UNITYSDK_OFFSET(0xDDB65B0)
#define RPG_CLIENT_PROP_SIGNITEM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xDDB6450)
#define RPG_CLIENT_PROP_SIGNITEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDDB6390)
#define RPG_CLIENT_PROP_SIGNITEM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDDB6000)
#define RPG_CLIENT_PROP_SIGNITEM_OLHEHJEGAHF_OFFSET UNITYSDK_OFFSET(0xDDB6720)
#define RPG_CLIENT_PROP_SIGNITEM_PAFJAKPDDBD_OFFSET UNITYSDK_OFFSET(0xDDB6550)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int SignItem_TypeDefinitionIndex = 78862;

	class SignItem : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Item; // 0x10
		::System::Boolean Signable; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* SignText; // 0x20
		::System::String* CancelSignText; // 0x28
		::KFCMGNCLHMD* _UITriggerProxy; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _TextOptions; // 0x38
		::RPG::Client::Prop::SignPuzzle* _OwnerRef; // 0x40
		::System::Boolean _IsSign; // 0x48
		::System::Byte _padding1[0x7];
		::UnityEngine::Animator* _Animator; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Prop::SignPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::SignPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean BDCKAIFPPJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_BDCKAIFPPJC_OFFSET))(this);
		}

		::System::Boolean PAFJAKPDDBD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_PAFJAKPDDBD_OFFSET))(this);
		}

		::System::Void DGPBJOPODCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_DGPBJOPODCD_OFFSET))(this);
		}

		::System::Void OLHEHJEGAHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_OLHEHJEGAHF_OFFSET))(this);
		}

	};
}
