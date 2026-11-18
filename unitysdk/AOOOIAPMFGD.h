#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityQuicFuncBtnChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define AOOOIAPMFGD_COHPMOEIDJG_OFFSET UNITYSDK_OFFSET(0x113C87B0)
#define AOOOIAPMFGD_DIFEJFBFFFF_OFFSET UNITYSDK_OFFSET(0x113C8740)
#define AOOOIAPMFGD_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x113C8970)
#define AOOOIAPMFGD_JIKGHFNOCBF_OFFSET UNITYSDK_OFFSET(0x113C86D0)
#define AOOOIAPMFGD_KEOOGIPBJDM_OFFSET UNITYSDK_OFFSET(0x113C8620)
#define AOOOIAPMFGD_LIDAJLDGMHO_OFFSET UNITYSDK_OFFSET(0x113C8840)
#define AOOOIAPMFGD_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x113C8610)
#define AOOOIAPMFGD_MFGEEDDMGCA_OFFSET UNITYSDK_OFFSET(0x113C86B0)
#define AOOOIAPMFGD_ONFBLIJJKBE_OFFSET UNITYSDK_OFFSET(0x113C86C0)
#define AOOOIAPMFGD_ONNPDMJFMJH_OFFSET UNITYSDK_OFFSET(0x113C8730)
#define AOOOIAPMFGD__CTOR_OFFSET UNITYSDK_OFFSET(0x113C8600)

inline static constexpr unsigned int AOOOIAPMFGD_TypeDefinitionIndex = 65461;

class AOOOIAPMFGD : public ::System::Object
{
public:
	::MoleMole::UIMainCityQuicFuncBtnChildWindowController* EAOPCMMIPJA; // 0x10
	::System::Int32 _EGBKMJIFEKN_k__BackingField; // 0x18
	::System::Boolean MOLBPPHKAGL; // 0x1C
	::System::Byte _padding0[0x3];
	::MIKOMFIBMBN _PNFABLLEIIF_k__BackingField; // 0x20

	::System::Void _ctor(::MIKOMFIBMBN HKGCJDDIMAH, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::MIKOMFIBMBN, ::System::Int32))((::PBYTE)hIl2Cpp + AOOOIAPMFGD__CTOR_OFFSET))(this, HKGCJDDIMAH, ABHBKFJKINO);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Void KEOOGIPBJDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_KEOOGIPBJDM_OFFSET))(this);
	}

	::System::Void MFGEEDDMGCA(::MIKOMFIBMBN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_MFGEEDDMGCA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ONFBLIJJKBE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_ONFBLIJJKBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JIKGHFNOCBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_JIKGHFNOCBF_OFFSET))(this);
	}

	::MIKOMFIBMBN ONNPDMJFMJH()
	{
		return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_ONNPDMJFMJH_OFFSET))(this);
	}

	::System::Void DIFEJFBFFFF(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_DIFEJFBFFFF_OFFSET))(this, FBILHHBPEHD);
	}

	::System::Void COHPMOEIDJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_COHPMOEIDJG_OFFSET))(this);
	}

	::System::Void LIDAJLDGMHO(::MoleMole::UIWindowController* JNLBPMKIFNK, ::UnityEngine::Transform* MGAJICFFDIO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_LIDAJLDGMHO_OFFSET))(this, JNLBPMKIFNK, MGAJICFFDIO);
	}

	::System::Void HFBPONNNLBA(::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AOOOIAPMFGD_HFBPONNNLBA_OFFSET))(this, CPHDDAGKHLB);
	}
};
