#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDEOLCNPBPP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define LOADPICBEPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7F1D10)
#define LOADPICBEPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F1D50)
#define LOADPICBEPE___C___ONPLAYERFINISH_B__32_0_OFFSET UNITYSDK_OFFSET(0xB7F1D60)

inline static constexpr unsigned int LOADPICBEPE___c_TypeDefinitionIndex = 74209;

	class LOADPICBEPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CBE0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::BDEOLCNPBPP*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::BDEOLCNPBPP*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CBE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOADPICBEPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE___C_CTOR_OFFSET))(this);
		}

		::BDEOLCNPBPP* __OnPlayerFinish_b__32_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::BDEOLCNPBPP*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + LOADPICBEPE___C___ONPLAYERFINISH_B__32_0_OFFSET))(this, a1);
		}

	};
