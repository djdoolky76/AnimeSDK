#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class BDEOLCNPBPP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LOADPICBEPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7EB6E0)
#define LOADPICBEPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7EB720)
#define LOADPICBEPE___C___ONPLAYERFINISH_B__32_0_OFFSET UNITYSDK_OFFSET(0xB7EB730)

inline static constexpr unsigned int LOADPICBEPE___c_TypeDefinitionIndex = 74208;

	class LOADPICBEPE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::BDEOLCNPBPP*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::BDEOLCNPBPP*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B070);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOADPICBEPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE___C_CTOR_OFFSET))(this);
		}

		::BDEOLCNPBPP* __OnPlayerFinish_b__32_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::BDEOLCNPBPP*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + LOADPICBEPE___C___ONPLAYERFINISH_B__32_0_OFFSET))(this, a1);
		}

	};
