#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EAKHPFFGJFN_CTOR_OFFSET UNITYSDK_OFFSET(0x12682450)
#define EAKHPFFGJFN_GET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0x12682430)
#define EAKHPFFGJFN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x12682280)
#define EAKHPFFGJFN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x126821F0)
#define EAKHPFFGJFN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12682100)
#define EAKHPFFGJFN_NOFJENGOJGE_OFFSET UNITYSDK_OFFSET(0x12682340)
#define EAKHPFFGJFN_SET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0x12682440)

inline static constexpr unsigned int EAKHPFFGJFN_TypeDefinitionIndex = 60699;

	class EAKHPFFGJFN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* LCCCBGBIMFA; // 0x10
		::System::Boolean OCCIFHOEJMI; // 0x18
		::System::Boolean _BlockNew_k__BackingField; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHPFFGJFN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LevelPerformanceInitialize* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPerformanceInitialize*, ::System::Boolean))((::PBYTE)hIl2Cpp + EAKHPFFGJFN_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHPFFGJFN_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHPFFGJFN_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean NOFJENGOJGE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EAKHPFFGJFN_NOFJENGOJGE_OFFSET))(this, a1);
		}

		::System::Boolean get_BlockNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHPFFGJFN_GET_BLOCKNEW_OFFSET))(this);
		}

		::System::Void set_BlockNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAKHPFFGJFN_SET_BLOCKNEW_OFFSET))(this, a1);
		}

	};
