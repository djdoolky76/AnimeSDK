#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOPPKCFNLM_HMIJPMHKIME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C61DA50)
#define GOOPPKCFNLM_HMIJPMHKIME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C61DA90)
#define GOOPPKCFNLM_HMIJPMHKIME___C__DEBUGSTRING_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C61DAA0)
#define GOOPPKCFNLM_HMIJPMHKIME___C__DEBUGSTRING_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C61DB40)

inline static constexpr unsigned int GOOPPKCFNLM_HMIJPMHKIME___c_TypeDefinitionIndex = 37331;

	class GOOPPKCFNLM_HMIJPMHKIME___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69BF0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::UInt32>, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::UInt32>, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69BF8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME___C_CTOR_OFFSET))(this);
		}

		::System::String* _DebugString_b__6_0(::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::UInt32> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::UInt32>))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME___C__DEBUGSTRING_B__6_0_OFFSET))(this, a1);
		}

		::System::String* _DebugString_b__6_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME___C__DEBUGSTRING_B__6_1_OFFSET))(this, a1);
		}

	};
