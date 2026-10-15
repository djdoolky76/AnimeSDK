#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LAMKDFPFAIL_CJOOJLNKBOA_OFFSET UNITYSDK_OFFSET(0xB5E8140)
#define LAMKDFPFAIL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E7CA0)
#define LAMKDFPFAIL_GET_ASCENSIONBANNEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB5E7C80)
#define LAMKDFPFAIL_GET_CHIMERAMAXATK_OFFSET UNITYSDK_OFFSET(0xB5E7C00)
#define LAMKDFPFAIL_GET_CHIMERAMAXHP_OFFSET UNITYSDK_OFFSET(0xB5E7BC0)
#define LAMKDFPFAIL_GET_CHIMERAMINATK_OFFSET UNITYSDK_OFFSET(0xB5E7C20)
#define LAMKDFPFAIL_GET_CHIMERAMINHP_OFFSET UNITYSDK_OFFSET(0xB5E7BE0)
#define LAMKDFPFAIL_GET_CRITICALHITDAMAGE_OFFSET UNITYSDK_OFFSET(0xB5E7C40)
#define LAMKDFPFAIL_GET_MAXCASTCOUNTPERPHASE_OFFSET UNITYSDK_OFFSET(0xB5E7C60)
#define LAMKDFPFAIL_GET_TEAMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xB5E7BA0)
#define LAMKDFPFAIL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB5E8100)
#define LAMKDFPFAIL_SET_ASCENSIONBANNEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB5E7C90)
#define LAMKDFPFAIL_SET_CHIMERAMAXATK_OFFSET UNITYSDK_OFFSET(0xB5E7C10)
#define LAMKDFPFAIL_SET_CHIMERAMAXHP_OFFSET UNITYSDK_OFFSET(0xB5E7BD0)
#define LAMKDFPFAIL_SET_CHIMERAMINATK_OFFSET UNITYSDK_OFFSET(0xB5E7C30)
#define LAMKDFPFAIL_SET_CHIMERAMINHP_OFFSET UNITYSDK_OFFSET(0xB5E7BF0)
#define LAMKDFPFAIL_SET_CRITICALHITDAMAGE_OFFSET UNITYSDK_OFFSET(0xB5E7C50)
#define LAMKDFPFAIL_SET_MAXCASTCOUNTPERPHASE_OFFSET UNITYSDK_OFFSET(0xB5E7C70)
#define LAMKDFPFAIL_SET_TEAMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xB5E7BB0)

inline static constexpr unsigned int LAMKDFPFAIL_TypeDefinitionIndex = 63339;

	class LAMKDFPFAIL : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AscensionBannedChimeras_k__BackingField; // 0x10
		::System::Int32 _ChimeraMinAtk_k__BackingField; // 0x18
		::System::Int32 _ChimeraMinHp_k__BackingField; // 0x1C
		::System::UInt32 _TeamSlotCount_k__BackingField; // 0x20
		::System::Int32 _ChimeraMaxAtk_k__BackingField; // 0x24
		::System::Int32 _MaxCastCountPerPhase_k__BackingField; // 0x28
		::System::Int32 _ChimeraMaxHp_k__BackingField; // 0x2C
		::System::Int32 _CriticalHitDamage_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TeamSlotCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_GET_TEAMSLOTCOUNT_OFFSET))(this);
		}

		::System::Void set_TeamSlotCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_SET_TEAMSLOTCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ChimeraMaxHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_GET_CHIMERAMAXHP_OFFSET))(this);
		}

		::System::Void set_ChimeraMaxHp(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_SET_CHIMERAMAXHP_OFFSET))(this, a1);
		}

		::System::Int32 get_ChimeraMinHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_GET_CHIMERAMINHP_OFFSET))(this);
		}

		::System::Void set_ChimeraMinHp(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_SET_CHIMERAMINHP_OFFSET))(this, a1);
		}

		::System::Int32 get_ChimeraMaxAtk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_GET_CHIMERAMAXATK_OFFSET))(this);
		}

		::System::Void set_ChimeraMaxAtk(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_SET_CHIMERAMAXATK_OFFSET))(this, a1);
		}

		::System::Int32 get_ChimeraMinAtk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_GET_CHIMERAMINATK_OFFSET))(this);
		}

		::System::Void set_ChimeraMinAtk(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_SET_CHIMERAMINATK_OFFSET))(this, a1);
		}

		::System::Int32 get_CriticalHitDamage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_GET_CRITICALHITDAMAGE_OFFSET))(this);
		}

		::System::Void set_CriticalHitDamage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_SET_CRITICALHITDAMAGE_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxCastCountPerPhase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_GET_MAXCASTCOUNTPERPHASE_OFFSET))(this);
		}

		::System::Void set_MaxCastCountPerPhase(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_SET_MAXCASTCOUNTPERPHASE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_AscensionBannedChimeras()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_GET_ASCENSIONBANNEDCHIMERAS_OFFSET))(this);
		}

		::System::Void set_AscensionBannedChimeras(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_SET_ASCENSIONBANNEDCHIMERAS_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void CJOOJLNKBOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAMKDFPFAIL_CJOOJLNKBOA_OFFSET))(this, a1);
		}

	};
