#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMIKEILGNGK;
namespace System { class Object; }

#define CMIKEILGNGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E102870)
#define CMIKEILGNGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1028B0)
#define CMIKEILGNGK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1028C0)

	class CMIKEILGNGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMIKEILGNGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK___C_CTOR_OFFSET))(this);
		}

		::CMIKEILGNGK* __cctor_b__33_0()
		{
			return ((::CMIKEILGNGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
