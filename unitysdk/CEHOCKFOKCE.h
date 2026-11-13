#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }

#define CEHOCKFOKCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D2DA350)
#define CEHOCKFOKCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DA4F0)
#define CEHOCKFOKCE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1D2DA3C0)
#define CEHOCKFOKCE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1D2DA450)

inline static constexpr unsigned int CEHOCKFOKCE_TypeDefinitionIndex = 44502;

	class CEHOCKFOKCE : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelTriggerInfo* NEKELDEHMEE; // 0x10
		::RPG::PoolHashSet_1<::System::Int32>* CJEDAPMNOPA; // 0x18
		::System::Single CBFDCMECCEJ; // 0x20
		::System::Boolean NOOJOFHAIAA; // 0x24
		::System::Boolean PENJBKKNLEA; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHOCKFOKCE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHOCKFOKCE_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHOCKFOKCE_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHOCKFOKCE_ONRECYCLE_OFFSET))(this);
		}

	};
