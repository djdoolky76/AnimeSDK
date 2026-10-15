#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHPBJOMBCAD;
namespace System { class Object; }

#define BHPBJOMBCAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFE330)
#define BHPBJOMBCAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFE360)
#define BHPBJOMBCAD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDFE370)

	class BHPBJOMBCAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x479C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHPBJOMBCAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD___C_CTOR_OFFSET))(this);
		}

		::BHPBJOMBCAD* __cctor_b__33_0()
		{
			return ((::BHPBJOMBCAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
