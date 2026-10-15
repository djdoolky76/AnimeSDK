#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEGBMCKBMOB;
namespace System { class Object; }

#define JEGBMCKBMOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7195A0)
#define JEGBMCKBMOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7195E0)
#define JEGBMCKBMOB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E7195F0)

	class JEGBMCKBMOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEGBMCKBMOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB___C_CTOR_OFFSET))(this);
		}

		::JEGBMCKBMOB* __cctor_b__43_0()
		{
			return ((::JEGBMCKBMOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
