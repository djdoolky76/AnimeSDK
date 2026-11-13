#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define JBFAFOGGBCA_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define JBFAFOGGBCA_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3E00220)
#define JBFAFOGGBCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E40D50)
#define JBFAFOGGBCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E40CF0)
#define JBFAFOGGBCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E40CE0)
#define JBFAFOGGBCA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define JBFAFOGGBCA_GET_GLOBALBUFFSKILLID_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define JBFAFOGGBCA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19A6B8B0)
#define JBFAFOGGBCA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19A6B890)
#define JBFAFOGGBCA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3E40CC0)
#define JBFAFOGGBCA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define JBFAFOGGBCA_SET_GLOBALBUFFSKILLID_OFFSET UNITYSDK_OFFSET(0xFDBF80)
#define JBFAFOGGBCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E40CB0)

inline static constexpr unsigned int JBFAFOGGBCA_TypeDefinitionIndex = 53064;

	struct alignas(4) JBFAFOGGBCA
	{
		::System::UInt32 _AvatarID_k__BackingField; // 0x10
		::System::UInt32 _GlobalBuffSkillID_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GlobalBuffSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_GET_GLOBALBUFFSKILLID_OFFSET))(this);
		}

		::System::Void set_GlobalBuffSkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_SET_GLOBALBUFFSKILLID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::JBFAFOGGBCA a1, ::JBFAFOGGBCA a2)
		{
			return ((::System::Boolean(*)(::JBFAFOGGBCA, ::JBFAFOGGBCA))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::JBFAFOGGBCA a1, ::JBFAFOGGBCA a2)
		{
			return ((::System::Boolean(*)(::JBFAFOGGBCA, ::JBFAFOGGBCA))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::JBFAFOGGBCA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBFAFOGGBCA))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JBFAFOGGBCA_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
