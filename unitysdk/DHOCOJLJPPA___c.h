#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHOCOJLJPPA;
namespace System { class Object; }

#define DHOCOJLJPPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B9BB0)
#define DHOCOJLJPPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B9BF0)
#define DHOCOJLJPPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1B9C00)

	class DHOCOJLJPPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHOCOJLJPPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA___C_CTOR_OFFSET))(this);
		}

		::DHOCOJLJPPA* __cctor_b__28_0()
		{
			return ((::DHOCOJLJPPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
