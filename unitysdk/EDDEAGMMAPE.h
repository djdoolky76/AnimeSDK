#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"
class LEBKAPODMIC;
namespace System { class Action; }

#define EDDEAGMMAPE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA33330)
#define EDDEAGMMAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33500)
#define EDDEAGMMAPE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1CA33310)
#define EDDEAGMMAPE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1CA333D0)
#define EDDEAGMMAPE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA33440)
#define EDDEAGMMAPE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA334C0)
#define EDDEAGMMAPE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1CA33320)

inline static constexpr unsigned int EDDEAGMMAPE_TypeDefinitionIndex = 43379;

	class EDDEAGMMAPE : public ::System::Object
	{
	public:
		::LEBKAPODMIC* JCGEIGKMNLG; // 0x10
		::System::Action* BCPKEHAFHOD; // 0x18
		::System::Action* PLGEEKEHNLO; // 0x20
		::LEBKAPODMIC* ODHOCPBPLAE; // 0x28
		::System::Action* LPGBHJJJKNC; // 0x30
		::System::Int32 ABONMEPJHKO; // 0x38
		::System::Int32 OGOADCDDCIG; // 0x3C
		::System::Single KGGFPPPCKAI; // 0x40
		::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState _State_k__BackingField; // 0x44
		::System::Single MBADFFFNNMM; // 0x48
		::System::UInt32 BINLDMPJODO; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEAGMMAPE_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState get_State()
		{
			return ((::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEAGMMAPE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + EDDEAGMMAPE_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEAGMMAPE_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEAGMMAPE_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEAGMMAPE_ONRECYCLE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEAGMMAPE_KHGIKBFDLFB_OFFSET))(this);
		}

	};
