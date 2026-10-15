#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAILAPHKBNO;
namespace System { class Object; }

#define EAILAPHKBNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FDDA0)
#define EAILAPHKBNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FDDE0)
#define EAILAPHKBNO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1FDDF0)

inline static constexpr unsigned int EAILAPHKBNO___c_TypeDefinitionIndex = 30007;

	class EAILAPHKBNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DE30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAILAPHKBNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAILAPHKBNO___C_CTOR_OFFSET))(this);
		}

		::EAILAPHKBNO* __cctor_b__23_0()
		{
			return ((::EAILAPHKBNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAILAPHKBNO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
