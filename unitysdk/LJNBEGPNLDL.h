#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }

#define LJNBEGPNLDL_CTOR_OFFSET UNITYSDK_OFFSET(0xB722960)
#define LJNBEGPNLDL_GET_BUFF_OFFSET UNITYSDK_OFFSET(0xB722AB0)
#define LJNBEGPNLDL_GET_ISSHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xB722AC0)
#define LJNBEGPNLDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB722970)
#define LJNBEGPNLDL_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB722A30)

inline static constexpr unsigned int LJNBEGPNLDL_TypeDefinitionIndex = 66980;

	class LJNBEGPNLDL : public ::System::Object
	{
	public:
		::RPG::Client::RogueBuffData* _Buff_k__BackingField; // 0x10
		::System::Boolean _IsShowImmediately_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::RogueBuffData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJNBEGPNLDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNBEGPNLDL_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNBEGPNLDL_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::RogueBuffData* get_Buff()
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNBEGPNLDL_GET_BUFF_OFFSET))(this);
		}

		::System::Boolean get_IsShowImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNBEGPNLDL_GET_ISSHOWIMMEDIATELY_OFFSET))(this);
		}

	};
