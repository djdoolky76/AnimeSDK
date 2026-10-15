#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CreateBattleEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define NAPIKMAGDDI_BEHAHFONDGP_OFFSET UNITYSDK_OFFSET(0xBAB8230)
#define NAPIKMAGDDI_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB7D60)
#define NAPIKMAGDDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAB8A10)
#define NAPIKMAGDDI_HDCJDAIAHNM_OFFSET UNITYSDK_OFFSET(0xBAB8800)
#define NAPIKMAGDDI_JKJMOGBMCCH_OFFSET UNITYSDK_OFFSET(0xBAB8020)
#define NAPIKMAGDDI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAB7EB0)

inline static constexpr unsigned int NAPIKMAGDDI_TypeDefinitionIndex = 58043;

	class NAPIKMAGDDI
	{
	public:
		::KFELGAIGHAP* PPCPGFGKEHN; // 0x28
		::System::Action* PBIFNCNBJAG; // 0x30
		::KFELGAIGHAP* ELCJBKPAMMH; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEvent*))((::PBYTE)hIl2Cpp + NAPIKMAGDDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPIKMAGDDI_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BEHAHFONDGP(::System::UInt32 a1, ::RPG::GameCore::StageRow* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + NAPIKMAGDDI_BEHAHFONDGP_OFFSET))(this, a1, a2);
		}

		::System::Void JKJMOGBMCCH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NAPIKMAGDDI_JKJMOGBMCCH_OFFSET))(this, a1);
		}

		::System::Void HDCJDAIAHNM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NAPIKMAGDDI_HDCJDAIAHNM_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPIKMAGDDI_DISPOSE_OFFSET))(this);
		}

	};
