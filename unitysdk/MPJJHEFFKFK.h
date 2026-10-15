#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MPJJHEFFKFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3FA60)
#define MPJJHEFFKFK_GET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xBA3FA40)
#define MPJJHEFFKFK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBA3F890)
#define MPJJHEFFKFK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBA3F800)
#define MPJJHEFFKFK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA3F6A0)
#define MPJJHEFFKFK_NOFJENGOJGE_OFFSET UNITYSDK_OFFSET(0xBA3F950)
#define MPJJHEFFKFK_SET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xBA3FA50)

	class MPJJHEFFKFK : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::ValueTuple>* LCCCBGBIMFA; // 0x10
		::System::Boolean _BlockNew_k__BackingField; // 0x18
		::System::Boolean OCCIFHOEJMI; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJJHEFFKFK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LevelPerformanceInitialize* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPerformanceInitialize*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPJJHEFFKFK_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJJHEFFKFK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJJHEFFKFK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean NOFJENGOJGE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MPJJHEFFKFK_NOFJENGOJGE_OFFSET))(this, a1);
		}

		::System::Boolean get_BlockNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJJHEFFKFK_GET_BLOCKNEW_OFFSET))(this);
		}

		::System::Void set_BlockNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MPJJHEFFKFK_SET_BLOCKNEW_OFFSET))(this, a1);
		}

	};
