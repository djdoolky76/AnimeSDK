#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"
class LEBKAPODMIC;
namespace System { class Action; }

#define EDDEAGMMAPE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB36FA0)
#define EDDEAGMMAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB37190)
#define EDDEAGMMAPE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1DB36F80)
#define EDDEAGMMAPE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1DB37050)
#define EDDEAGMMAPE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DB370D0)
#define EDDEAGMMAPE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DB37150)
#define EDDEAGMMAPE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1DB36F90)

inline static constexpr unsigned int EDDEAGMMAPE_TypeDefinitionIndex = 44360;

	class EDDEAGMMAPE : public ::System::Object
	{
	public:
		::System::Action* LPGBHJJJKNC; // 0x10
		::System::Action* PLGEEKEHNLO; // 0x18
		::System::Action* BCPKEHAFHOD; // 0x20
		::LEBKAPODMIC* ODHOCPBPLAE; // 0x28
		::LEBKAPODMIC* JCGEIGKMNLG; // 0x30
		::System::Single KGGFPPPCKAI; // 0x38
		::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState _State_k__BackingField; // 0x3C
		::System::Int32 OGOADCDDCIG; // 0x40
		::System::Single MBADFFFNNMM; // 0x44
		::System::UInt32 BINLDMPJODO; // 0x48
		::System::Int32 ABONMEPJHKO; // 0x4C
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
