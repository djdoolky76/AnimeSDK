#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore::Match3 { class ShowCharacterCutInGroupAction; }

#define EEENIKOBFFM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA335F0)
#define EEENIKOBFFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33980)
#define EEENIKOBFFM_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA336E0)
#define EEENIKOBFFM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA33940)

inline static constexpr unsigned int EEENIKOBFFM_TypeDefinitionIndex = 42991;

	class EEENIKOBFFM : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::UInt32>* JIHJMCDMKKG; // 0x10
		::RPG::PoolDictionary_2<::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*, ::System::UInt32>* PAFLLEADEOC; // 0x18
		::RPG::PoolList_1<::System::ValueTuple>* JCCPLONHGGN; // 0x20
		::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* AJCGIPDFMFM; // 0x28
		::System::Boolean LCNIKKNGNBE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEENIKOBFFM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEENIKOBFFM_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEENIKOBFFM_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEENIKOBFFM_ONRECYCLE_OFFSET))(this);
		}

	};
