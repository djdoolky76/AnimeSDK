#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/System/Object.h"

#define GLDNFJIDFGI_DKCPLHFGLCO_OFFSET UNITYSDK_OFFSET(0x149E01E0)
#define GLDNFJIDFGI_ELBKFGABOJF_OFFSET UNITYSDK_OFFSET(0x149E01D0)
#define GLDNFJIDFGI_EOMAELPEBNL_OFFSET UNITYSDK_OFFSET(0x149E01C0)
#define GLDNFJIDFGI_FLMLDNDDJGB_OFFSET UNITYSDK_OFFSET(0x149E0200)
#define GLDNFJIDFGI_FNOIHOBPGML_OFFSET UNITYSDK_OFFSET(0x149E01F0)
#define GLDNFJIDFGI_GOJMLKALNOC_OFFSET UNITYSDK_OFFSET(0x149E01B0)
#define GLDNFJIDFGI_JFFPHFHJMOP_OFFSET UNITYSDK_OFFSET(0x149E01A0)
#define GLDNFJIDFGI_JLKKMHOGDJD_OFFSET UNITYSDK_OFFSET(0x149E0190)
#define GLDNFJIDFGI__CTOR_OFFSET UNITYSDK_OFFSET(0x149E0170)

inline static constexpr unsigned int GLDNFJIDFGI_TypeDefinitionIndex = 66982;

class GLDNFJIDFGI : public ::System::Object
{
public:
	::System::Int32 _PENOOAGJLKB_k__BackingField; // 0x10
	::ProtoScript::HollowShopType _MGIOKKNDFED_k__BackingField; // 0x14
	::System::Int32 _EMKFOJMKIOH_k__BackingField; // 0x18
	::System::Int32 _CFBHPLMIFPP_k__BackingField; // 0x1C

	::System::Void _ctor(::ProtoScript::HollowShopType KKKEBJCLPMD, ::System::Int32 OIKFFGKDHME, ::System::Int32 JPBDDCPDBCK, ::System::Int32 GDIILBALHGI)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::HollowShopType, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GLDNFJIDFGI__CTOR_OFFSET))(this, KKKEBJCLPMD, OIKFFGKDHME, JPBDDCPDBCK, GDIILBALHGI);
	}

	::System::Int32 JLKKMHOGDJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDNFJIDFGI_JLKKMHOGDJD_OFFSET))(this);
	}

	::ProtoScript::HollowShopType JFFPHFHJMOP()
	{
		return ((::ProtoScript::HollowShopType(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDNFJIDFGI_JFFPHFHJMOP_OFFSET))(this);
	}

	::System::Void GOJMLKALNOC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLDNFJIDFGI_GOJMLKALNOC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EOMAELPEBNL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLDNFJIDFGI_EOMAELPEBNL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ELBKFGABOJF(::ProtoScript::HollowShopType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::HollowShopType))((::PBYTE)hIl2Cpp + GLDNFJIDFGI_ELBKFGABOJF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DKCPLHFGLCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDNFJIDFGI_DKCPLHFGLCO_OFFSET))(this);
	}

	::System::Void FNOIHOBPGML(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLDNFJIDFGI_FNOIHOBPGML_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FLMLDNDDJGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDNFJIDFGI_FLMLDNDDJGB_OFFSET))(this);
	}
};
