#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCBMADADMDJ.h"
class BACCOPOCMPC;
class EKFMIDBJDIA;
class LNHDPDCGLAG;
namespace RPG::GameCore { class AdvSetAIFollow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define FLLBPOLGJDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1583DAB0)
#define FLLBPOLGJDJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1583DAD0)
#define FLLBPOLGJDJ_FNJJAALEDCJ_OFFSET UNITYSDK_OFFSET(0x1583EE40)
#define FLLBPOLGJDJ_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x1583EF10)
#define FLLBPOLGJDJ_INAGMNKGMDE_OFFSET UNITYSDK_OFFSET(0x1583ED20)
#define FLLBPOLGJDJ_LFIAICPGIPJ_OFFSET UNITYSDK_OFFSET(0x1583E860)
#define FLLBPOLGJDJ_MHHDKCPGOJI_OFFSET UNITYSDK_OFFSET(0x1583E6B0)
#define FLLBPOLGJDJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1583DC60)
#define FLLBPOLGJDJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1583EC50)
#define FLLBPOLGJDJ_TICK_OFFSET UNITYSDK_OFFSET(0x1583EB00)

	class FLLBPOLGJDJ : public ::GCBMADADMDJ
	{
	public:
		::System::String* JIJMEHFEANC; // 0x30
		::RPG::GameCore::AdvSetAIFollow* OFKGLJOAMLD; // 0x38
		::BACCOPOCMPC* IPFNHFDJKKL; // 0x40
		::LNHDPDCGLAG* FLANFCPMIPC; // 0x48
		::System::String* KFOFDNOJILO; // 0x50
		::System::UInt32 ANEENHPKAIM; // 0x58
		// static const ::System::Object DPDJOFGFNKJ; // 0x0
		// static const ::System::Object KLFMIFKODBA; // 0x0
		// static const ::System::Object CNLICOPBIEH; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIFollow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIFollow*))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LFIAICPGIPJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_LFIAICPGIPJ_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void INAGMNKGMDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_INAGMNKGMDE_OFFSET))(this);
		}

		::System::Void MHHDKCPGOJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_MHHDKCPGOJI_OFFSET))(this, a1);
		}

		::System::Void FNJJAALEDCJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_FNJJAALEDCJ_OFFSET))(this, a1);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FLLBPOLGJDJ_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
