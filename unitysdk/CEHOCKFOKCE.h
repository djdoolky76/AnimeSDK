#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }

#define CEHOCKFOKCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8AF740)
#define CEHOCKFOKCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AF8E0)
#define CEHOCKFOKCE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C8AF7B0)
#define CEHOCKFOKCE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C8AF840)

inline static constexpr unsigned int CEHOCKFOKCE_TypeDefinitionIndex = 43520;

	class CEHOCKFOKCE : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::System::Int32>* CJEDAPMNOPA; // 0x10
		::RPG::GameCore::LevelTriggerInfo* NEKELDEHMEE; // 0x18
		::System::Boolean PENJBKKNLEA; // 0x20
		::System::Boolean NOOJOFHAIAA; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single CBFDCMECCEJ; // 0x24
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
