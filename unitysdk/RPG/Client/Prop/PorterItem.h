#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFCMGNCLHMD;
namespace RPG::Client::Prop { class PorterPuzzle; }
namespace RPG::Client::Prop { class PorterTarget; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PORTERITEM_CAPHJABFHNC_OFFSET UNITYSDK_OFFSET(0x1744BF60)
#define RPG_CLIENT_PROP_PORTERITEM_CFAPCLMCCIM_OFFSET UNITYSDK_OFFSET(0x1744C010)
#define RPG_CLIENT_PROP_PORTERITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1744C280)
#define RPG_CLIENT_PROP_PORTERITEM_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1744C160)
#define RPG_CLIENT_PROP_PORTERITEM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1744BCE0)
#define RPG_CLIENT_PROP_PORTERITEM_HDAOMKFGHKH_OFFSET UNITYSDK_OFFSET(0x1744BC70)
#define RPG_CLIENT_PROP_PORTERITEM_IJCPJLBLFBC_OFFSET UNITYSDK_OFFSET(0x1744BE30)
#define RPG_CLIENT_PROP_PORTERITEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1744BD70)
#define RPG_CLIENT_PROP_PORTERITEM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1744B5F0)
#define RPG_CLIENT_PROP_PORTERITEM_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1744C1F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterItem_TypeDefinitionIndex = 81508;

	class PorterItem : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* Item; // 0x18
		::System::String* InteractText; // 0x20
		::Il2CppArray<::System::String*>* InteractTexts; // 0x28
		::System::String* HintAnimatorStateName; // 0x30
		::System::Boolean IsMatch; // 0x38
		::System::Byte _padding1[0x7];
		::RPG::Client::Prop::PorterTarget* CurPorterTarget; // 0x40
		::UnityEngine::Animator* _Animator; // 0x48
		::KFCMGNCLHMD* _UITriggerProxy; // 0x50
		::RPG::Client::Prop::PorterPuzzle* _OwnerRef; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Prop::PorterPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IJCPJLBLFBC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_IJCPJLBLFBC_OFFSET))(this, a1);
		}

		::System::Void CAPHJABFHNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_CAPHJABFHNC_OFFSET))(this, a1);
		}

		::System::Void HDAOMKFGHKH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_HDAOMKFGHKH_OFFSET))(this, a1);
		}

		::System::Void CFAPCLMCCIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_CFAPCLMCCIM_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void NMPLHCJKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_NMPLHCJKEOI_OFFSET))(this);
		}

	};
}
