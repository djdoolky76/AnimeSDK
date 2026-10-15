#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBFDEKAAIFO;
namespace System { class Object; }

#define BBFDEKAAIFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C2170)
#define BBFDEKAAIFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C21B0)
#define BBFDEKAAIFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7C21C0)

	class BBFDEKAAIFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBFDEKAAIFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO___C_CTOR_OFFSET))(this);
		}

		::BBFDEKAAIFO* __cctor_b__28_0()
		{
			return ((::BBFDEKAAIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
