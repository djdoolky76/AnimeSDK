#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHLGMFCPIBD;
namespace System { class Object; }

#define NHLGMFCPIBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB22CF0)
#define NHLGMFCPIBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB22D30)
#define NHLGMFCPIBD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB22D40)

	class NHLGMFCPIBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHLGMFCPIBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD___C_CTOR_OFFSET))(this);
		}

		::NHLGMFCPIBD* __cctor_b__23_0()
		{
			return ((::NHLGMFCPIBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
