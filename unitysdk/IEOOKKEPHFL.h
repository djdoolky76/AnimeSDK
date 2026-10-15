#pragma once
#include "unitysdk/unitysdk.h"
class DEIPGFGBEMG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text { class StringBuilder; }

#define IEOOKKEPHFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C52950)
#define IEOOKKEPHFL_CTOR_OFFSET UNITYSDK_OFFSET(0x3C52910)
#define IEOOKKEPHFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C52AB0)
#define IEOOKKEPHFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52A40)
#define IEOOKKEPHFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C52A30)
#define IEOOKKEPHFL_LKKPFILCEAO_OFFSET UNITYSDK_OFFSET(0x3C52960)
#define IEOOKKEPHFL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC71840)
#define IEOOKKEPHFL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC71800)
#define IEOOKKEPHFL_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C52A10)
#define IEOOKKEPHFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C52A00)

inline static constexpr unsigned int IEOOKKEPHFL_TypeDefinitionIndex = 44201;

	struct alignas(8) IEOOKKEPHFL
	{
		::Il2CppArray<::DEIPGFGBEMG*>* ACJMMAMOOLF; // 0x10
		::System::Int32 BGEJLPBCDOC; // 0x18
		::System::Byte _padding0[0x4];
		::System::Func_2<::System::Int32, ::DEIPGFGBEMG*>* DABKLCFOOAK; // 0x20
		::System::Void _ctor(::Il2CppArray<::DEIPGFGBEMG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DEIPGFGBEMG*>*))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Func_2<::System::Int32, ::DEIPGFGBEMG*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::Int32, ::DEIPGFGBEMG*>*))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_CTOR_1_OFFSET))(this, a1, a2);
		}

		::DEIPGFGBEMG* LKKPFILCEAO(::System::Int32 a1)
		{
			return ((::DEIPGFGBEMG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_LKKPFILCEAO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::IEOOKKEPHFL a1, ::IEOOKKEPHFL a2)
		{
			return ((::System::Boolean(*)(::IEOOKKEPHFL, ::IEOOKKEPHFL))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::IEOOKKEPHFL a1, ::IEOOKKEPHFL a2)
		{
			return ((::System::Boolean(*)(::IEOOKKEPHFL, ::IEOOKKEPHFL))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::IEOOKKEPHFL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEOOKKEPHFL))((::PBYTE)hIl2Cpp + IEOOKKEPHFL_EQUALS_1_OFFSET))(this, a1);
		}
		*/

	};
