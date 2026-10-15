#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFCMGNCLHMD;
namespace RPG::Client::Prop { class PorterItem; }
namespace RPG::Client::Prop { class PorterPuzzle; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PORTERTARGET_ANEGFEDNJJI_OFFSET UNITYSDK_OFFSET(0xDD80560)
#define RPG_CLIENT_PROP_PORTERTARGET_CAPHJABFHNC_OFFSET UNITYSDK_OFFSET(0xDD7F070)
#define RPG_CLIENT_PROP_PORTERTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0xDD80600)
#define RPG_CLIENT_PROP_PORTERTARGET_FNPJEJGCGCF_OFFSET UNITYSDK_OFFSET(0xDD80510)
#define RPG_CLIENT_PROP_PORTERTARGET_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xDD7FDD0)
#define RPG_CLIENT_PROP_PORTERTARGET_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDD7F130)
#define RPG_CLIENT_PROP_PORTERTARGET_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDD7F870)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterTarget_TypeDefinitionIndex = 78775;

	class PorterTarget : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* Item; // 0x18
		::System::String* InteractText; // 0x20
		::System::Int32 InitPorterItemIndex; // 0x28
		::System::Int32 ItemInteractIndex; // 0x2C
		::System::Boolean IsNeedGroupMatch; // 0x30
		::System::Byte _padding1[0x7];
		::RPG::Client::Prop::PorterItem* CurPorterItem; // 0x38
		::RPG::Client::Prop::PorterPuzzle* _OwnerRef; // 0x40
		::KFCMGNCLHMD* _UITriggerProxy; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Prop::PorterPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void CAPHJABFHNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_CAPHJABFHNC_OFFSET))(this, a1);
		}

		::System::Boolean FNPJEJGCGCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_FNPJEJGCGCF_OFFSET))(this);
		}

		::System::Void ANEGFEDNJJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_ANEGFEDNJJI_OFFSET))(this);
		}

	};
}
