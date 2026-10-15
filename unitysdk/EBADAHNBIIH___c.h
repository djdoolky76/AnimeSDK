#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBADAHNBIIH;
namespace System { class Object; }

#define EBADAHNBIIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E230890)
#define EBADAHNBIIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2308D0)
#define EBADAHNBIIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2308E0)

	class EBADAHNBIIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBADAHNBIIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH___C_CTOR_OFFSET))(this);
		}

		::EBADAHNBIIH* __cctor_b__28_0()
		{
			return ((::EBADAHNBIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
