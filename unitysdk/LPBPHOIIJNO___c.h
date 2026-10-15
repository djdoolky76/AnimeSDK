#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPBPHOIIJNO;
namespace System { class Object; }

#define LPBPHOIIJNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C8E60)
#define LPBPHOIIJNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C8EA0)
#define LPBPHOIIJNO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9C8EB0)

	class LPBPHOIIJNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPBPHOIIJNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPHOIIJNO___C_CTOR_OFFSET))(this);
		}

		::LPBPHOIIJNO* __cctor_b__23_0()
		{
			return ((::LPBPHOIIJNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPHOIIJNO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
