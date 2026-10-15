#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJOACNKDPEI;
namespace System { class Object; }

#define CJOACNKDPEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E5960)
#define CJOACNKDPEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E5990)
#define CJOACNKDPEI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0E59A0)

	class CJOACNKDPEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJOACNKDPEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOACNKDPEI___C_CTOR_OFFSET))(this);
		}

		::CJOACNKDPEI* __cctor_b__23_0()
		{
			return ((::CJOACNKDPEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOACNKDPEI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
