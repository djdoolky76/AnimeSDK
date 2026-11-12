#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEIHDJONAKB;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define NEIHDJONAKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC3E85F0)
#define NEIHDJONAKB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3E7E50)
#define NEIHDJONAKB_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xC3E8610)
#define NEIHDJONAKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC3E81C0)
#define NEIHDJONAKB_EQUALS_OFFSET UNITYSDK_OFFSET(0xC3E8530)
#define NEIHDJONAKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC3E8330)
#define NEIHDJONAKB_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0xC3E7E90)
#define NEIHDJONAKB_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xC3E7E60)
#define NEIHDJONAKB_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC3E81A0)
#define NEIHDJONAKB_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC3E8170)
#define NEIHDJONAKB_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC3E80E0)
#define NEIHDJONAKB_SET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0xC3E7EA0)
#define NEIHDJONAKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC3E7EB0)
#define NEIHDJONAKB__CLONE___OFFSET UNITYSDK_OFFSET(0xC3E8590)

inline static constexpr unsigned int NEIHDJONAKB_TypeDefinitionIndex = 84844;

	class NEIHDJONAKB : public ::System::Object
	{
	public:
		::System::UInt32 _ChallengeID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEIHDJONAKB_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::NEIHDJONAKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEIHDJONAKB*))((::PBYTE)hIl2Cpp + NEIHDJONAKB_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIHDJONAKB_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIHDJONAKB_GET_CHALLENGEID_OFFSET))(this);
		}

		::System::Void set_ChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEIHDJONAKB_SET_CHALLENGEID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIHDJONAKB_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + NEIHDJONAKB_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::NEIHDJONAKB* a1, ::NEIHDJONAKB* a2)
		{
			return ((::System::Boolean(*)(::NEIHDJONAKB*, ::NEIHDJONAKB*))((::PBYTE)hIl2Cpp + NEIHDJONAKB_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::NEIHDJONAKB* a1, ::NEIHDJONAKB* a2)
		{
			return ((::System::Boolean(*)(::NEIHDJONAKB*, ::NEIHDJONAKB*))((::PBYTE)hIl2Cpp + NEIHDJONAKB_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIHDJONAKB_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEIHDJONAKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEIHDJONAKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEIHDJONAKB*))((::PBYTE)hIl2Cpp + NEIHDJONAKB_EQUALS_1_OFFSET))(this, a1);
		}

		::NEIHDJONAKB* _Clone__()
		{
			return ((::NEIHDJONAKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIHDJONAKB__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEIHDJONAKB_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
