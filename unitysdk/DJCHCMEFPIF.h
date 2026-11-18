#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"

namespace System { class Object; }
namespace System { class String; }

#define DJCHCMEFPIF_BIDJGPPIFIO_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define DJCHCMEFPIF_BNDDIFCJIPC_OFFSET UNITYSDK_OFFSET(0x13E52640)
#define DJCHCMEFPIF_CAPNNFOOPKL_OFFSET UNITYSDK_OFFSET(0x722C60)
#define DJCHCMEFPIF_CLEOCOLLPIA_OFFSET UNITYSDK_OFFSET(0x722D60)
#define DJCHCMEFPIF_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define DJCHCMEFPIF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x722CD0)
#define DJCHCMEFPIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x722BD0)
#define DJCHCMEFPIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x722B40)
#define DJCHCMEFPIF_FFBCDIDHNGK_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define DJCHCMEFPIF_FHPIDCIMPBF_OFFSET UNITYSDK_OFFSET(0x13E524C0)
#define DJCHCMEFPIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x722BE0)
#define DJCHCMEFPIF_GJGFPDAHKLF_OFFSET UNITYSDK_OFFSET(0x359320)
#define DJCHCMEFPIF_HLOGECFKGKE_1_OFFSET UNITYSDK_OFFSET(0x13E527F0)
#define DJCHCMEFPIF_HLOGECFKGKE_OFFSET UNITYSDK_OFFSET(0x13E52530)
#define DJCHCMEFPIF_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x722E70)
#define DJCHCMEFPIF_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x722C70)
#define DJCHCMEFPIF_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x722E00)
#define DJCHCMEFPIF_JNKEOAIEBMF_OFFSET UNITYSDK_OFFSET(0x722EE0)
#define DJCHCMEFPIF_KHDPPELBDEH_OFFSET UNITYSDK_OFFSET(0x363D60)
#define DJCHCMEFPIF_LDBINPPPCFL_OFFSET UNITYSDK_OFFSET(0x722EF0)
#define DJCHCMEFPIF_NKNMBGNLJBF_OFFSET UNITYSDK_OFFSET(0x359150)
#define DJCHCMEFPIF_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define DJCHCMEFPIF_PJLMJHJAHCB_OFFSET UNITYSDK_OFFSET(0x5D0520)
#define DJCHCMEFPIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x722C50)

inline static constexpr unsigned int DJCHCMEFPIF_TypeDefinitionIndex = 83809;

struct alignas(8) DJCHCMEFPIF
{
	::System::Int32 _PHDHEJEABIL_k__BackingField; // 0x10
	::System::Int32 _HDBKBDBFJOE_k__BackingField; // 0x14
	::System::Int32 _JIINNKIBLMD_k__BackingField; // 0x18
	::System::Int32 _MDJDPOFDJKH_k__BackingField; // 0x1C
	::System::String* AIJFEHJHFNG; // 0x20

	/*
	::System::Boolean Equals(::DJCHCMEFPIF LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJCHCMEFPIF))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_TOSTRING_OFFSET))(this);
	}

	::System::String* CAPNNFOOPKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_CAPNNFOOPKL_OFFSET))(this);
	}

	::System::Int32 GJGFPDAHKLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_GJGFPDAHKLF_OFFSET))(this);
	}

	::System::Void PJLMJHJAHCB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_PJLMJHJAHCB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void FFBCDIDHNGK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_FFBCDIDHNGK_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::DJCHCMEFPIF FHPIDCIMPBF(::System::Int32 NPKEGCLAKJF)
	{
		return ((::DJCHCMEFPIF(*)(::System::Int32))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_FHPIDCIMPBF_OFFSET))(NPKEGCLAKJF);
	}
	*/

	/*
	static ::DJCHCMEFPIF HLOGECFKGKE(::System::Int32 KMMGKJPAOMF, ::System::Int32 OLAHFMECDAI, ::System::Int32 BFBCMALKEIE)
	{
		return ((::DJCHCMEFPIF(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_HLOGECFKGKE_OFFSET))(KMMGKJPAOMF, OLAHFMECDAI, BFBCMALKEIE);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void NKNMBGNLJBF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_NKNMBGNLJBF_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::DJCHCMEFPIF BNDDIFCJIPC(::System::Int32 NPKEGCLAKJF, ::System::Int32 KMMGKJPAOMF, ::System::Int32 OLAHFMECDAI, ::System::Int32 BFBCMALKEIE)
	{
		return ((::DJCHCMEFPIF(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_BNDDIFCJIPC_OFFSET))(NPKEGCLAKJF, KMMGKJPAOMF, OLAHFMECDAI, BFBCMALKEIE);
	}
	*/

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_NLBOALNBODH_OFFSET))(this);
	}

	::System::Void BIDJGPPIFIO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_BIDJGPPIFIO_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	::System::Boolean CLEOCOLLPIA(::DJCHCMEFPIF LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJCHCMEFPIF))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_CLEOCOLLPIA_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 KHDPPELBDEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_KHDPPELBDEH_OFFSET))(this);
	}

	/*
	static ::DJCHCMEFPIF HLOGECFKGKE_1(::System::String* EMIKCAHJLGB, ::System::Int32 BFBCMALKEIE)
	{
		return ((::DJCHCMEFPIF(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_HLOGECFKGKE_1_OFFSET))(EMIKCAHJLGB, BFBCMALKEIE);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::UInt64 JNKEOAIEBMF()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_JNKEOAIEBMF_OFFSET))(this);
	}

	::Foundation::ViewObject::GroupMemberIdentifier LDBINPPPCFL()
	{
		return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHCMEFPIF_LDBINPPPCFL_OFFSET))(this);
	}
};
