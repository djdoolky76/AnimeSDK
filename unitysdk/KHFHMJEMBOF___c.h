#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHFHMJEMBOF;
namespace System { class Object; }

#define KHFHMJEMBOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E843230)
#define KHFHMJEMBOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E843270)
#define KHFHMJEMBOF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E843280)

	class KHFHMJEMBOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHFHMJEMBOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHMJEMBOF___C_CTOR_OFFSET))(this);
		}

		::KHFHMJEMBOF* __cctor_b__23_0()
		{
			return ((::KHFHMJEMBOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHMJEMBOF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
