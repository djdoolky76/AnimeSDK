#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMMJNIPOLG;
namespace RPG::Client { class MusicVisualization_BeatEffectElementVisualBase; }
namespace RPG::Client { class PerMusicParameterBeat; }
namespace RPG::Client { class PerStateParamBeat; }
namespace RPG::Client { class PolymerEffectControllBase; }
namespace RPG::Client { class PolymerPropertyLinkMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_ANGDKKJJCKH_OFFSET UNITYSDK_OFFSET(0xD9132B0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_BJBDOADAOOD_OFFSET UNITYSDK_OFFSET(0xD9124C0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_BMEBKAFGDPM_OFFSET UNITYSDK_OFFSET(0xD913300)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD913530)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_DKCJIEGAMOK_OFFSET UNITYSDK_OFFSET(0xD9121A0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_DLBMGHCDGHL_OFFSET UNITYSDK_OFFSET(0xD9119A0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_EELJKEKHLKO_OFFSET UNITYSDK_OFFSET(0xD9122F0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_ENNCAPILHCO_OFFSET UNITYSDK_OFFSET(0xD912610)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_GCGDNLAELIL_OFFSET UNITYSDK_OFFSET(0xD912120)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_GDCLCBPODEI_OFFSET UNITYSDK_OFFSET(0xD913190)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_IBAALDDFBHK_OFFSET UNITYSDK_OFFSET(0xD913030)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_ICDPOFJMJKG_OFFSET UNITYSDK_OFFSET(0xD912340)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_IKMFHMFIALH_OFFSET UNITYSDK_OFFSET(0xD913460)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_ILBEAOBBCPM_OFFSET UNITYSDK_OFFSET(0xD911710)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_JEJEOEHBIPH_OFFSET UNITYSDK_OFFSET(0xD9116C0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD911C50)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_JLIPBCCEOCH_OFFSET UNITYSDK_OFFSET(0xD912FC0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_JLMMCJDFJCD_OFFSET UNITYSDK_OFFSET(0xD912F10)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_KCCAJAPICCM_OFFSET UNITYSDK_OFFSET(0xD912AA0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD911070)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_LKIBOFGOGHA_OFFSET UNITYSDK_OFFSET(0xD912770)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_MOKCCGGIFLH_OFFSET UNITYSDK_OFFSET(0xD911680)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_NEGDNMONCKC_OFFSET UNITYSDK_OFFSET(0xD9128A0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_OBFPEOGCDOF_OFFSET UNITYSDK_OFFSET(0xD912CD0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_OBPBIIOMKEC_OFFSET UNITYSDK_OFFSET(0xD9117D0)
#define RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_PHMGIJCAGON_OFFSET UNITYSDK_OFFSET(0xD911B70)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualizationBeatEffectElement_TypeDefinitionIndex = 70809;

	class MusicVisualizationBeatEffectElement : public ::System::Object
	{
	public:
		::System::UInt32 BeatNum; // 0x10
		::System::Boolean NeedRealtimeLoudness; // 0x14
		::System::Byte _padding0[0x3];
		::System::String* RTPC_Loudness; // 0x18
		::System::Single StateLerpTime; // 0x20
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::PerMusicParameterBeat*>* PerMusicParametersList; // 0x28
		::System::Single CurveWeight; // 0x30
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* MVTarget; // 0x38
		::RPG::Client::MusicVisualization_BeatEffectElementVisualBase* ElementVisual; // 0x40
		::System::Single SoundEventTriggerTime; // 0x48
		::System::Byte _padding3[0x4];
		::System::String* SoundEventName; // 0x50
		::RPG::Client::PolymerPropertyLinkMaterial* Linker; // 0x58
		::System::Int32 _TargetMusicBuffer; // 0x60
		::System::Int32 _TargetStateBuffer; // 0x64
		::RPG::Client::PerMusicParameterBeat* _OldMusic; // 0x68
		::RPG::Client::PerMusicParameterBeat* _NewMusic; // 0x70
		::RPG::Client::PerStateParamBeat* _OldStateParam; // 0x78
		::RPG::Client::PerStateParamBeat* _NewStateParam; // 0x80
		::BOMMJNIPOLG* DataForVisual; // 0x88
		::BOMMJNIPOLG* DataForVisualPause; // 0x90
		::System::Boolean _IsMusicOrStateChanging; // 0x98
		::System::Byte _padding4[0x3];
		::System::Single _StateLerpVal; // 0x9C
		::System::Single _MusicLerpTimer; // 0xA0
		::System::Single _StateLerpTimer; // 0xA4
		::System::Single _BeatTimer; // 0xA8
		::System::Single _BeatDuration; // 0xAC
		::System::Single _Loudness; // 0xB0
		::System::Single _LoudnessVelocity; // 0xB4
		::System::Int32 _CopiedMusicTarget; // 0xB8
		::System::Int32 _CopiedStateTarget; // 0xBC
		::System::Boolean _AllowCopySwapOnce; // 0xC0
		::System::Boolean _IsMusicChange; // 0xC1
		::System::Boolean _IsMusicStateChange; // 0xC2
		::System::Boolean _IsMusicOrStateChangeImmediate; // 0xC3
		::System::Boolean _IsSoundEventTriggeredThisRound; // 0xC4
		::System::Boolean _NoMusicStateParams; // 0xC5
		::System::Boolean _IsPlayingVisualEffect; // 0xC6
		::System::Byte _padding5[0x1];
		::System::Int32 _RecordMusicID; // 0xC8
		::System::Int32 _RecordStateID; // 0xCC
		::RPG::Client::PolymerEffectControllBase* _OwnerEffectControllBase; // 0xD0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void MOKCCGGIFLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_MOKCCGGIFLH_OFFSET))(this);
		}

		::System::Void JEJEOEHBIPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_JEJEOEHBIPH_OFFSET))(this);
		}

		::System::Void ILBEAOBBCPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_ILBEAOBBCPM_OFFSET))(this);
		}

		::System::Void OBPBIIOMKEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_OBPBIIOMKEC_OFFSET))(this);
		}

		::System::Void DLBMGHCDGHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_DLBMGHCDGHL_OFFSET))(this);
		}

		::System::Void PHMGIJCAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_PHMGIJCAGON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void JLMMCJDFJCD(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_JLMMCJDFJCD_OFFSET))(this, a1, a2);
		}

		::System::Void JLIPBCCEOCH(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_JLIPBCCEOCH_OFFSET))(this, a1, a2);
		}

		::System::Void DKCJIEGAMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_DKCJIEGAMOK_OFFSET))(this);
		}

		::System::Void LKIBOFGOGHA(::RPG::Client::PerMusicParameterBeat* a1, ::RPG::Client::PerMusicParameterBeat* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerMusicParameterBeat*, ::RPG::Client::PerMusicParameterBeat*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_LKIBOFGOGHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NEGDNMONCKC(::RPG::Client::PerStateParamBeat* a1, ::RPG::Client::PerStateParamBeat* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerStateParamBeat*, ::RPG::Client::PerStateParamBeat*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_NEGDNMONCKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BJBDOADAOOD(::RPG::Client::PerMusicParameterBeat* a1, ::RPG::Client::PerMusicParameterBeat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerMusicParameterBeat*, ::RPG::Client::PerMusicParameterBeat*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_BJBDOADAOOD_OFFSET))(this, a1, a2);
		}

		::System::Void ENNCAPILHCO(::RPG::Client::PerStateParamBeat* a1, ::RPG::Client::PerStateParamBeat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerStateParamBeat*, ::RPG::Client::PerStateParamBeat*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_ENNCAPILHCO_OFFSET))(this, a1, a2);
		}

		::System::Void IBAALDDFBHK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_IBAALDDFBHK_OFFSET))(this, a1);
		}

		::System::Void GDCLCBPODEI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_GDCLCBPODEI_OFFSET))(this, a1);
		}

		::System::Void ANGDKKJJCKH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_ANGDKKJJCKH_OFFSET))(this, a1);
		}

		::System::Void BMEBKAFGDPM(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_BMEBKAFGDPM_OFFSET))(this, a1);
		}

		::System::Single IKMFHMFIALH(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_IKMFHMFIALH_OFFSET))(this, a1);
		}

		::System::Void KCCAJAPICCM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_KCCAJAPICCM_OFFSET))(this, a1);
		}

		::System::Boolean GCGDNLAELIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_GCGDNLAELIL_OFFSET))(this);
		}

		::System::Void EELJKEKHLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_EELJKEKHLKO_OFFSET))(this);
		}

		::System::Void ICDPOFJMJKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_ICDPOFJMJKG_OFFSET))(this);
		}

		::System::Void OBFPEOGCDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONBEATEFFECTELEMENT_OBFPEOGCDOF_OFFSET))(this);
		}

	};
}
