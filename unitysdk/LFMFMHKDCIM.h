#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimStatisticPlayerActionType.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define LFMFMHKDCIM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8DF280)
#define LFMFMHKDCIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DF370)
#define LFMFMHKDCIM_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C8DF2E0)
#define LFMFMHKDCIM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C8DF330)

inline static constexpr unsigned int LFMFMHKDCIM_TypeDefinitionIndex = 43565;

	class LFMFMHKDCIM : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::UInt32>* EDMKJDNECNE; // 0x10
		::System::Single LALKFADHJJL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMFMHKDCIM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMFMHKDCIM_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMFMHKDCIM_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMFMHKDCIM_ONRECYCLE_OFFSET))(this);
		}

	};
