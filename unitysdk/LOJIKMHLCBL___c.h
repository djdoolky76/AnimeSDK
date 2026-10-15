#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOJIKMHLCBL;
namespace System { class Object; }

#define LOJIKMHLCBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C2B00)
#define LOJIKMHLCBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C2B40)
#define LOJIKMHLCBL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9C2B50)

	class LOJIKMHLCBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOJIKMHLCBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIKMHLCBL___C_CTOR_OFFSET))(this);
		}

		::LOJIKMHLCBL* __cctor_b__23_0()
		{
			return ((::LOJIKMHLCBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIKMHLCBL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
