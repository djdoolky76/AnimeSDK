#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_TEXTID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF8C120)
#define RPG_CLIENT_TEXTID_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3E9CF10)
#define RPG_CLIENT_TEXTID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3E9CF00)
#define RPG_CLIENT_TEXTID_CTOR_OFFSET UNITYSDK_OFFSET(0x3E9CDC0)
#define RPG_CLIENT_TEXTID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E9CF30)
#define RPG_CLIENT_TEXTID_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3E9CF40)
#define RPG_CLIENT_TEXTID_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E9CE20)
#define RPG_CLIENT_TEXTID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE600)
#define RPG_CLIENT_TEXTID_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x3E9CDD0)
#define RPG_CLIENT_TEXTID_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EF8BDE0)
#define RPG_CLIENT_TEXTID_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1EF8C0A0)
#define RPG_CLIENT_TEXTID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EF8C050)
#define RPG_CLIENT_TEXTID_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EF8C080)
#define RPG_CLIENT_TEXTID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EF8C060)
#define RPG_CLIENT_TEXTID_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1EF8C0E0)
#define RPG_CLIENT_TEXTID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EF8C090)
#define RPG_CLIENT_TEXTID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E9CEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextID_TypeDefinitionIndex = 6575;

	struct alignas(4) TextID
	{
		::System::Int32 hash; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 hash64; // 0x18
		static ::RPG::Client::TextID* StaticGet_empty()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "TextID")->GetStaticField(0x910);
		}

		static ::System::Int32* StaticGet__emptyHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TextID")->GetStaticField(0x920);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsValid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_ISVALID_OFFSET))(a1);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_TOSTRING_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_COMPARETO_OFFSET))(this, a1);
		}

		/*
		::System::Int32 CompareTo_1(::RPG::Client::TextID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_COMPARETO_1_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean Equals_1(::RPG::Client::TextID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_2(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_EQUALS_2_OFFSET))(this, a1);
		}

		/*
		static ::RPG::Client::TextID op_Implicit(::System::String* a1)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int32 op_Implicit_1(::RPG::Client::TextID a1)
		{
			return ((::System::Int32(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::RPG::Client::TextID a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::Client::TextID a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality_1(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_EQUALITY_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality_1(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTID_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}
		*/

	};
}
