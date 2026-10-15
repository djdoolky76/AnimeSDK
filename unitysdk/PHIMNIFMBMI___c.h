#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHIMNIFMBMI;
namespace System { class Object; }

#define PHIMNIFMBMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3D3F0)
#define PHIMNIFMBMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3D430)
#define PHIMNIFMBMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF3D440)

	class PHIMNIFMBMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHIMNIFMBMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI___C_CTOR_OFFSET))(this);
		}

		::PHIMNIFMBMI* __cctor_b__28_0()
		{
			return ((::PHIMNIFMBMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
