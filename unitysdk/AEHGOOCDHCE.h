#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LittleGameEntityVar; }

#define AEHGOOCDHCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D9FA8F0)
#define AEHGOOCDHCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FA9E0)
#define AEHGOOCDHCE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1D9FA950)
#define AEHGOOCDHCE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1D9FA9A0)

inline static constexpr unsigned int AEHGOOCDHCE_TypeDefinitionIndex = 44320;

	class AEHGOOCDHCE : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::LittleGameEntityVar*>* DFGHCCCGIIB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGOOCDHCE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGOOCDHCE_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGOOCDHCE_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGOOCDHCE_ONRECYCLE_OFFSET))(this);
		}

	};
