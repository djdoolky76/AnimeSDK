#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDLCCMGHJAD;
namespace System { class Object; }

#define HDLCCMGHJAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E551D90)
#define HDLCCMGHJAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E551DD0)
#define HDLCCMGHJAD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E551DE0)

	class HDLCCMGHJAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDLCCMGHJAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD___C_CTOR_OFFSET))(this);
		}

		::HDLCCMGHJAD* __cctor_b__23_0()
		{
			return ((::HDLCCMGHJAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
