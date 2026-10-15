#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ViewLoadModePriorityLevel.h"
#include "unitysdk/RPG/GameCore/FiveDimLoadMode.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define AAEKKFIJFDL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8772F0)
#define AAEKKFIJFDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C877500)
#define AAEKKFIJFDL_HMDCNBINPHC_OFFSET UNITYSDK_OFFSET(0x1C877170)
#define AAEKKFIJFDL_KELLCJOILIE_OFFSET UNITYSDK_OFFSET(0x1C877280)
#define AAEKKFIJFDL_OKEMNFDMKNP_OFFSET UNITYSDK_OFFSET(0x1C8770C0)
#define AAEKKFIJFDL_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C877350)
#define AAEKKFIJFDL_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C8774C0)

	class AAEKKFIJFDL : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel, ::RPG::GameCore::FiveDimLoadMode>* OIPECOADLEN; // 0x10
		::System::Boolean JFIOJNMDIFK; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimLoadMode COGNMKIMBMA; // 0x1C
		// static const ::System::Object MFKANGBCHBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEKKFIJFDL_CTOR_OFFSET))(this);
		}

		::System::Void OKEMNFDMKNP(::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel a1, ::RPG::GameCore::FiveDimLoadMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel, ::RPG::GameCore::FiveDimLoadMode))((::PBYTE)hIl2Cpp + AAEKKFIJFDL_OKEMNFDMKNP_OFFSET))(this, a1, a2);
		}

		::System::Void KELLCJOILIE(::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel))((::PBYTE)hIl2Cpp + AAEKKFIJFDL_KELLCJOILIE_OFFSET))(this, a1);
		}

		::System::Void HMDCNBINPHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEKKFIJFDL_HMDCNBINPHC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEKKFIJFDL_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEKKFIJFDL_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEKKFIJFDL_ONRECYCLE_OFFSET))(this);
		}

	};
