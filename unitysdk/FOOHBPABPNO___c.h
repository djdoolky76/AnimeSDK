#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOOHBPABPNO;
namespace System { class Object; }

#define FOOHBPABPNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E401E90)
#define FOOHBPABPNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E401ED0)
#define FOOHBPABPNO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E401EE0)

	class FOOHBPABPNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x664D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOOHBPABPNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOHBPABPNO___C_CTOR_OFFSET))(this);
		}

		::FOOHBPABPNO* __cctor_b__23_0()
		{
			return ((::FOOHBPABPNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOHBPABPNO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
