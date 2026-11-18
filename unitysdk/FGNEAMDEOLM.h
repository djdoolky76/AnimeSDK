#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FGNEAMDEOLM_CADMAMFIOIE_OFFSET UNITYSDK_OFFSET(0x14ACB160)
#define FGNEAMDEOLM_ELHOALJLOIG_OFFSET UNITYSDK_OFFSET(0x14ACB2F0)
#define FGNEAMDEOLM_EMEPDMJDHEM_OFFSET UNITYSDK_OFFSET(0x14ACB2E0)
#define FGNEAMDEOLM_JNDAJLMDEPA_OFFSET UNITYSDK_OFFSET(0x14ACB000)
#define FGNEAMDEOLM_LPHKIMPMDFD_OFFSET UNITYSDK_OFFSET(0x14ACB170)
#define FGNEAMDEOLM_MJMAHLGOOEO_OFFSET UNITYSDK_OFFSET(0x14ACB180)
#define FGNEAMDEOLM_OCPJCFAOFKP_OFFSET UNITYSDK_OFFSET(0x14ACB2D0)
#define FGNEAMDEOLM_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x14ACAFA0)
#define FGNEAMDEOLM_PKJEFEJDBJH_OFFSET UNITYSDK_OFFSET(0x14ACAFF0)
#define FGNEAMDEOLM__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACAF90)

inline static constexpr unsigned int FGNEAMDEOLM_TypeDefinitionIndex = 63403;

class FGNEAMDEOLM : public ::System::Object
{
public:
	// static const ::System::Int32 PAIGKBGHAMN = 0x10; // 0x0
	// static const ::System::Byte DBBMMBLJOAG = 0x4C; // 0x0
	// static const ::System::Byte PMIKHCFAAOA = 0x42; // 0x0
	// static const ::System::Byte NEIOOPCHMGI = 0x45; // 0x0
	::Il2CppArray<::System::Byte>* LGIDDJPJLLG; // 0x10
	::System::Single _NDOKOJIDLEF_k__BackingField; // 0x18
	::System::UInt16 _AIAHFFHDECE_k__BackingField; // 0x1C
	::System::Byte _padding0[0x2];
	::System::Int32 _LODHAJKCCCK_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNEAMDEOLM__CTOR_OFFSET))(this);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNEAMDEOLM_PDAADHDFGKP_OFFSET))(this);
	}

	::System::Single PKJEFEJDBJH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNEAMDEOLM_PKJEFEJDBJH_OFFSET))(this);
	}

	static ::System::Boolean JNDAJLMDEPA(::Il2CppArray<::System::Byte>* FHLDAJFKJGN, ::FGNEAMDEOLM*& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::FGNEAMDEOLM*&))((::PBYTE)hIl2Cpp + FGNEAMDEOLM_JNDAJLMDEPA_OFFSET))(FHLDAJFKJGN, LJBPECKCCEA);
	}

	::System::UInt16 CADMAMFIOIE()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNEAMDEOLM_CADMAMFIOIE_OFFSET))(this);
	}

	::System::Void LPHKIMPMDFD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGNEAMDEOLM_LPHKIMPMDFD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single MJMAHLGOOEO(::System::Single NMIDJEKKPBH)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGNEAMDEOLM_MJMAHLGOOEO_OFFSET))(this, NMIDJEKKPBH);
	}

	::System::Void OCPJCFAOFKP(::System::UInt16 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + FGNEAMDEOLM_OCPJCFAOFKP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EMEPDMJDHEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNEAMDEOLM_EMEPDMJDHEM_OFFSET))(this);
	}

	::System::Void ELHOALJLOIG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGNEAMDEOLM_ELHOALJLOIG_OFFSET))(this, EGEGIMGMJHN);
	}
};
