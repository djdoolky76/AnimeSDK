#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNFCHILBJDD;
class ODGPPIHLOFF;
class POLGKBLMEBP;

#define GBOIBOKKNEE_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1B886EE0)
#define GBOIBOKKNEE_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1B886E40)
#define GBOIBOKKNEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B887070)
#define GBOIBOKKNEE_DFJOEAIABMJ_OFFSET UNITYSDK_OFFSET(0x1B886D90)

inline static constexpr unsigned int GBOIBOKKNEE_TypeDefinitionIndex = 50279;

	class GBOIBOKKNEE : public ::System::Object
	{
	public:
		static ::GNFCHILBJDD** StaticGet_MFPNICMCKJG()
		{
			return (::GNFCHILBJDD**)UnitySDK::FromName("", "GBOIBOKKNEE")->GetStaticField(0x59740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBOIBOKKNEE_CCTOR_OFFSET))();
		}

		static ::System::Int32 DFJOEAIABMJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + GBOIBOKKNEE_DFJOEAIABMJ_OFFSET))();
		}

		static ::ODGPPIHLOFF* ACMKLFOMPFC()
		{
			return ((::ODGPPIHLOFF*(*)())((::PBYTE)hIl2Cpp + GBOIBOKKNEE_ACMKLFOMPFC_OFFSET))();
		}

		static ::System::Void ABKBOGIGAEH(::POLGKBLMEBP* a1)
		{
			return ((::System::Void(*)(::POLGKBLMEBP*))((::PBYTE)hIl2Cpp + GBOIBOKKNEE_ABKBOGIGAEH_OFFSET))(a1);
		}

	};
