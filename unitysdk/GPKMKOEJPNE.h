#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHBJBLKFBEA;
class GPKMKOEJPNE;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define GPKMKOEJPNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B5D590)
#define GPKMKOEJPNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B5D560)
#define GPKMKOEJPNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B5D1C0)
#define GPKMKOEJPNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B5D0C0)
#define GPKMKOEJPNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B5CD90)
#define GPKMKOEJPNE_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x15B5C890)
#define GPKMKOEJPNE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15B5CCF0)
#define GPKMKOEJPNE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15B5CC50)
#define GPKMKOEJPNE_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x15B5CB00)
#define GPKMKOEJPNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B5C8C0)
#define GPKMKOEJPNE__CLONE___OFFSET UNITYSDK_OFFSET(0x15B5D500)

inline static constexpr unsigned int GPKMKOEJPNE_TypeDefinitionIndex = 49711;

	class GPKMKOEJPNE : public ::System::Object
	{
	public:
		::EHBJBLKFBEA* NONBAAINLPB; // 0x10
		::System::UInt32 KGHDNKONLNH; // 0x18
		::System::Void _ctor(::GPKMKOEJPNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPKMKOEJPNE*))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_CTOR_1_OFFSET))(this);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::GPKMKOEJPNE* a1, ::GPKMKOEJPNE* a2)
		{
			return ((::System::Boolean(*)(::GPKMKOEJPNE*, ::GPKMKOEJPNE*))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::GPKMKOEJPNE* a1, ::GPKMKOEJPNE* a2)
		{
			return ((::System::Boolean(*)(::GPKMKOEJPNE*, ::GPKMKOEJPNE*))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPKMKOEJPNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPKMKOEJPNE*))((::PBYTE)hIl2Cpp + GPKMKOEJPNE_EQUALS_1_OFFSET))(this, a1);
		}

		::GPKMKOEJPNE* _Clone__()
		{
			return ((::GPKMKOEJPNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKMKOEJPNE__CLONE___OFFSET))(this);
		}

	};
