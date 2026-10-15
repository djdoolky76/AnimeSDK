#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEKAOEFLAMO_BeatType.h"
#include "unitysdk/NEKAOEFLAMO_MusicPhase.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/System/Object.h"
class HMABMBCFEJH;
class JOKBBIDAKOF;
class NIJFPODENJA;
class NNOFLKFLHEM;
class PLKOBHJHPEM;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define NEKAOEFLAMO_AJAMJDIIFDO_OFFSET UNITYSDK_OFFSET(0xBB65720)
#define NEKAOEFLAMO_AOOBBFHEJEC_OFFSET UNITYSDK_OFFSET(0xBB66E60)
#define NEKAOEFLAMO_BDCIKNNKHIM_OFFSET UNITYSDK_OFFSET(0xBB651A0)
#define NEKAOEFLAMO_BNCOOPFBHBJ_OFFSET UNITYSDK_OFFSET(0xBB687A0)
#define NEKAOEFLAMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB68F10)
#define NEKAOEFLAMO_CMGKAGEMDLG_OFFSET UNITYSDK_OFFSET(0xBB66A50)
#define NEKAOEFLAMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB648D0)
#define NEKAOEFLAMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB64A50)
#define NEKAOEFLAMO_DNJMKGNLNCC_OFFSET UNITYSDK_OFFSET(0xBB67300)
#define NEKAOEFLAMO_DPBJCGONFFL_OFFSET UNITYSDK_OFFSET(0xBB67B90)
#define NEKAOEFLAMO_DPDDNFGEEGG_OFFSET UNITYSDK_OFFSET(0xBB68920)
#define NEKAOEFLAMO_EALHHFFNNNC_OFFSET UNITYSDK_OFFSET(0xBB66C30)
#define NEKAOEFLAMO_FDIKNKAKPGJ_OFFSET UNITYSDK_OFFSET(0xBB65420)
#define NEKAOEFLAMO_FMKFGIKMELL_OFFSET UNITYSDK_OFFSET(0xBB67260)
#define NEKAOEFLAMO_FPFNKHHMJLF_OFFSET UNITYSDK_OFFSET(0xBB66120)
#define NEKAOEFLAMO_GET_ADJUSTTIME_OFFSET UNITYSDK_OFFSET(0xBB68E50)
#define NEKAOEFLAMO_GET_BEATTIME_OFFSET UNITYSDK_OFFSET(0xBB68DD0)
#define NEKAOEFLAMO_GET_BOARD_OFFSET UNITYSDK_OFFSET(0xBB68E30)
#define NEKAOEFLAMO_GET_ISADJUST_OFFSET UNITYSDK_OFFSET(0xBB68E70)
#define NEKAOEFLAMO_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xBB68E10)
#define NEKAOEFLAMO_GET_PRESSNOTE_OFFSET UNITYSDK_OFFSET(0xBB68E90)
#define NEKAOEFLAMO_GET_TIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0xBB68DF0)
#define NEKAOEFLAMO_HLBBLBJBCFB_OFFSET UNITYSDK_OFFSET(0xBB67420)
#define NEKAOEFLAMO_IHHIHEKGFAG_OFFSET UNITYSDK_OFFSET(0xBB68EB0)
#define NEKAOEFLAMO_KCLJLHNIAPP_OFFSET UNITYSDK_OFFSET(0xBB679B0)
#define NEKAOEFLAMO_KOAIOAKMDAP_OFFSET UNITYSDK_OFFSET(0xBB657F0)
#define NEKAOEFLAMO_KOJDJGDLCHD_OFFSET UNITYSDK_OFFSET(0xBB66DC0)
#define NEKAOEFLAMO_LHADHOAMFFI_OFFSET UNITYSDK_OFFSET(0xBB64DE0)
#define NEKAOEFLAMO_MDMNJHCFMJB_OFFSET UNITYSDK_OFFSET(0xBB65C40)
#define NEKAOEFLAMO_OALCIJEHBHP_OFFSET UNITYSDK_OFFSET(0xBB67660)
#define NEKAOEFLAMO_OBFNDNGBLFD_OFFSET UNITYSDK_OFFSET(0xBB65BD0)
#define NEKAOEFLAMO_OCOFPOFPEGO_OFFSET UNITYSDK_OFFSET(0xBB68510)
#define NEKAOEFLAMO_OHIKNFDOPGH_OFFSET UNITYSDK_OFFSET(0xBB68CE0)
#define NEKAOEFLAMO_OHNHDBEFIBN_OFFSET UNITYSDK_OFFSET(0xBB66090)
#define NEKAOEFLAMO_OKCJEFMKFKG_OFFSET UNITYSDK_OFFSET(0xBB683C0)
#define NEKAOEFLAMO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBB64F50)
#define NEKAOEFLAMO_PCOLNDAPFCB_OFFSET UNITYSDK_OFFSET(0xBB68DB0)
#define NEKAOEFLAMO_PPLOKBOAEID_OFFSET UNITYSDK_OFFSET(0xBB65010)
#define NEKAOEFLAMO_SET_ADJUSTTIME_OFFSET UNITYSDK_OFFSET(0xBB68E60)
#define NEKAOEFLAMO_SET_BEATTIME_OFFSET UNITYSDK_OFFSET(0xBB68DE0)
#define NEKAOEFLAMO_SET_BOARD_OFFSET UNITYSDK_OFFSET(0xBB68E40)
#define NEKAOEFLAMO_SET_ISADJUST_OFFSET UNITYSDK_OFFSET(0xBB68E80)
#define NEKAOEFLAMO_SET_PHASE_OFFSET UNITYSDK_OFFSET(0xBB68E20)
#define NEKAOEFLAMO_SET_PRESSNOTE_OFFSET UNITYSDK_OFFSET(0xBB68EA0)
#define NEKAOEFLAMO_SET_TIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0xBB68E00)

inline static constexpr unsigned int NEKAOEFLAMO_TypeDefinitionIndex = 60160;

	class NEKAOEFLAMO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JOKBBIDAKOF*>* CBENMNAKIAM; // 0x10
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* DBBJLAFJHGC; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* GFGBFKPKDDL; // 0x20
		::RPG::GameCore::MusicRhythmTimelineConfig* _TimelineConfig_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::NIJFPODENJA*>* DIMLPFMLPNJ; // 0x30
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* NOCMBINLGJL; // 0x38
		::HMABMBCFEJH* _PressNote_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* HOLCODKCKPK; // 0x48
		::System::Collections::Generic::List_1<::PLKOBHJHPEM*>* BBMMPMMLPBI; // 0x50
		::System::Collections::Generic::List_1<::NNOFLKFLHEM*>* OECMIMNNDHG; // 0x58
		::RPG::Client::MusicRhythmBoard* _Board_k__BackingField; // 0x60
		::System::Single JMMONFJHCDH; // 0x68
		::System::Single PFBMMCKHPNP; // 0x6C
		::System::Single IENOOKKGFPM; // 0x70
		::System::Int32 DAGEINKHBEM; // 0x74
		::System::Int32 JHALKHDDAGL; // 0x78
		::System::Boolean DJFIIKLAPNO; // 0x7C
		::System::Boolean LMNKNPLAEID; // 0x7D
		::System::Boolean ILPBAGFGKLH; // 0x7E
		::System::Byte _padding0[0x1];
		::System::UInt32 LHEDKCCJFPM; // 0x80
		::System::Single OGOIBIPHOGP; // 0x84
		::System::Single BOBDOMHBPDI; // 0x88
		::NEKAOEFLAMO_MusicPhase _Phase_k__BackingField; // 0x8C
		::System::UInt32 KOKEMNFEKHD; // 0x90
		::System::UInt32 CAPLNPGDLNF; // 0x94
		::System::Boolean _IsAdjust_k__BackingField; // 0x98
		::System::Boolean JMCGNGDELDM; // 0x99
		::System::Boolean ADHOANELEHF; // 0x9A
		::System::Boolean IIBPDJJDMDF; // 0x9B
		::System::UInt32 DOEJBENLOAN; // 0x9C
		::NEKAOEFLAMO_BeatType MCIIOMLMAEO; // 0xA0
		::System::UInt32 DGNLBDCAAKO; // 0xA4
		::System::UInt32 PGBNBOLMHFD; // 0xA8
		::System::UInt32 PEKOLFBAIFJ; // 0xAC
		::System::Int32 BMINICDGGKI; // 0xB0
		::System::UInt32 NDKNONANFLJ; // 0xB4
		::System::Single HJKJOLPBAOO; // 0xB8
		::System::Boolean MCAPIAKDMAA; // 0xBC
		::System::Boolean JOHGADIOILC; // 0xBD
		::System::Byte _padding1[0x2];
		::System::Single _AdjustTime_k__BackingField; // 0xC0
		::System::Single GOBCFCOEAIC; // 0xC4
		::System::Single _BeatTime_k__BackingField; // 0xC8
		::System::Byte _padding2[0x4];
		::System::Double LGPLNDPJEKE; // 0xD0
		static ::System::String** StaticGet_MHBEDKNOILN()
		{
			return (::System::String**)UnitySDK::FromName("", "NEKAOEFLAMO")->GetStaticField(0xDE00);
		}

		static ::System::String** StaticGet_IOAHOFMICPK()
		{
			return (::System::String**)UnitySDK::FromName("", "NEKAOEFLAMO")->GetStaticField(0xDE08);
		}

		static ::System::String** StaticGet_LKBDNNDLDIB()
		{
			return (::System::String**)UnitySDK::FromName("", "NEKAOEFLAMO")->GetStaticField(0xDE10);
		}

		static ::System::Single* StaticGet_MPEGANNLENK()
		{
			return (::System::Single*)UnitySDK::FromName("", "NEKAOEFLAMO")->GetStaticField(0x2D80);
		}

		static ::System::Single* StaticGet_OCNKMKNEBCA()
		{
			return (::System::Single*)UnitySDK::FromName("", "NEKAOEFLAMO")->GetStaticField(0x2D84);
		}

		static ::System::Single* StaticGet_GHOOMHFJIFC()
		{
			return (::System::Single*)UnitySDK::FromName("", "NEKAOEFLAMO")->GetStaticField(0x2D88);
		}

		::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEKAOEFLAMO_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void AJAMJDIIFDO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_AJAMJDIIFDO_OFFSET))(this, a1);
		}

		::System::Void KOAIOAKMDAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_KOAIOAKMDAP_OFFSET))(this);
		}

		::System::Void MDMNJHCFMJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_MDMNJHCFMJB_OFFSET))(this);
		}

		::System::Single OBFNDNGBLFD(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_OBFNDNGBLFD_OFFSET))(this, a1);
		}

		::System::Void OHNHDBEFIBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_OHNHDBEFIBN_OFFSET))(this, a1);
		}

		::System::Void PPLOKBOAEID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_PPLOKBOAEID_OFFSET))(this, a1);
		}

		::System::Void FPFNKHHMJLF(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_FPFNKHHMJLF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CMGKAGEMDLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_CMGKAGEMDLG_OFFSET))(this);
		}

		::System::Void EALHHFFNNNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_EALHHFFNNNC_OFFSET))(this);
		}

		::System::Void LHADHOAMFFI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_LHADHOAMFFI_OFFSET))(this, a1);
		}

		::System::Void KOJDJGDLCHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_KOJDJGDLCHD_OFFSET))(this);
		}

		::System::Void AOOBBFHEJEC(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_AOOBBFHEJEC_OFFSET))(this, a1);
		}

		::System::Single FMKFGIKMELL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_FMKFGIKMELL_OFFSET))(this);
		}

		::System::Boolean DNJMKGNLNCC(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_DNJMKGNLNCC_OFFSET))(this, a1);
		}

		::System::Void HLBBLBJBCFB(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::String* a3, ::System::String* a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_HLBBLBJBCFB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OALCIJEHBHP(::UnityEngine::Animator* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_OALCIJEHBHP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void BDCIKNNKHIM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_BDCIKNNKHIM_OFFSET))(this, a1);
		}

		::System::Void KCLJLHNIAPP(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_KCLJLHNIAPP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FDIKNKAKPGJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_FDIKNKAKPGJ_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* DPBJCGONFFL(::System::Single a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_DPBJCGONFFL_OFFSET))(this, a1);
		}

		::System::Boolean OKCJEFMKFKG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_OKCJEFMKFKG_OFFSET))(this, a1);
		}

		::System::Boolean OCOFPOFPEGO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_OCOFPOFPEGO_OFFSET))(this, a1, a2);
		}

		::System::Void BNCOOPFBHBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_BNCOOPFBHBJ_OFFSET))(this);
		}

		::System::Void DPDDNFGEEGG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_DPDDNFGEEGG_OFFSET))(this, a1);
		}

		::System::Boolean OHIKNFDOPGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_OHIKNFDOPGH_OFFSET))(this);
		}

		::System::Single PCOLNDAPFCB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_PCOLNDAPFCB_OFFSET))(this);
		}

		::System::Single get_BeatTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_GET_BEATTIME_OFFSET))(this);
		}

		::System::Void set_BeatTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_SET_BEATTIME_OFFSET))(this, a1);
		}

		::RPG::GameCore::MusicRhythmTimelineConfig* get_TimelineConfig()
		{
			return ((::RPG::GameCore::MusicRhythmTimelineConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_GET_TIMELINECONFIG_OFFSET))(this);
		}

		::System::Void set_TimelineConfig(::RPG::GameCore::MusicRhythmTimelineConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_SET_TIMELINECONFIG_OFFSET))(this, a1);
		}

		::NEKAOEFLAMO_MusicPhase get_Phase()
		{
			return ((::NEKAOEFLAMO_MusicPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::NEKAOEFLAMO_MusicPhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEKAOEFLAMO_MusicPhase))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_SET_PHASE_OFFSET))(this, a1);
		}

		::RPG::Client::MusicRhythmBoard* get_Board()
		{
			return ((::RPG::Client::MusicRhythmBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_GET_BOARD_OFFSET))(this);
		}

		::System::Void set_Board(::RPG::Client::MusicRhythmBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_SET_BOARD_OFFSET))(this, a1);
		}

		::System::Single get_AdjustTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_GET_ADJUSTTIME_OFFSET))(this);
		}

		::System::Void set_AdjustTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_SET_ADJUSTTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAdjust()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_GET_ISADJUST_OFFSET))(this);
		}

		::System::Void set_IsAdjust(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_SET_ISADJUST_OFFSET))(this, a1);
		}

		::HMABMBCFEJH* get_PressNote()
		{
			return ((::HMABMBCFEJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_GET_PRESSNOTE_OFFSET))(this);
		}

		::System::Void set_PressNote(::HMABMBCFEJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMABMBCFEJH*))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_SET_PRESSNOTE_OFFSET))(this, a1);
		}

		::System::Boolean IHHIHEKGFAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOEFLAMO_IHHIHEKGFAG_OFFSET))(this);
		}

	};
