#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNFCHILBJDD;
class MEHINBDPFCF;
class ODGPPIHLOFF;

#define HNKNMKNAPJO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15D9EC40)
#define HNKNMKNAPJO_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15D9EBC0)
#define HNKNMKNAPJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D9EDA0)
#define HNKNMKNAPJO_DFJOEAIABMJ_OFFSET UNITYSDK_OFFSET(0x15D9EB10)

	class HNKNMKNAPJO : public ::System::Object
	{
	public:
		static ::GNFCHILBJDD** StaticGet_MFPNICMCKJG()
		{
			return (::GNFCHILBJDD**)UnitySDK::FromName("", "HNKNMKNAPJO")->GetStaticField(0x32090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNKNMKNAPJO_CCTOR_OFFSET))();
		}

		static ::System::Int32 DFJOEAIABMJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HNKNMKNAPJO_DFJOEAIABMJ_OFFSET))();
		}

		static ::ODGPPIHLOFF* ACMKLFOMPFC()
		{
			return ((::ODGPPIHLOFF*(*)())((::PBYTE)hIl2Cpp + HNKNMKNAPJO_ACMKLFOMPFC_OFFSET))();
		}

		static ::System::Void ABKBOGIGAEH(::MEHINBDPFCF* a1)
		{
			return ((::System::Void(*)(::MEHINBDPFCF*))((::PBYTE)hIl2Cpp + HNKNMKNAPJO_ABKBOGIGAEH_OFFSET))(a1);
		}

	};
