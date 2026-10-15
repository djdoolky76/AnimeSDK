#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MazeBuffInBattleBindingType.h"
namespace RPG::GameCore { class AddMazeBuffBinding; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCFJLHGFEEG_BPLKGMKEMAK_OFFSET UNITYSDK_OFFSET(0xBB0E1D0)
#define NCFJLHGFEEG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0CC90)
#define NCFJLHGFEEG_DLDLECIEDGC_OFFSET UNITYSDK_OFFSET(0xBB0E070)
#define NCFJLHGFEEG_FAOOEEJAJCA_OFFSET UNITYSDK_OFFSET(0xBB0E130)
#define NCFJLHGFEEG_GEFGFEPCDKA_OFFSET UNITYSDK_OFFSET(0xBB0E3A0)
#define NCFJLHGFEEG_HHPBALCFKBL_OFFSET UNITYSDK_OFFSET(0xBB0E510)
#define NCFJLHGFEEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB0CCE0)

	class NCFJLHGFEEG
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* OMELBHKBMCD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddMazeBuffBinding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddMazeBuffBinding*))((::PBYTE)hIl2Cpp + NCFJLHGFEEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFJLHGFEEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void DLDLECIEDGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFJLHGFEEG_DLDLECIEDGC_OFFSET))(this);
		}

		::System::Int32 HHPBALCFKBL(::RPG::GameCore::MazeBuffData* a1, ::RPG::GameCore::MazeBuffData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MazeBuffData*, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + NCFJLHGFEEG_HHPBALCFKBL_OFFSET))(this, a1, a2);
		}

		::System::Boolean FAOOEEJAJCA(::RPG::GameCore::MazeBuffInBattleBindingType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffInBattleBindingType))((::PBYTE)hIl2Cpp + NCFJLHGFEEG_FAOOEEJAJCA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GEFGFEPCDKA(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCFJLHGFEEG_GEFGFEPCDKA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntityList* BPLKGMKEMAK(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + NCFJLHGFEEG_BPLKGMKEMAK_OFFSET))(this, a1);
		}

	};
