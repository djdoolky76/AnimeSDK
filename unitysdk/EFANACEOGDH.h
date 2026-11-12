#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text { class StringBuilder; }

#define EFANACEOGDH_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define EFANACEOGDH_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3EA1380)
#define EFANACEOGDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3EA1A40)
#define EFANACEOGDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EA19E0)
#define EFANACEOGDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3EA19D0)
#define EFANACEOGDH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1FF1A300)
#define EFANACEOGDH_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1FF1A2E0)
#define EFANACEOGDH_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3EA18F0)
#define EFANACEOGDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EA18E0)

inline static constexpr unsigned int EFANACEOGDH_TypeDefinitionIndex = 45264;

	struct alignas(8) EFANACEOGDH
	{
		::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* IMDLGFPMPEK; // 0x10
		::System::Void _ctor(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + EFANACEOGDH_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANACEOGDH_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + EFANACEOGDH_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::EFANACEOGDH a1, ::EFANACEOGDH a2)
		{
			return ((::System::Boolean(*)(::EFANACEOGDH, ::EFANACEOGDH))((::PBYTE)hIl2Cpp + EFANACEOGDH_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::EFANACEOGDH a1, ::EFANACEOGDH a2)
		{
			return ((::System::Boolean(*)(::EFANACEOGDH, ::EFANACEOGDH))((::PBYTE)hIl2Cpp + EFANACEOGDH_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANACEOGDH_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANACEOGDH_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::EFANACEOGDH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFANACEOGDH))((::PBYTE)hIl2Cpp + EFANACEOGDH_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANACEOGDH_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
