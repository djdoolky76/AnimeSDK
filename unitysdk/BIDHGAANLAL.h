#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BIDHGAANLAL;
namespace System { class Object; }
namespace System { class String; }

#define BIDHGAANLAL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4A2420)
#define BIDHGAANLAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB4A23B0)
#define BIDHGAANLAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A2220)
#define BIDHGAANLAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB4A2310)
#define BIDHGAANLAL_EQUALS_OFFSET UNITYSDK_OFFSET(0xB4A2280)
#define BIDHGAANLAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB4A2370)
#define BIDHGAANLAL_GET_ID_OFFSET UNITYSDK_OFFSET(0xB4A2230)
#define BIDHGAANLAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB4A2240)
#define BIDHGAANLAL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0xB4A2260)
#define BIDHGAANLAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB4A2250)
#define BIDHGAANLAL_SET_UISTATE_OFFSET UNITYSDK_OFFSET(0xB4A2270)

	class BIDHGAANLAL : public ::System::Object
	{
	public:
		::System::String* _UIState_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x28
		static ::BIDHGAANLAL** StaticGet_IFDKFOGNOAN()
		{
			return (::BIDHGAANLAL**)UnitySDK::FromName("", "BIDHGAANLAL")->GetStaticField(0x14A80);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIDHGAANLAL_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIDHGAANLAL_CCTOR_OFFSET))();
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDHGAANLAL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDHGAANLAL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BIDHGAANLAL_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDHGAANLAL_GET_UISTATE_OFFSET))(this);
		}

		::System::Void set_UIState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIDHGAANLAL_SET_UISTATE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIDHGAANLAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDHGAANLAL_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::BIDHGAANLAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BIDHGAANLAL*))((::PBYTE)hIl2Cpp + BIDHGAANLAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::BIDHGAANLAL* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BIDHGAANLAL*))((::PBYTE)hIl2Cpp + BIDHGAANLAL_COMPARETO_OFFSET))(this, a1);
		}

	};
