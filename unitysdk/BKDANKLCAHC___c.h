#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKDANKLCAHC;
namespace System { class Object; }

#define BKDANKLCAHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF22910)
#define BKDANKLCAHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF22950)
#define BKDANKLCAHC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF22960)

inline static constexpr unsigned int BKDANKLCAHC___c_TypeDefinitionIndex = 29967;

	class BKDANKLCAHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKDANKLCAHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDANKLCAHC___C_CTOR_OFFSET))(this);
		}

		::BKDANKLCAHC* __cctor_b__18_0()
		{
			return ((::BKDANKLCAHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDANKLCAHC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
