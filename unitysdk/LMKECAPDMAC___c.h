#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMKECAPDMAC;
namespace System { class Object; }

#define LMKECAPDMAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A8CE0)
#define LMKECAPDMAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A8D20)
#define LMKECAPDMAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9A8D30)

	class LMKECAPDMAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMKECAPDMAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC___C_CTOR_OFFSET))(this);
		}

		::LMKECAPDMAC* __cctor_b__33_0()
		{
			return ((::LMKECAPDMAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
