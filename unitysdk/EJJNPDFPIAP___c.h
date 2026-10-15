#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJJNPDFPIAP;
namespace System { class Object; }

#define EJJNPDFPIAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BACC0)
#define EJJNPDFPIAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BACF0)
#define EJJNPDFPIAP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2BAD00)

	class EJJNPDFPIAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJJNPDFPIAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJNPDFPIAP___C_CTOR_OFFSET))(this);
		}

		::EJJNPDFPIAP* __cctor_b__33_0()
		{
			return ((::EJJNPDFPIAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJNPDFPIAP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
