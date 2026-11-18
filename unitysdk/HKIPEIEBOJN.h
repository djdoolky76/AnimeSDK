#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOLOGHLENFB;
class PHBGAINMEEM;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define HKIPEIEBOJN_AIJEOEIDGCE_OFFSET UNITYSDK_OFFSET(0x12E638B0)
#define HKIPEIEBOJN_AKLCANMAPCA_OFFSET UNITYSDK_OFFSET(0x12E62A70)
#define HKIPEIEBOJN_ANNNGFGPFJD_OFFSET UNITYSDK_OFFSET(0x12E63720)
#define HKIPEIEBOJN_BFBACMGLIHN_OFFSET UNITYSDK_OFFSET(0x12E62A60)
#define HKIPEIEBOJN_CGEOPJLCLPC_OFFSET UNITYSDK_OFFSET(0x12E63490)
#define HKIPEIEBOJN_CHFMBCLPGAP_OFFSET UNITYSDK_OFFSET(0x12E62F40)
#define HKIPEIEBOJN_EHOLMDIAEFM_OFFSET UNITYSDK_OFFSET(0x12E632D0)
#define HKIPEIEBOJN_HGDOCHBIBML_OFFSET UNITYSDK_OFFSET(0x12E62C90)
#define HKIPEIEBOJN_MDMHCKNLDBB_OFFSET UNITYSDK_OFFSET(0x12E63910)
#define HKIPEIEBOJN_MGIBFKEGLBF_OFFSET UNITYSDK_OFFSET(0x12E63EA0)
#define HKIPEIEBOJN_OFCOKOCOIDB_OFFSET UNITYSDK_OFFSET(0x12E629F0)
#define HKIPEIEBOJN__CTOR_OFFSET UNITYSDK_OFFSET(0x12E629E0)

inline static constexpr unsigned int HKIPEIEBOJN_TypeDefinitionIndex = 50293;

class HKIPEIEBOJN : public ::System::Object
{
public:
	// static const ::System::String* GKLCGCFGHDI; // 0x0
	// static const ::System::Single EPNPFLEJGOA; // 0x0
	::UnityEngine::UI::RawImage* DCFAKADANKO; // 0x10
	::FOLOGHLENFB* DJOIBDNKGII; // 0x18
	::PHBGAINMEEM* LJNNFJCDAFB; // 0x20
	::System::Action* HNNHBOMOOEM; // 0x28
	::System::Int32 OIKFFGKDHME; // 0x30
	::System::Single EKGMLLJEJHM; // 0x34
	::System::Single GFIHIEDMNMP; // 0x38
	::System::Boolean MNGMCPEBHIH; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIPEIEBOJN__CTOR_OFFSET))(this);
	}

	::System::Void OFCOKOCOIDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_OFCOKOCOIDB_OFFSET))(this);
	}

	::PHBGAINMEEM* BFBACMGLIHN()
	{
		return ((::PHBGAINMEEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_BFBACMGLIHN_OFFSET))(this);
	}

	::System::Void AKLCANMAPCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_AKLCANMAPCA_OFFSET))(this);
	}

	::System::Void CHFMBCLPGAP(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_CHFMBCLPGAP_OFFSET))(this, OIKFFGKDHME);
	}

	::System::Void EHOLMDIAEFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_EHOLMDIAEFM_OFFSET))(this);
	}

	::System::Void CGEOPJLCLPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_CGEOPJLCLPC_OFFSET))(this);
	}

	::System::Void ANNNGFGPFJD(::System::Boolean IAINILBLPMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_ANNNGFGPFJD_OFFSET))(this, IAINILBLPMP);
	}

	::System::Void AIJEOEIDGCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_AIJEOEIDGCE_OFFSET))(this);
	}

	::UnityEngine::Animator* HGDOCHBIBML()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_HGDOCHBIBML_OFFSET))(this);
	}

	::System::Void MDMHCKNLDBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_MDMHCKNLDBB_OFFSET))(this);
	}

	::System::Void MGIBFKEGLBF(::UnityEngine::UI::RawImage* DCFAKADANKO, ::UnityEngine::RectTransform* EMDOIDLAFDB, ::System::String* ODLBMPBBIPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + HKIPEIEBOJN_MGIBFKEGLBF_OFFSET))(this, DCFAKADANKO, EMDOIDLAFDB, ODLBMPBBIPI);
	}
};
