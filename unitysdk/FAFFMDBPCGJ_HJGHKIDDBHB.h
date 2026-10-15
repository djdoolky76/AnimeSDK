#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAFFMDBPCGJ_Phase.h"
#include "unitysdk/System/Object.h"

#define FAFFMDBPCGJ_HJGHKIDDBHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1566DB10)
#define FAFFMDBPCGJ_HJGHKIDDBHB_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x15674B60)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_ACTIVESCOPEID_OFFSET UNITYSDK_OFFSET(0x1567A3C0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_BASESTRENGTH_OFFSET UNITYSDK_OFFSET(0x1567A520)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_CAPTUREDDIRTYVERSION_OFFSET UNITYSDK_OFFSET(0x1567A3E0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_CHAININDEX_OFFSET UNITYSDK_OFFSET(0x1567A500)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_COORDKEYINDEX_OFFSET UNITYSDK_OFFSET(0x1567A480)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_DIRECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1567A460)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_DIRECTIONPREPARED_OFFSET UNITYSDK_OFFSET(0x1567A4A0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_ISRESOLVINGDIRECTIONCHAIN_OFFSET UNITYSDK_OFFSET(0x1567A4C0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1567A380)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_ISUNWINDINGDIRECTIONCHAIN_OFFSET UNITYSDK_OFFSET(0x1567A4E0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1567A440)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_OWNERINDEX_OFFSET UNITYSDK_OFFSET(0x1567A400)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_OWNERITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1567A420)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1567A3A0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_GET_SHOULDINCREMENT_OFFSET UNITYSDK_OFFSET(0x1567A540)
#define FAFFMDBPCGJ_HJGHKIDDBHB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15674C60)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_ACTIVESCOPEID_OFFSET UNITYSDK_OFFSET(0x1567A3D0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_BASESTRENGTH_OFFSET UNITYSDK_OFFSET(0x1567A530)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_CAPTUREDDIRTYVERSION_OFFSET UNITYSDK_OFFSET(0x1567A3F0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_CHAININDEX_OFFSET UNITYSDK_OFFSET(0x1567A510)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_COORDKEYINDEX_OFFSET UNITYSDK_OFFSET(0x1567A490)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_DIRECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1567A470)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_DIRECTIONPREPARED_OFFSET UNITYSDK_OFFSET(0x1567A4B0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_ISRESOLVINGDIRECTIONCHAIN_OFFSET UNITYSDK_OFFSET(0x1567A4D0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1567A390)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_ISUNWINDINGDIRECTIONCHAIN_OFFSET UNITYSDK_OFFSET(0x1567A4F0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1567A450)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_OWNERINDEX_OFFSET UNITYSDK_OFFSET(0x1567A410)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_OWNERITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1567A430)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x1567A3B0)
#define FAFFMDBPCGJ_HJGHKIDDBHB_SET_SHOULDINCREMENT_OFFSET UNITYSDK_OFFSET(0x1567A550)

inline static constexpr unsigned int FAFFMDBPCGJ_HJGHKIDDBHB_TypeDefinitionIndex = 76731;

	class FAFFMDBPCGJ_HJGHKIDDBHB : public ::System::Object
	{
	public:
		::System::Single _BaseStrength_k__BackingField; // 0x10
		::System::Int32 _ActiveScopeID_k__BackingField; // 0x14
		::System::Int32 _ChainIndex_k__BackingField; // 0x18
		::System::Int32 _OwnerIndex_k__BackingField; // 0x1C
		::System::Int32 _ItemIndex_k__BackingField; // 0x20
		::FAFFMDBPCGJ_Phase _Phase_k__BackingField; // 0x24
		::System::Boolean _IsResolvingDirectionChain_k__BackingField; // 0x28
		::System::Boolean _IsUnwindingDirectionChain_k__BackingField; // 0x29
		::System::Boolean _DirectionPrepared_k__BackingField; // 0x2A
		::System::Byte _padding0[0x1];
		::System::UInt32 _CapturedDirtyVersion_k__BackingField; // 0x2C
		::System::Boolean _IsRunning_k__BackingField; // 0x30
		::System::Boolean _ShouldIncrement_k__BackingField; // 0x31
		::System::Byte _padding1[0x2];
		::System::Int32 _CoordKeyIndex_k__BackingField; // 0x34
		::System::Int32 _OwnerItemIndex_k__BackingField; // 0x38
		::System::Int32 _DirectionIndex_k__BackingField; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void set_IsRunning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_ISRUNNING_OFFSET))(this, a1);
		}

		::FAFFMDBPCGJ_Phase get_Phase()
		{
			return ((::FAFFMDBPCGJ_Phase(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::FAFFMDBPCGJ_Phase a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAFFMDBPCGJ_Phase))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_PHASE_OFFSET))(this, a1);
		}

		::System::Int32 get_ActiveScopeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_ACTIVESCOPEID_OFFSET))(this);
		}

		::System::Void set_ActiveScopeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_ACTIVESCOPEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CapturedDirtyVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_CAPTUREDDIRTYVERSION_OFFSET))(this);
		}

		::System::Void set_CapturedDirtyVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_CAPTUREDDIRTYVERSION_OFFSET))(this, a1);
		}

		::System::Int32 get_OwnerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_OWNERINDEX_OFFSET))(this);
		}

		::System::Void set_OwnerIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_OWNERINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_OwnerItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_OWNERITEMINDEX_OFFSET))(this);
		}

		::System::Void set_OwnerItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_OWNERITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_ITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_DirectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_DIRECTIONINDEX_OFFSET))(this);
		}

		::System::Void set_DirectionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_DIRECTIONINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_CoordKeyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_COORDKEYINDEX_OFFSET))(this);
		}

		::System::Void set_CoordKeyIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_COORDKEYINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_DirectionPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_DIRECTIONPREPARED_OFFSET))(this);
		}

		::System::Void set_DirectionPrepared(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_DIRECTIONPREPARED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsResolvingDirectionChain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_ISRESOLVINGDIRECTIONCHAIN_OFFSET))(this);
		}

		::System::Void set_IsResolvingDirectionChain(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_ISRESOLVINGDIRECTIONCHAIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnwindingDirectionChain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_ISUNWINDINGDIRECTIONCHAIN_OFFSET))(this);
		}

		::System::Void set_IsUnwindingDirectionChain(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_ISUNWINDINGDIRECTIONCHAIN_OFFSET))(this, a1);
		}

		::System::Int32 get_ChainIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_CHAININDEX_OFFSET))(this);
		}

		::System::Void set_ChainIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_CHAININDEX_OFFSET))(this, a1);
		}

		::System::Single get_BaseStrength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_BASESTRENGTH_OFFSET))(this);
		}

		::System::Void set_BaseStrength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_BASESTRENGTH_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldIncrement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_GET_SHOULDINCREMENT_OFFSET))(this);
		}

		::System::Void set_ShouldIncrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_SET_SHOULDINCREMENT_OFFSET))(this, a1);
		}

		::System::Void FHLALJENMHB(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_FHLALJENMHB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HJGHKIDDBHB_KHGIKBFDLFB_OFFSET))(this);
		}

	};
