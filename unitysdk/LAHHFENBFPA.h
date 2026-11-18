#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGFOLEDCHGI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AHKNEFMGBCC;
namespace System { class Action; }

#define LAHHFENBFPA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18DF4F90)
#define LAHHFENBFPA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18DF4D60)
#define LAHHFENBFPA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18DF4D70)
#define LAHHFENBFPA_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x18DF51E0)
#define LAHHFENBFPA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18DF4E10)
#define LAHHFENBFPA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18DF4F10)
#define LAHHFENBFPA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18DF5050)
#define LAHHFENBFPA_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x18DF51F0)
#define LAHHFENBFPA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18DF4B10)
#define LAHHFENBFPA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18DF4AF0)
#define LAHHFENBFPA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18DF4CA0)
#define LAHHFENBFPA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF5040)

inline static constexpr unsigned int LAHHFENBFPA_TypeDefinitionIndex = 14614;

class LAHHFENBFPA : public ::System::Object
{
public:
	::AHKNEFMGBCC* _KMJDPDLPPFE_k__BackingField; // 0x10
	::HGFOLEDCHGI DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x28
	::AHKNEFMGBCC* EFFAONJBCOG; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHFENBFPA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHFENBFPA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHFENBFPA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHFENBFPA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHFENBFPA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LAHHFENBFPA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LAHHFENBFPA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHFENBFPA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LAHHFENBFPA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::AHKNEFMGBCC* EKHHIIJOEFN()
	{
		return ((::AHKNEFMGBCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHFENBFPA_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::AHKNEFMGBCC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AHKNEFMGBCC*))((::PBYTE)hIl2Cpp + LAHHFENBFPA_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHFENBFPA_CHLEALKAOJO_OFFSET))(this);
	}
};
