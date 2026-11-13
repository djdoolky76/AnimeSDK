#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;

#define JOAABLAMBAH_AJIOALIACKF_OFFSET UNITYSDK_OFFSET(0x1B4CF0B0)
#define JOAABLAMBAH_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x1B4CEF10)
#define JOAABLAMBAH_CDEBBIONEDG_OFFSET UNITYSDK_OFFSET(0x1B4CF2A0)
#define JOAABLAMBAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CEF00)
#define JOAABLAMBAH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4CEFB0)
#define JOAABLAMBAH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4CEF70)
#define JOAABLAMBAH_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0x1B4CF7E0)
#define JOAABLAMBAH_PJDJLFFOFDH_OFFSET UNITYSDK_OFFSET(0x1B4CF550)

inline static constexpr unsigned int JOAABLAMBAH_TypeDefinitionIndex = 78998;

	class JOAABLAMBAH : public ::System::Object
	{
	public:
		::AFEPOFEOCDI* FKINCGODJEP; // 0x10
		::OMPCEECHGJK* PDENFEFCAGN; // 0x18
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
