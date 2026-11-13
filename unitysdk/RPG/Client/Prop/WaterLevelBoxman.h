#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/WaterLevelAreaInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class WaterLevelBoxItem; }
namespace RPG::Client::Prop { class WaterLevelPuzzleBoardPlus; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_AGMAKBDHHIJ_OFFSET UNITYSDK_OFFSET(0x1870BC40)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_AKJCNAHEKCK_OFFSET UNITYSDK_OFFSET(0x1870B9E0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_APECGAKCCGE_OFFSET UNITYSDK_OFFSET(0x1870BD10)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0x1870CE10)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_CANITEMMOVE_OFFSET UNITYSDK_OFFSET(0x1870CC10)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1870DBB0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1870DAB0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1870D9E0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_DUMPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1870AB80)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ECIHHCHGEJC_OFFSET UNITYSDK_OFFSET(0x1870B840)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_EEJDPEDCFBE_OFFSET UNITYSDK_OFFSET(0x1870BE60)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_GETITEM_OFFSET UNITYSDK_OFFSET(0x1870C890)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITBOXMANWITHSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1870AC80)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITCHANGEWATERLEVEL_OFFSET UNITYSDK_OFFSET(0x1870B460)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITITEMS_OFFSET UNITYSDK_OFFSET(0x1870A9F0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0x1870AE70)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1870AFF0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITWATERLEVEL_OFFSET UNITYSDK_OFFSET(0x1870B3E0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ITEM2BOARDLOCAL_OFFSET UNITYSDK_OFFSET(0x1870A120)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_JPGMDHIEFFB_OFFSET UNITYSDK_OFFSET(0x1870BF30)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_MDOHBJFJJIC_OFFSET UNITYSDK_OFFSET(0x1870C930)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_MHBFJCBHDBN_OFFSET UNITYSDK_OFFSET(0x1870CD80)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_NDBCIBOAGIA_OFFSET UNITYSDK_OFFSET(0x1870B0C0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_NJOHJGIDCMJ_OFFSET UNITYSDK_OFFSET(0x1870D520)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_OHAJDILOFDO_OFFSET UNITYSDK_OFFSET(0x1870C9B0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0x1870A550)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVE_OFFSET UNITYSDK_OFFSET(0x1870D170)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x1870D5D0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTANIMCHANGEWATERLEVEL_OFFSET UNITYSDK_OFFSET(0x1870B710)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTCHANGEWATERLEVELIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1870B910)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_TICK_OFFSET UNITYSDK_OFFSET(0x1870C110)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDFORWARDRIGHT2DIR_OFFSET UNITYSDK_OFFSET(0x1870CA30)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDPOSITION2COORD_OFFSET UNITYSDK_OFFSET(0x1870C060)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxman_TypeDefinitionIndex = 81690;

	class WaterLevelBoxman : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 Origin; // 0x18
		::UnityEngine::Vector3 Forward; // 0x24
		::UnityEngine::Vector3 Right; // 0x30
		::System::Single GridSize; // 0x3C
		::System::Int32 MaxRow; // 0x40
		::System::Int32 MaxCol; // 0x44
		::Il2CppArray<::RPG::Client::Prop::WaterLevelAreaInfo>* WaterLevelAreaInfos; // 0x48
		::System::Single WaterHeight; // 0x50
		::System::Single WaterUpSpeed; // 0x54
		::System::String* OnEnterCustomString; // 0x58
		::System::String* OnExitCustomString; // 0x60
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* NJJEFAFJGBK; // 0x70
		::RPG::GameCore::OptionTriggerInfo* ACELEFOBNON; // 0x78
		::RPG::GameCore::OptionTriggerInfo* OBIIFLPGAFB; // 0x80
		::RPG::GameCore::OptionTriggerInfo* APBGNCMEGEO; // 0x88
		::RPG::GameCore::OptionTriggerInfo* CEKKMDBDCBP; // 0x90
		::RPG::Client::Prop::WaterLevelBoxItem* LACGNAOCENP; // 0x98
		::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* COAMCKILKPH; // 0xA0
		::System::Boolean DIOEAJEHHND; // 0xA8
		::System::Boolean OOFAMMJEKLC; // 0xA9
		::System::Boolean DALKJPIGDNO; // 0xAA
		::System::Byte _padding0[0x1];
		::RPG::Client::Prop::BoxmanCoord PJDCBCDLLFN; // 0xAC
		::UnityEngine::Vector3 NCALLJIMKMA; // 0xB4
		::System::Boolean DCOLDLGBJKE; // 0xC0
		::System::Boolean PADKGHDPECC; // 0xC1
		::System::Boolean OGIMPEPMDIL; // 0xC2
		::System::Byte _padding1[0x5];
		::System::Object* PGHEGHLPIDH; // 0xC8
		::Il2CppArray<::RPG::Client::Prop::WaterLevelBoxItem*>* NMLACFJGNFP; // 0xD0
		static ::System::Single* StaticGet_FIEKDOEEMCP()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "WaterLevelBoxman")->GetStaticField(0x14460);
		}

		// static const ::System::String* FDMBKAAFMPE; // 0x0
		// static const ::System::String* GICCJAELDIF; // 0x0
		// static const ::System::String* IDGNMCLLEBD; // 0x0
		// static const ::System::String* DLNNPLNNHFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_CCTOR_OFFSET))();
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITITEMS_OFFSET))(this);
		}

		::System::Void DumpSaveData(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_DUMPSAVEDATA_OFFSET))(this, a1);
		}

		::System::Void InitBoxmanWithSaveData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITBOXMANWITHSAVEDATA_OFFSET))(this, a1);
		}

		::System::Void InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITOPTIONS_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelPuzzleBoardPlus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITPUZZLE_OFFSET))(this, a1);
		}

		::System::Void InitWaterLevel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITWATERLEVEL_OFFSET))(this, a1);
		}

		::System::Void InitChangeWaterLevel(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITCHANGEWATERLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void StartAnimChangeWaterLevel(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTANIMCHANGEWATERLEVEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartChangeWaterLevelImmediate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTCHANGEWATERLEVELIMMEDIATE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* ECIHHCHGEJC(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_ECIHHCHGEJC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single AGMAKBDHHIJ(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_AGMAKBDHHIJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AKJCNAHEKCK(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_AKJCNAHEKCK_OFFSET))(this, a1, a2);
		}

		::System::Void NDBCIBOAGIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_NDBCIBOAGIA_OFFSET))(this);
		}

		::RPG::GameCore::OptionTriggerInfo* APECGAKCCGE(::RPG::Client::Prop::WaterLevelBoxItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::RPG::GameCore::OptionTriggerInfo*(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_APECGAKCCGE_OFFSET))(this, a1, a2);
		}

		::System::Void EEJDPEDCFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_EEJDPEDCFBE_OFFSET))(this);
		}

		::System::Boolean JPGMDHIEFFB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_JPGMDHIEFFB_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_TICK_OFFSET))(this, a1);
		}

		::System::Void MDOHBJFJJIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_MDOHBJFJJIC_OFFSET))(this);
		}

		::System::Void OHAJDILOFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_OHAJDILOFDO_OFFSET))(this);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Item2BoardLocal(::RPG::Client::Prop::WaterLevelBoxItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_ITEM2BOARDLOCAL_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanCoord WorldPosition2Coord(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDPOSITION2COORD_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanDir WorldForwardRight2Dir(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanDir(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDFORWARDRIGHT2DIR_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::WaterLevelBoxItem* GetItem(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::RPG::Client::Prop::WaterLevelBoxItem*(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_GETITEM_OFFSET))(this, a1);
		}

		::System::Void OnItemMove(::RPG::Client::Prop::WaterLevelBoxItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void MHBFJCBHDBN(::RPG::Client::Prop::WaterLevelBoxItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_MHBFJCBHDBN_OFFSET))(this, a1);
		}

		::System::Void OnItemMoveFinish(::RPG::Client::Prop::WaterLevelBoxItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVEFINISH_OFFSET))(this, a1);
		}

		::System::Boolean CanItemMove(::RPG::Client::Prop::WaterLevelBoxItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_CANITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean NJOHJGIDCMJ(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_NJOHJGIDCMJ_OFFSET))(this, a1);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_DISPOSE_OFFSET))(this);
		}

	};
}
