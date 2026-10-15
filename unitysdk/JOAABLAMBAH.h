#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;

#define JOAABLAMBAH_AJIOALIACKF_OFFSET UNITYSDK_OFFSET(0xB2942E0)
#define JOAABLAMBAH_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xB294140)
#define JOAABLAMBAH_CDEBBIONEDG_OFFSET UNITYSDK_OFFSET(0xB2944D0)
#define JOAABLAMBAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB294130)
#define JOAABLAMBAH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB2941E0)
#define JOAABLAMBAH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB2941A0)
#define JOAABLAMBAH_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xB294A10)
#define JOAABLAMBAH_PJDJLFFOFDH_OFFSET UNITYSDK_OFFSET(0xB294780)

	class JOAABLAMBAH : public ::System::Object
	{
	public:
		::OMPCEECHGJK* PDENFEFCAGN; // 0x10
		::AFEPOFEOCDI* FKINCGODJEP; // 0x18
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + JOAABLAMBAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAABLAMBAH_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAABLAMBAH_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAABLAMBAH_EXECUTE_OFFSET))(this);
		}

		::System::Void AJIOALIACKF(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JOAABLAMBAH_AJIOALIACKF_OFFSET))(this, a1);
		}

		::System::Void CDEBBIONEDG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JOAABLAMBAH_CDEBBIONEDG_OFFSET))(this, a1);
		}

		::System::Void PJDJLFFOFDH(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JOAABLAMBAH_PJDJLFFOFDH_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JOAABLAMBAH_LLBFBLIGNDG_OFFSET))(this, a1);
		}

	};
