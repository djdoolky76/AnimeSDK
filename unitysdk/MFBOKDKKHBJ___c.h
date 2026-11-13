#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLMLFDJLLH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MFBOKDKKHBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17C76AB0)
#define MFBOKDKKHBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17C76AF0)
#define MFBOKDKKHBJ___C__GETLENGTH_B__7_0_OFFSET UNITYSDK_OFFSET(0x17C76B00)

inline static constexpr unsigned int MFBOKDKKHBJ___c_TypeDefinitionIndex = 76712;

	class MFBOKDKKHBJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::EJLMLFDJLLH*, ::System::Single>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::EJLMLFDJLLH*, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73380);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73388);
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
