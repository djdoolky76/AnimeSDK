#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMECHIFGKAD;
namespace System { class Object; }

#define NMECHIFGKAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB71040)
#define NMECHIFGKAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB71070)
#define NMECHIFGKAD___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB71080)

	class NMECHIFGKAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMECHIFGKAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMECHIFGKAD___C_CTOR_OFFSET))(this);
		}

		::NMECHIFGKAD* __cctor_b__43_0()
		{
			return ((::NMECHIFGKAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMECHIFGKAD___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
