#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHDMHAEADMI;
namespace System { class Object; }

#define MHDMHAEADMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2DC10)
#define MHDMHAEADMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2DC50)
#define MHDMHAEADMI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA2DC60)

	class MHDMHAEADMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x509B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHDMHAEADMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDMHAEADMI___C_CTOR_OFFSET))(this);
		}

		::MHDMHAEADMI* __cctor_b__38_0()
		{
			return ((::MHDMHAEADMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDMHAEADMI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
