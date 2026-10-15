#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/ScenePuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
namespace RPG::Client::Prop { class VortexBoxPuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_CANITEMMOVE_OFFSET UNITYSDK_OFFSET(0xDDC1870)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDC3FD0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC3ED0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_DIFFBYDIR_OFFSET UNITYSDK_OFFSET(0xDDC19D0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDC1FE0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_FCHFLPGOFFK_OFFSET UNITYSDK_OFFSET(0xDDC2650)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_GETITEM_OFFSET UNITYSDK_OFFSET(0xDDC1A70)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0xDDC25F0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDDC1030)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDC0920)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDDC08D0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ITEM2BOARDLOCAL_OFFSET UNITYSDK_OFFSET(0xDDC3500)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_JJLGKGLFOCI_OFFSET UNITYSDK_OFFSET(0xDDC3850)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xDDC1610)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_MJCLAPOEEPB_OFFSET UNITYSDK_OFFSET(0xDDC3430)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_NDBCIBOAGIA_OFFSET UNITYSDK_OFFSET(0xDDC0B40)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xDDC1580)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_REFRESHCANDRAGITEM_OFFSET UNITYSDK_OFFSET(0xDDC0C10)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDC1B10)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_TRYDRAGBOX_OFFSET UNITYSDK_OFFSET(0xDDC2880)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_TRYMOVEVORTEX_OFFSET UNITYSDK_OFFSET(0xDDC2530)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDDC34B0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_WORLDFORWARDRIGHT2DIR_OFFSET UNITYSDK_OFFSET(0xDDC3670)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_WORLDPOSITION2COORD_OFFSET UNITYSDK_OFFSET(0xDDC35C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int VortexBoxPuzzleBoard_TypeDefinitionIndex = 78856;

	class VortexBoxPuzzleBoard : public ::RPG::Client::Prop::ScenePuzzleBoardBase
	{
	public:
		::System::Object* PGHEGHLPIDH; // 0x50
		::UnityEngine::Vector3 Origin; // 0x58
		::UnityEngine::Vector3 Forward; // 0x64
		::UnityEngine::Vector3 Right; // 0x70
		::System::Single GridSize; // 0x7C
		::System::Int32 MaxRow; // 0x80
		::System::Int32 MaxCol; // 0x84
		::System::Single FinalDragDist; // 0x88
		::System::Byte _padding0[0x4];
		::System::String* FailCustomString; // 0x90
		::RPG::Client::Prop::VortexBoxPuzzleItem* APJPIGBIAOI; // 0x98
		::System::Boolean GNELNOEHDOJ; // 0xA0
		::System::Boolean OKGPLKANGKB; // 0xA1
		::System::Boolean MNDJCLEMIIN; // 0xA2
		::System::Byte _padding1[0x1];
		::System::Int32 LFGHJJHHGKC; // 0xA4
		::System::Int32 BKOEGHPFPPG; // 0xA8
		static ::System::Single* StaticGet_FIEKDOEEMCP()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "VortexBoxPuzzleBoard")->GetStaticField(0x12900);
		}

		// static const ::System::String* CJDIFCBFIAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void OnItemMoveFinish(::RPG::Client::Prop::VortexBoxPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::VortexBoxPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ONITEMMOVEFINISH_OFFSET))(this, a1);
		}

		::System::Void RefreshCanDragItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_REFRESHCANDRAGITEM_OFFSET))(this);
		}

		::System::Boolean CanItemMove(::RPG::Client::Prop::VortexBoxPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::VortexBoxPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_CANITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void TryMoveVortex(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_TRYMOVEVORTEX_OFFSET))(this, a1);
		}

		::System::Void TryDragBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_TRYDRAGBOX_OFFSET))(this);
		}

		::System::Void NDBCIBOAGIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_NDBCIBOAGIA_OFFSET))(this);
		}

		::System::UInt32 MJCLAPOEEPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_MJCLAPOEEPB_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 Item2BoardLocal(::RPG::Client::Prop::VortexBoxPuzzleItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::VortexBoxPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ITEM2BOARDLOCAL_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanCoord WorldPosition2Coord(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_WORLDPOSITION2COORD_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanDir WorldForwardRight2Dir(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanDir(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_WORLDFORWARDRIGHT2DIR_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::BoxmanCoord DiffByDir(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_DIFFBYDIR_OFFSET))(a1);
		}

		::RPG::Client::Prop::VortexBoxPuzzleItem* GetItem(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::RPG::Client::Prop::VortexBoxPuzzleItem*(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_GETITEM_OFFSET))(this, a1);
		}

		::System::Boolean JJLGKGLFOCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_JJLGKGLFOCI_OFFSET))(this);
		}

		::System::Void MGJLINFADJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_MGJLINFADJK_OFFSET))(this);
		}

		::System::Void FCHFLPGOFFK(::RPG::Client::Prop::VortexBoxPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::VortexBoxPuzzleItem*, ::RPG::Client::Prop::BoxmanDir, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_FCHFLPGOFFK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_GET_INTERACTABLE_OFFSET))(this);
		}

	};
}
