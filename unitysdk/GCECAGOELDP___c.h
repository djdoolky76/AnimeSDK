#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCECAGOELDP;
namespace System { class Object; }

#define GCECAGOELDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43B8D0)
#define GCECAGOELDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43B910)
#define GCECAGOELDP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E43B920)

	class GCECAGOELDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCECAGOELDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP___C_CTOR_OFFSET))(this);
		}

		::GCECAGOELDP* __cctor_b__33_0()
		{
			return ((::GCECAGOELDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
