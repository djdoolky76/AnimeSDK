#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define JKNBKEHFJJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C56B430)
#define JKNBKEHFJJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56B470)
#define JKNBKEHFJJC___C__COUNTPOSITIVE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1C56B4C0)
#define JKNBKEHFJJC___C__ITERATEALL_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C56B480)
#define JKNBKEHFJJC___C__ITERATEPOSITIVE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1C56B4B0)
#define JKNBKEHFJJC___C__TOSTRING_B__19_0_OFFSET UNITYSDK_OFFSET(0x1C56B4D0)

inline static constexpr unsigned int JKNBKEHFJJC___c_TypeDefinitionIndex = 41731;

	class JKNBKEHFJJC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18230);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18238);
		}

		static ::System::Func_2<::System::Object*, ::System::Collections::Generic::KeyValuePair*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18240);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18248);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKNBKEHFJJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNBKEHFJJC___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* _IterateAll_b__6_1(::System::Object* a1)
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC___C__ITERATEALL_B__6_1_OFFSET))(this, a1);
		}

		::System::Boolean _IteratePositive_b__10_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC___C__ITERATEPOSITIVE_B__10_0_OFFSET))(this, a1);
		}

		::System::Boolean _CountPositive_b__11_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC___C__COUNTPOSITIVE_B__11_0_OFFSET))(this, a1);
		}

		::System::String* _ToString_b__19_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC___C__TOSTRING_B__19_0_OFFSET))(this, a1);
		}

	};
