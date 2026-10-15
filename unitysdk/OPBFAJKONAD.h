#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/RtBattleSelectTargetStrategy.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPBFAJKONAD_AKBNIJLDNNJ_OFFSET UNITYSDK_OFFSET(0xBF9F910)
#define OPBFAJKONAD_CTOR_OFFSET UNITYSDK_OFFSET(0xBF9FA60)
#define OPBFAJKONAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF9EA50)
#define OPBFAJKONAD_HKPPIDPILAD_OFFSET UNITYSDK_OFFSET(0xBF9EAA0)
#define OPBFAJKONAD_JDOCPAHNCBA_OFFSET UNITYSDK_OFFSET(0xBF9F3D0)
#define OPBFAJKONAD_KBDHEEAHOLP_OFFSET UNITYSDK_OFFSET(0xBF9EFD0)
#define OPBFAJKONAD_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBF9EA10)
#define OPBFAJKONAD_MMLEHHDMPOE_OFFSET UNITYSDK_OFFSET(0xBF9F920)
#define OPBFAJKONAD_PDOOHGHFPCO_OFFSET UNITYSDK_OFFSET(0xBF9F8B0)

	class OPBFAJKONAD : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action* EFHCOOOBIPF; // 0x18
		::RPG::GameCore::GameEntity* ALOHKAILHIG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBFAJKONAD_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBFAJKONAD_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBFAJKONAD_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* HKPPIDPILAD(::RPG::GameCore::RtBattleSelectTargetStrategy a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::RtBattleSelectTargetStrategy, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OPBFAJKONAD_HKPPIDPILAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KBDHEEAHOLP(::RPG::GameCore::TeamType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OPBFAJKONAD_KBDHEEAHOLP_OFFSET))(this, a1, a2);
		}

		::System::Int32 JDOCPAHNCBA(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OPBFAJKONAD_JDOCPAHNCBA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PDOOHGHFPCO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OPBFAJKONAD_PDOOHGHFPCO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* AKBNIJLDNNJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBFAJKONAD_AKBNIJLDNNJ_OFFSET))(this);
		}

		::System::Void MMLEHHDMPOE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OPBFAJKONAD_MMLEHHDMPOE_OFFSET))(this, a1);
		}

	};
