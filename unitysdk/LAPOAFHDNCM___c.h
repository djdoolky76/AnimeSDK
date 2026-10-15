#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAPOAFHDNCM;
namespace System { class Object; }

#define LAPOAFHDNCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D57A0)
#define LAPOAFHDNCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D57E0)
#define LAPOAFHDNCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8D57F0)

	class LAPOAFHDNCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAPOAFHDNCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM___C_CTOR_OFFSET))(this);
		}

		::LAPOAFHDNCM* __cctor_b__23_0()
		{
			return ((::LAPOAFHDNCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
