#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/MoleMole/EffectSimulate/NapEffectSimulatorMgr_NDGAHAFOBMI.h"

namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Video { class VideoClip; }
namespace UnityEngine::Video { class VideoPlayer; }

#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_BEAOLNJFLBL_OFFSET UNITYSDK_OFFSET(0x10002D40)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_ELLGOOAFNNK_OFFSET UNITYSDK_OFFSET(0x10004CE0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_FFKHIHLMJCD_OFFSET UNITYSDK_OFFSET(0x10002D00)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_FNFNKLBOOCE_OFFSET UNITYSDK_OFFSET(0x10004A00)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_FOFNJCIGEFM_OFFSET UNITYSDK_OFFSET(0x100048B0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x10004200)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GET_MATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x100046B0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GET_VIDEOCLIP_OFFSET UNITYSDK_OFFSET(0x100045D0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GFHPPENOLBI_OFFSET UNITYSDK_OFFSET(0x10004C80)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GHJJJKANOAM_OFFSET UNITYSDK_OFFSET(0x10004BE0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_HLEFHAOEFLP_OFFSET UNITYSDK_OFFSET(0x10003C80)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_HMMEALPCJPH_OFFSET UNITYSDK_OFFSET(0x10003D90)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_IJABPPNBIJK_OFFSET UNITYSDK_OFFSET(0x10004A90)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x100049F0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_MNLDADDKOMC_OFFSET UNITYSDK_OFFSET(0x10004DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_NMIBBDCBLLE_OFFSET UNITYSDK_OFFSET(0x10002FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x10004820)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_OMGBHAKAGLE_OFFSET UNITYSDK_OFFSET(0x10004B50)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_ONMFOCAEDEI_OFFSET UNITYSDK_OFFSET(0x10002D80)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10004220)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x10003160)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x10004650)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_SET_MATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x100046D0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_SET_VIDEOCLIP_OFFSET UNITYSDK_OFFSET(0x100045F0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x10004730)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESVideoPlayer_TypeDefinitionIndex = 70783;

	class ESVideoPlayer : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::System::Boolean m_bHasSetVal; // 0x58
		::System::Byte _padding0[0x3];
		::System::Single m_PlaybackSpeedValCache; // 0x5C
		::System::Boolean m_bPlaybackSpeedChanged; // 0x60
		::System::Byte _padding1[0x7];
		::UnityEngine::Video::VideoPlayer* m_stVideoPlayer; // 0x68
		::System::Single m_fCurFrame; // 0x70
		::System::Byte _padding2[0x4];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* playbackSpeed; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER__CTOR_OFFSET))(this);
		}

		::System::Boolean FFKHIHLMJCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_FFKHIHLMJCD_OFFSET))(this);
		}

		::System::Boolean BEAOLNJFLBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_BEAOLNJFLBL_OFFSET))(this);
		}

		::System::Void ONMFOCAEDEI(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_ONMFOCAEDEI_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void NMIBBDCBLLE(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_NMIBBDCBLLE_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void HMMEALPCJPH(::System::Single PBCAAADNEPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_HMMEALPCJPH_OFFSET))(this, PBCAAADNEPK);
		}

		::System::Void PHOADBJGFBE(::System::Boolean PBKICEDNILK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_PHOADBJGFBE_OFFSET))(this, PBKICEDNILK);
		}

		::UnityEngine::Video::VideoClip* get_videoClip()
		{
			return ((::UnityEngine::Video::VideoClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GET_VIDEOCLIP_OFFSET))(this);
		}

		::System::Void set_videoClip(::UnityEngine::Video::VideoClip* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_SET_VIDEOCLIP_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_SET_LOOP_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::String* get_materialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GET_MATERIALPROPERTY_OFFSET))(this);
		}

		::System::Void set_materialProperty(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_SET_MATERIALPROPERTY_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean HLEFHAOEFLP(::MoleMole::EffectSimulate::NapEffectSimulatorMgr_NDGAHAFOBMI BNHNGJKNJJD)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr_NDGAHAFOBMI))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_HLEFHAOEFLP_OFFSET))(this, BNHNGJKNJJD);
		}

		::System::Void OHFHFOHMBJH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_OHFHFOHMBJH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Collections::Generic::List_1<::System::String*>* FOFNJCIGEFM()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_FOFNJCIGEFM_OFFSET))(this);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean FNFNKLBOOCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_FNFNKLBOOCE_OFFSET))(this);
		}

		::System::Void IJABPPNBIJK(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_IJABPPNBIJK_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean OMGBHAKAGLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_OMGBHAKAGLE_OFFSET))(this);
		}

		::System::Void GHJJJKANOAM(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GHJJJKANOAM_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean GFHPPENOLBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_GFHPPENOLBI_OFFSET))(this);
		}

		::System::Void ELLGOOAFNNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_ELLGOOAFNNK_OFFSET))(this);
		}

		::System::Void MNLDADDKOMC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPLAYER_MNLDADDKOMC_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
