#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIOOFPINJMD;
namespace System { class Object; }

#define AIOOFPINJMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E283070)
#define AIOOFPINJMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2830B0)
#define AIOOFPINJMD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2830C0)

	class AIOOFPINJMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOOFPINJMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOOFPINJMD___C_CTOR_OFFSET))(this);
		}

		::AIOOFPINJMD* __cctor_b__23_0()
		{
			return ((::AIOOFPINJMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOOFPINJMD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
