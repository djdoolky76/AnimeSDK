#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKEFJFJLOMJ;
namespace System { class Object; }

#define KKEFJFJLOMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB92BE0)
#define KKEFJFJLOMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB92C20)
#define KKEFJFJLOMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB92C30)

inline static constexpr unsigned int KKEFJFJLOMJ___c_TypeDefinitionIndex = 33012;

	class KKEFJFJLOMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKEFJFJLOMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ___C_CTOR_OFFSET))(this);
		}

		::KKEFJFJLOMJ* __cctor_b__23_0()
		{
			return ((::KKEFJFJLOMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
