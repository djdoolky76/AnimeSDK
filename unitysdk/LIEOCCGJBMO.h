#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGGELMMFPKP;

#define LIEOCCGJBMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C2600)
#define LIEOCCGJBMO_GET_ADDCOIN_OFFSET UNITYSDK_OFFSET(0xB6C2640)
#define LIEOCCGJBMO_GET_DAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xB6C2680)
#define LIEOCCGJBMO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB6C2620)
#define LIEOCCGJBMO_GET_SOLDIERDEADCNT_OFFSET UNITYSDK_OFFSET(0xB6C2660)
#define LIEOCCGJBMO_SET_ADDCOIN_OFFSET UNITYSDK_OFFSET(0xB6C2650)
#define LIEOCCGJBMO_SET_DAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xB6C2690)
#define LIEOCCGJBMO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB6C2630)
#define LIEOCCGJBMO_SET_SOLDIERDEADCNT_OFFSET UNITYSDK_OFFSET(0xB6C2670)

inline static constexpr unsigned int LIEOCCGJBMO_TypeDefinitionIndex = 76311;

	class LIEOCCGJBMO : public ::System::Object
	{
	public:
		::Il2CppArray<::OGGELMMFPKP*>* _DamageInfos_k__BackingField; // 0x10
		::System::UInt32 _SoldierDeadCnt_k__BackingField; // 0x18
		::System::UInt32 _AddCoin_k__BackingField; // 0x1C
		::System::Boolean _IsWin_k__BackingField; // 0x20
		::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2, ::Il2CppArray<::OGGELMMFPKP*>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::Il2CppArray<::OGGELMMFPKP*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + LIEOCCGJBMO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIEOCCGJBMO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIEOCCGJBMO_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIEOCCGJBMO_GET_ADDCOIN_OFFSET))(this);
		}

		::System::Void set_AddCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIEOCCGJBMO_SET_ADDCOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_SoldierDeadCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIEOCCGJBMO_GET_SOLDIERDEADCNT_OFFSET))(this);
		}

		::System::Void set_SoldierDeadCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIEOCCGJBMO_SET_SOLDIERDEADCNT_OFFSET))(this, a1);
		}

		::Il2CppArray<::OGGELMMFPKP*>* get_DamageInfos()
		{
			return ((::Il2CppArray<::OGGELMMFPKP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIEOCCGJBMO_GET_DAMAGEINFOS_OFFSET))(this);
		}

		::System::Void set_DamageInfos(::Il2CppArray<::OGGELMMFPKP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::OGGELMMFPKP*>*))((::PBYTE)hIl2Cpp + LIEOCCGJBMO_SET_DAMAGEINFOS_OFFSET))(this, a1);
		}

	};
