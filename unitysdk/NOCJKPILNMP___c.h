#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOCJKPILNMP;
namespace System { class Object; }

#define NOCJKPILNMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB89220)
#define NOCJKPILNMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB89260)
#define NOCJKPILNMP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB89270)

	class NOCJKPILNMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOCJKPILNMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP___C_CTOR_OFFSET))(this);
		}

		::NOCJKPILNMP* __cctor_b__38_0()
		{
			return ((::NOCJKPILNMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
