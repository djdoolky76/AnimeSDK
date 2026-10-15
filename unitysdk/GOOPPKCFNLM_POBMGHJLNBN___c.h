#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOPPKCFNLM_POBMGHJLNBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C64C250)
#define GOOPPKCFNLM_POBMGHJLNBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C64C290)
#define GOOPPKCFNLM_POBMGHJLNBN___C__DEBUGSTRING_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C64C2A0)

inline static constexpr unsigned int GOOPPKCFNLM_POBMGHJLNBN___c_TypeDefinitionIndex = 37333;

	class GOOPPKCFNLM_POBMGHJLNBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CF00);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CF08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOPPKCFNLM_POBMGHJLNBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_POBMGHJLNBN___C_CTOR_OFFSET))(this);
		}

		::System::String* _DebugString_b__2_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_POBMGHJLNBN___C__DEBUGSTRING_B__2_0_OFFSET))(this, a1);
		}

	};
