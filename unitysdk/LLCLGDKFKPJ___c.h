#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLCLGDKFKPJ;
namespace System { class Object; }

#define LLCLGDKFKPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCBB670)
#define LLCLGDKFKPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCBB6B0)
#define LLCLGDKFKPJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FCBB6C0)

inline static constexpr unsigned int LLCLGDKFKPJ___c_TypeDefinitionIndex = 35386;

	class LLCLGDKFKPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCLGDKFKPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ___C_CTOR_OFFSET))(this);
		}

		::LLCLGDKFKPJ* __cctor_b__23_0()
		{
			return ((::LLCLGDKFKPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
