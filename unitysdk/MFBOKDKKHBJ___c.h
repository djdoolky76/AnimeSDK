#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLMLFDJLLH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MFBOKDKKHBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8ECDC0)
#define MFBOKDKKHBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB8ECE00)
#define MFBOKDKKHBJ___C__GETLENGTH_B__7_0_OFFSET UNITYSDK_OFFSET(0xB8ECE10)

inline static constexpr unsigned int MFBOKDKKHBJ___c_TypeDefinitionIndex = 74565;

	class MFBOKDKKHBJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::EJLMLFDJLLH*, ::System::Single>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::EJLMLFDJLLH*, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F670);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F678);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFBOKDKKHBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBOKDKKHBJ___C_CTOR_OFFSET))(this);
		}

		::System::Single _GetLength_b__7_0(::EJLMLFDJLLH* a1)
		{
			return ((::System::Single(*)(::PVOID, ::EJLMLFDJLLH*))((::PBYTE)hIl2Cpp + MFBOKDKKHBJ___C__GETLENGTH_B__7_0_OFFSET))(this, a1);
		}

	};
