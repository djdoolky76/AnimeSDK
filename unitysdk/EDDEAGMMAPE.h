#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"
class LEBKAPODMIC;
namespace System { class Action; }

#define EDDEAGMMAPE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA04C80)
#define EDDEAGMMAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA04E70)
#define EDDEAGMMAPE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1CA04C60)
#define EDDEAGMMAPE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1CA04D30)
#define EDDEAGMMAPE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA04DB0)
#define EDDEAGMMAPE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA04E30)
#define EDDEAGMMAPE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1CA04C70)

inline static constexpr unsigned int EDDEAGMMAPE_TypeDefinitionIndex = 43379;

	class EDDEAGMMAPE : public ::System::Object
	{
	public:
		::LEBKAPODMIC* ODHOCPBPLAE; // 0x10
		::System::Action* BCPKEHAFHOD; // 0x18
		::LEBKAPODMIC* JCGEIGKMNLG; // 0x20
		::System::Action* LPGBHJJJKNC; // 0x28
		::System::Action* PLGEEKEHNLO; // 0x30
		::System::Int32 OGOADCDDCIG; // 0x38
		::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState _State_k__BackingField; // 0x3C
		::System::UInt32 BINLDMPJODO; // 0x40
		::System::Int32 ABONMEPJHKO; // 0x44
		::System::Single KGGFPPPCKAI; // 0x48
		::System::Single MBADFFFNNMM; // 0x4C
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
