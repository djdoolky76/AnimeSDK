#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGAMADCNPAG;
namespace System { class Object; }

#define MGAMADCNPAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA1C390)
#define MGAMADCNPAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1C3D0)
#define MGAMADCNPAG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA1C3E0)

	class MGAMADCNPAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CCB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGAMADCNPAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG___C_CTOR_OFFSET))(this);
		}

		::MGAMADCNPAG* __cctor_b__38_0()
		{
			return ((::MGAMADCNPAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
