#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILDOMDOFEPK;
namespace System { class Object; }

#define ILDOMDOFEPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AB8F0)
#define ILDOMDOFEPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AB930)
#define ILDOMDOFEPK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6AB940)

	class ILDOMDOFEPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x561D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILDOMDOFEPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK___C_CTOR_OFFSET))(this);
		}

		::ILDOMDOFEPK* __cctor_b__33_0()
		{
			return ((::ILDOMDOFEPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
