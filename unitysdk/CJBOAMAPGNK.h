#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
class DEIPGFGBEMG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Text { class StringBuilder; }

#define CJBOAMAPGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x3C52020)
#define CJBOAMAPGNK_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x2305FF0)
#define CJBOAMAPGNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C52250)
#define CJBOAMAPGNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C521E0)
#define CJBOAMAPGNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C521D0)
#define CJBOAMAPGNK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC66400)
#define CJBOAMAPGNK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC663D0)
#define CJBOAMAPGNK_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C52040)
#define CJBOAMAPGNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C52030)

inline static constexpr unsigned int CJBOAMAPGNK_TypeDefinitionIndex = 44223;

	struct alignas(8) CJBOAMAPGNK
	{
		::DEIPGFGBEMG* DPGGHOHAEMJ; // 0x10
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* GFEEGKHHFHH; // 0x18
		::System::Void _ctor(::DEIPGFGBEMG* a1, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DEIPGFGBEMG*, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CJBOAMAPGNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOAMAPGNK_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CJBOAMAPGNK_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::CJBOAMAPGNK a1, ::CJBOAMAPGNK a2)
		{
			return ((::System::Boolean(*)(::CJBOAMAPGNK, ::CJBOAMAPGNK))((::PBYTE)hIl2Cpp + CJBOAMAPGNK_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::CJBOAMAPGNK a1, ::CJBOAMAPGNK a2)
		{
			return ((::System::Boolean(*)(::CJBOAMAPGNK, ::CJBOAMAPGNK))((::PBYTE)hIl2Cpp + CJBOAMAPGNK_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOAMAPGNK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJBOAMAPGNK_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::CJBOAMAPGNK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJBOAMAPGNK))((::PBYTE)hIl2Cpp + CJBOAMAPGNK_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::DEIPGFGBEMG* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DEIPGFGBEMG*, ::System::Object*))((::PBYTE)hIl2Cpp + CJBOAMAPGNK_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
