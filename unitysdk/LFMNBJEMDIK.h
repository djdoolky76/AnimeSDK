#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEEJKBIMHAA;
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace RPG::GameCore { class PassengerBehaviorConfigRow; }
namespace RPG::GameCore { class TrainPassengerConfigRow; }

#define LFMNBJEMDIK_CTOR_OFFSET UNITYSDK_OFFSET(0xB685400)
#define LFMNBJEMDIK_FNMGEABFIIE_OFFSET UNITYSDK_OFFSET(0xB685430)
#define LFMNBJEMDIK_FNNOGPKFALG_OFFSET UNITYSDK_OFFSET(0xB6856E0)
#define LFMNBJEMDIK_GDFOOPJDGKM_OFFSET UNITYSDK_OFFSET(0xB685730)
#define LFMNBJEMDIK_GET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xB6857A0)
#define LFMNBJEMDIK_GET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xB685860)
#define LFMNBJEMDIK_GET_PASSENGERID_OFFSET UNITYSDK_OFFSET(0xB685780)
#define LFMNBJEMDIK_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0xB685690)
#define LFMNBJEMDIK_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xB6857C0)
#define LFMNBJEMDIK_OJAKJDAJCNN_OFFSET UNITYSDK_OFFSET(0xB685810)
#define LFMNBJEMDIK_SET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xB6857B0)
#define LFMNBJEMDIK_SET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xB685870)
#define LFMNBJEMDIK_SET_PASSENGERID_OFFSET UNITYSDK_OFFSET(0xB685790)

	class LFMNBJEMDIK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PHBOMHANOOM; // 0x10
		::RPG::GameCore::PassengerBehaviorConfigRow* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::LevelNPCInfoOverride* _OverrideInfo_k__BackingField; // 0x20
		::System::UInt32 _BehaviorID_k__BackingField; // 0x28
		::System::UInt32 _PassengerID_k__BackingField; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TrainPassengerConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPassengerConfigRow*))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_CTOR_OFFSET))(this, a1);
		}

		::System::Void FNMGEABFIIE(::DEEJKBIMHAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEEJKBIMHAA*))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_FNMGEABFIIE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassengerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_GET_PASSENGERID_OFFSET))(this);
		}

		::System::Void set_PassengerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_SET_PASSENGERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BehaviorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_GET_BEHAVIORID_OFFSET))(this);
		}

		::System::Void set_BehaviorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_SET_BEHAVIORID_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_KKKIONIDKFA_OFFSET))(this);
		}

		::System::UInt32 OJAKJDAJCNN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_OJAKJDAJCNN_OFFSET))(this);
		}

		::System::UInt32 HIEIGBIMEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::UInt32 FNNOGPKFALG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_FNNOGPKFALG_OFFSET))(this);
		}

		::System::UInt32 GDFOOPJDGKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_GDFOOPJDGKM_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCInfoOverride* get_OverrideInfo()
		{
			return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_GET_OVERRIDEINFO_OFFSET))(this);
		}

		::System::Void set_OverrideInfo(::RPG::GameCore::LevelNPCInfoOverride* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfoOverride*))((::PBYTE)hIl2Cpp + LFMNBJEMDIK_SET_OVERRIDEINFO_OFFSET))(this, a1);
		}

	};
