#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexDirection.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleBoardBase.h"
#include "unitysdk/NBCAOOBFHEA.h"
namespace RPG::Client::Prop { class PushHexPuzzleArrow; }
namespace RPG::Client::Prop { class PushHexPuzzleFrame; }
namespace RPG::Client::Prop { class PushHexPuzzleItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDD86C30)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_EKHODMINGJA_OFFSET UNITYSDK_OFFSET(0xDD86630)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_FHHMCEJMHAM_OFFSET UNITYSDK_OFFSET(0xDD861E0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_FICCIEOANPC_OFFSET UNITYSDK_OFFSET(0xDD864B0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_FLDBHIJIBFI_OFFSET UNITYSDK_OFFSET(0xDD86110)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xDD85510)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDD84E70)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_JOAPJMMGOFO_OFFSET UNITYSDK_OFFSET(0xDD86390)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_MBOKGMAIAJG_OFFSET UNITYSDK_OFFSET(0xDD86810)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_MOVEITEM_OFFSET UNITYSDK_OFFSET(0xDD86720)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_NODOEOADLIL_OFFSET UNITYSDK_OFFSET(0xDD86540)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_OMPBJOPLCOA_OFFSET UNITYSDK_OFFSET(0xDD862A0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_RECOVERORIGIN_OFFSET UNITYSDK_OFFSET(0xDD869F0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMDIRECTION_OFFSET UNITYSDK_OFFSET(0xDD85AE0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xDD85E60)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_START_OFFSET UNITYSDK_OFFSET(0xDD867B0)

namespace RPG::Client::Prop
{
	class PushHexPuzzleBoard : public ::RPG::Client::Prop::HexPuzzleBoardBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PushHexPuzzleItem*>* Items; // 0xE8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PushHexPuzzleArrow*>* Arrows; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PushHexPuzzleFrame*>* Frames; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void InitItemsPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMSPOSITION_OFFSET))(this);
		}

		::System::Void RefreshItemDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMDIRECTION_OFFSET))(this);
		}

		::System::Void RefreshItemsPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMSPOSITION_OFFSET))(this);
		}

		::NBCAOOBFHEA FLDBHIJIBFI(::RPG::Client::Prop::PushHexPuzzleItem* a1, ::RPG::Client::Prop::HexDirection a2)
		{
			return ((::NBCAOOBFHEA(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*, ::RPG::Client::Prop::HexDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_FLDBHIJIBFI_OFFSET))(this, a1, a2);
		}

		::System::Void OMPBJOPLCOA(::RPG::Client::Prop::PushHexPuzzleItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_OMPBJOPLCOA_OFFSET))(this, a1, a2);
		}

		::System::Int32 JOAPJMMGOFO(::RPG::Client::Prop::PushHexPuzzleItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_JOAPJMMGOFO_OFFSET))(this, a1);
		}

		::System::Boolean NODOEOADLIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_NODOEOADLIL_OFFSET))(this);
		}

		::System::Void EKHODMINGJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_EKHODMINGJA_OFFSET))(this);
		}

		::System::Boolean FICCIEOANPC(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_FICCIEOANPC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::PushHexPuzzleItem* FHHMCEJMHAM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::PushHexPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_FHHMCEJMHAM_OFFSET))(this, a1, a2);
		}

		::System::Void MoveItem(::RPG::Client::Prop::PushHexPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_MOVEITEM_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_START_OFFSET))(this);
		}

		::System::Void MBOKGMAIAJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_MBOKGMAIAJG_OFFSET))(this);
		}

		::System::Void RecoverOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_RECOVERORIGIN_OFFSET))(this);
		}

	};
}
