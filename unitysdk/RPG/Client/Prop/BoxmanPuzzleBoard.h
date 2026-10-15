#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanItemType.h"
#include "unitysdk/RPG/Client/Prop/ScenePuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ENLNFBCDEIO;
namespace RPG::Client::Prop { class BoxmanPuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_AGOEDECCNNA_OFFSET UNITYSDK_OFFSET(0xDC2DDF0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_APECGAKCCGE_OFFSET UNITYSDK_OFFSET(0xDC2E680)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xDC2FB00)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CANITEMMOVE_OFFSET UNITYSDK_OFFSET(0xDC2F8C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CCGJOCAIJAC_OFFSET UNITYSDK_OFFSET(0xDC30BE0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC32320)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC32180)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DBCDDELBHNH_OFFSET UNITYSDK_OFFSET(0xDC2F410)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DIFFBYDIR_OFFSET UNITYSDK_OFFSET(0xDC2D5B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC31E50)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_EEJDPEDCFBE_OFFSET UNITYSDK_OFFSET(0xDC2E7E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_1_OFFSET UNITYSDK_OFFSET(0xDC308C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_OFFSET UNITYSDK_OFFSET(0xDC2D650)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETTARGETS_OFFSET UNITYSDK_OFFSET(0xDC30960)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISINITFINISH_OFFSET UNITYSDK_OFFSET(0xDC32160)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISPLAYERINBOARD_OFFSET UNITYSDK_OFFSET(0xDC32140)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xDC32130)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDC2C430)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xDC2E070)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC2E350)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDC2C3E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ITEM2BOARDLOCAL_OFFSET UNITYSDK_OFFSET(0xDC30800)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_JJLGKGLFOCI_OFFSET UNITYSDK_OFFSET(0xDC30AA0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_JPGMDHIEFFB_OFFSET UNITYSDK_OFFSET(0xDC2E8C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_KCADAIOKBBK_OFFSET UNITYSDK_OFFSET(0xDC309E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xDC309A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MDOHBJFJJIC_OFFSET UNITYSDK_OFFSET(0xDC2F590)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xDC30D00)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MHBFJCBHDBN_OFFSET UNITYSDK_OFFSET(0xDC2FA80)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MJCLAPOEEPB_OFFSET UNITYSDK_OFFSET(0xDC2E2D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_NDBCIBOAGIA_OFFSET UNITYSDK_OFFSET(0xDC2E1F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_NMAJLKNBOGO_OFFSET UNITYSDK_OFFSET(0xDC2D760)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_OCJOBCPOFJM_OFFSET UNITYSDK_OFFSET(0xDC2D6F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_OLKIACHPJED_OFFSET UNITYSDK_OFFSET(0xDC2F630)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xDC31410)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVE_OFFSET UNITYSDK_OFFSET(0xDC30060)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xDC2D7D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC31480)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISINITFINISH_OFFSET UNITYSDK_OFFSET(0xDC32170)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISPLAYERINBOARD_OFFSET UNITYSDK_OFFSET(0xDC32150)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC2EAB0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDFORWARDRIGHT2DIR_OFFSET UNITYSDK_OFFSET(0xDC2F6C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDPOSITION2COORD_OFFSET UNITYSDK_OFFSET(0xDC2E990)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleBoard_TypeDefinitionIndex = 78845;

	class BoxmanPuzzleBoard : public ::RPG::Client::Prop::ScenePuzzleBoardBase
	{
	public:
		::System::Int32 DJHIOIJFCOF; // 0x50
		::System::Boolean OOFAMMJEKLC; // 0x54
		::System::Boolean DALKJPIGDNO; // 0x55
		::System::Byte _padding0[0x2];
		::RPG::Client::Prop::BoxmanCoord PJDCBCDLLFN; // 0x58
		::UnityEngine::Vector3 NCALLJIMKMA; // 0x60
		::System::Byte _padding1[0x4];
		::System::Object* PGHEGHLPIDH; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BoxmanPuzzleItem*>* KPJHIOKBJEI; // 0x78
		::UnityEngine::Vector3 Origin; // 0x80
		::UnityEngine::Vector3 Forward; // 0x8C
		::UnityEngine::Vector3 Right; // 0x98
		::System::Single GridSize; // 0xA4
		::System::Int32 MaxRow; // 0xA8
		::System::Int32 MaxCol; // 0xAC
		::System::String* BoxStartMoveSoundName; // 0xB0
		::System::String* BoxArriveTargetSoundName; // 0xB8
		::System::Boolean PuzzleFinish; // 0xC0
		::System::Byte _padding2[0x7];
		::Il2CppArray<::System::Boolean>* LOCGLGJOKLG; // 0xC8
		::Il2CppArray<::System::Boolean>* LMJOFGDAFFH; // 0xD0
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0xD8
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* NJJEFAFJGBK; // 0xE0
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* BALCECDAEJD; // 0xE8
		::RPG::GameCore::OptionTriggerInfo* ACELEFOBNON; // 0xF0
		::RPG::GameCore::OptionTriggerInfo* OBIIFLPGAFB; // 0xF8
		::RPG::GameCore::OptionTriggerInfo* APBGNCMEGEO; // 0x100
		::RPG::GameCore::OptionTriggerInfo* CEKKMDBDCBP; // 0x108
		::System::Boolean _IsPlayerInBoard_k__BackingField; // 0x110
		::System::Boolean _IsInitFinish_k__BackingField; // 0x111
		::System::Boolean DHNPPPEBHDC; // 0x112
		::System::Byte _padding3[0x5];
		::System::Object* PDBOBILIFLF; // 0x118
		::RPG::Client::Prop::BoxmanPuzzleItem* LACGNAOCENP; // 0x120
		::System::Boolean ACIIEAHODKI; // 0x128
		static ::System::Single* StaticGet_FIEKDOEEMCP()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "BoxmanPuzzleBoard")->GetStaticField(0x111D0);
		}

		// static const ::System::String* FDMBKAAFMPE; // 0x0
		// static const ::System::String* GICCJAELDIF; // 0x0
		// static const ::System::String* IDGNMCLLEBD; // 0x0
		// static const ::System::String* DLNNPLNNHFH; // 0x0
		// static const ::System::String* CJDIFCBFIAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void RecoverFromPuzzleState(::ENLNFBCDEIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENLNFBCDEIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean OCJOBCPOFJM(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_OCJOBCPOFJM_OFFSET))(this, a1);
		}

		::System::Boolean NMAJLKNBOGO(::System::Nullable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_NMAJLKNBOGO_OFFSET))(this, a1);
		}

		::System::Void InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITOPTIONS_OFFSET))(this);
		}

		::System::Void NDBCIBOAGIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_NDBCIBOAGIA_OFFSET))(this);
		}

		::System::UInt32 MJCLAPOEEPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MJCLAPOEEPB_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::OptionTriggerInfo* APECGAKCCGE(::RPG::Client::Prop::BoxmanPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::RPG::GameCore::OptionTriggerInfo*(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_APECGAKCCGE_OFFSET))(this, a1, a2);
		}

		::System::Void EEJDPEDCFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_EEJDPEDCFBE_OFFSET))(this);
		}

		::System::Boolean JPGMDHIEFFB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_JPGMDHIEFFB_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Void MDOHBJFJJIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MDOHBJFJJIC_OFFSET))(this);
		}

		::System::Void OLKIACHPJED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_OLKIACHPJED_OFFSET))(this);
		}

		::UnityEngine::Vector3 Item2BoardLocal(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ITEM2BOARDLOCAL_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanCoord WorldPosition2Coord(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDPOSITION2COORD_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanDir WorldForwardRight2Dir(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanDir(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDFORWARDRIGHT2DIR_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::BoxmanCoord DiffByDir(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DIFFBYDIR_OFFSET))(a1);
		}

		::RPG::Client::Prop::BoxmanPuzzleItem* GetItem(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::RPG::Client::Prop::BoxmanPuzzleItem*(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanPuzzleItem* GetItem_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::BoxmanPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::BoxmanPuzzleItem*>* GetTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::BoxmanPuzzleItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETTARGETS_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MARKDIRTY_OFFSET))(this);
		}

		::System::Boolean KCADAIOKBBK(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_KCADAIOKBBK_OFFSET))(this, a1);
		}

		::System::Boolean JJLGKGLFOCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_JJLGKGLFOCI_OFFSET))(this);
		}

		::System::Int32 CCGJOCAIJAC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CCGJOCAIJAC_OFFSET))(this);
		}

		::System::Boolean DBCDDELBHNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DBCDDELBHNH_OFFSET))(this);
		}

		::System::Void MGJLINFADJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MGJLINFADJK_OFFSET))(this);
		}

		::System::Void OnItemMove(::RPG::Client::Prop::BoxmanPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void AGOEDECCNNA(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_AGOEDECCNNA_OFFSET))(this, a1);
		}

		::System::Void MHBFJCBHDBN(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MHBFJCBHDBN_OFFSET))(this, a1);
		}

		::System::Void OnItemMoveFinish(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVEFINISH_OFFSET))(this, a1);
		}

		::System::Boolean CanItemMove(::RPG::Client::Prop::BoxmanPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CANITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_StartTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_STARTTIME_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerInBoard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISPLAYERINBOARD_OFFSET))(this);
		}

		::System::Void set_IsPlayerInBoard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISPLAYERINBOARD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInitFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISINITFINISH_OFFSET))(this);
		}

		::System::Void set_IsInitFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISINITFINISH_OFFSET))(this, a1);
		}

	};
}
