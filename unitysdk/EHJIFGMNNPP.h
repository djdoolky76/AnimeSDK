#pragma once
#include "unitysdk/unitysdk.h"

#define EHJIFGMNNPP_CTOR_OFFSET UNITYSDK_OFFSET(0x3C314F0)
#define EHJIFGMNNPP_GET_ARROWQUERYHITEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x3C313C0)
#define EHJIFGMNNPP_GET_BORDERLINKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x3C313D0)
#define EHJIFGMNNPP_GET_BORDERSAFEOFFSET_OFFSET UNITYSDK_OFFSET(0x3C313E0)
#define EHJIFGMNNPP_GET_CLEANERBOTCOLLIDERSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1A790)
#define EHJIFGMNNPP_GET_CLEANERBOTQUERYGROUNDEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x2FF5140)
#define EHJIFGMNNPP_GET_COLLIDERSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x2EAF270)
#define EHJIFGMNNPP_GET_HALFUNITLENGTH_OFFSET UNITYSDK_OFFSET(0x1D10)
#define EHJIFGMNNPP_GET_QUERYSURFACEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C80)
#define EHJIFGMNNPP_GET_QUERYSURFACESTARTOFFSET_OFFSET UNITYSDK_OFFSET(0x1D20)
#define EHJIFGMNNPP_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0x1D00)

	struct alignas(4) EHJIFGMNNPP
	{
		::System::Single _UnitLength_k__BackingField; // 0x10
		::System::Single _HalfUnitLength_k__BackingField; // 0x14
		::System::Single _QuerySurfaceStartOffset_k__BackingField; // 0x18
		::System::Single _QuerySurfaceDistance_k__BackingField; // 0x1C
		::System::Single _CleanerBotColliderSkinWidth_k__BackingField; // 0x20
		::System::Single _CleanerBotQueryGroundExtraDistance_k__BackingField; // 0x24
		::System::Single _ArrowQueryHitExtraDistance_k__BackingField; // 0x28
		::System::Single _BorderLinkThreshold_k__BackingField; // 0x2C
		::System::Single _BorderSafeOffset_k__BackingField; // 0x30
		::System::Single _ColliderSkinWidth_k__BackingField; // 0x34
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_CTOR_OFFSET))(this, a1);
		}

		::System::Single get_UnitLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_UNITLENGTH_OFFSET))(this);
		}

		::System::Single get_HalfUnitLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_HALFUNITLENGTH_OFFSET))(this);
		}

		::System::Single get_QuerySurfaceStartOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_QUERYSURFACESTARTOFFSET_OFFSET))(this);
		}

		::System::Single get_QuerySurfaceDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_QUERYSURFACEDISTANCE_OFFSET))(this);
		}

		::System::Single get_CleanerBotColliderSkinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_CLEANERBOTCOLLIDERSKINWIDTH_OFFSET))(this);
		}

		::System::Single get_CleanerBotQueryGroundExtraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_CLEANERBOTQUERYGROUNDEXTRADISTANCE_OFFSET))(this);
		}

		::System::Single get_ArrowQueryHitExtraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_ARROWQUERYHITEXTRADISTANCE_OFFSET))(this);
		}

		::System::Single get_BorderLinkThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_BORDERLINKTHRESHOLD_OFFSET))(this);
		}

		::System::Single get_BorderSafeOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_BORDERSAFEOFFSET_OFFSET))(this);
		}

		::System::Single get_ColliderSkinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJIFGMNNPP_GET_COLLIDERSKINWIDTH_OFFSET))(this);
		}

	};
