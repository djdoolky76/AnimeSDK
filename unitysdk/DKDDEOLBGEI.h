#pragma once
#include "unitysdk/unitysdk.h"

#define DKDDEOLBGEI_AHBECMCGFEI_OFFSET UNITYSDK_OFFSET(0x3C31370)
#define DKDDEOLBGEI_CTOR_OFFSET UNITYSDK_OFFSET(0x3C312F0)
#define DKDDEOLBGEI_GET_BORDERLINKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x2EAF270)
#define DKDDEOLBGEI_GET_BORDERSAFEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C80)
#define DKDDEOLBGEI_GET_COLLIDERSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1A790)
#define DKDDEOLBGEI_GET_GROUNDSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x3C313C0)
#define DKDDEOLBGEI_GET_HALFUNITLENGTH_OFFSET UNITYSDK_OFFSET(0x1D10)
#define DKDDEOLBGEI_GET_OVERRIDERESETPOINTSTICKGROUNDDISTANCE_OFFSET UNITYSDK_OFFSET(0x3C31410)
#define DKDDEOLBGEI_GET_QUERYGROUNDEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x3C313D0)
#define DKDDEOLBGEI_GET_QUERYROOFEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x2EB8EA0)
#define DKDDEOLBGEI_GET_QUERYWALLEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x3C313E0)
#define DKDDEOLBGEI_GET_REACHBORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1D20)
#define DKDDEOLBGEI_GET_STUCKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x3C31400)
#define DKDDEOLBGEI_GET_SWEEPSHRINKHEIGHT_OFFSET UNITYSDK_OFFSET(0x3C313F0)
#define DKDDEOLBGEI_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0x1D00)
#define DKDDEOLBGEI_GET_WALLSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x2FF5140)

	struct alignas(4) DKDDEOLBGEI
	{
		::System::Single _UnitLength_k__BackingField; // 0x10
		::System::Single _HalfUnitLength_k__BackingField; // 0x14
		::System::Single _ReachBorderThreshold_k__BackingField; // 0x18
		::System::Single _BorderSafeOffset_k__BackingField; // 0x1C
		::System::Single _ColliderSkinWidth_k__BackingField; // 0x20
		::System::Single _WallSkinWidth_k__BackingField; // 0x24
		::System::Single _GroundSkinWidth_k__BackingField; // 0x28
		::System::Single _QueryGroundExtraDistance_k__BackingField; // 0x2C
		::System::Single _QueryWallExtraDistance_k__BackingField; // 0x30
		::System::Single _BorderLinkThreshold_k__BackingField; // 0x34
		::System::Single _SweepShrinkHeight_k__BackingField; // 0x38
		::System::Single _StuckThreshold_k__BackingField; // 0x3C
		::System::Single _QueryRoofExtraDistance_k__BackingField; // 0x40
		::System::Single _OverrideResetPointStickGroundDistance_k__BackingField; // 0x44
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_CTOR_OFFSET))(this, a1);
		}

		::System::Single get_UnitLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_UNITLENGTH_OFFSET))(this);
		}

		::System::Single get_HalfUnitLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_HALFUNITLENGTH_OFFSET))(this);
		}

		::System::Single get_ReachBorderThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_REACHBORDERTHRESHOLD_OFFSET))(this);
		}

		::System::Single get_BorderSafeOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_BORDERSAFEOFFSET_OFFSET))(this);
		}

		::System::Single AHBECMCGFEI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_AHBECMCGFEI_OFFSET))(this);
		}

		::System::Single get_ColliderSkinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_COLLIDERSKINWIDTH_OFFSET))(this);
		}

		::System::Single get_WallSkinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_WALLSKINWIDTH_OFFSET))(this);
		}

		::System::Single get_GroundSkinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_GROUNDSKINWIDTH_OFFSET))(this);
		}

		::System::Single get_QueryGroundExtraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_QUERYGROUNDEXTRADISTANCE_OFFSET))(this);
		}

		::System::Single get_QueryWallExtraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_QUERYWALLEXTRADISTANCE_OFFSET))(this);
		}

		::System::Single get_BorderLinkThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_BORDERLINKTHRESHOLD_OFFSET))(this);
		}

		::System::Single get_SweepShrinkHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_SWEEPSHRINKHEIGHT_OFFSET))(this);
		}

		::System::Single get_StuckThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_STUCKTHRESHOLD_OFFSET))(this);
		}

		::System::Single get_QueryRoofExtraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_QUERYROOFEXTRADISTANCE_OFFSET))(this);
		}

		::System::Single get_OverrideResetPointStickGroundDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDDEOLBGEI_GET_OVERRIDERESETPOINTSTICKGROUNDDISTANCE_OFFSET))(this);
		}

	};
