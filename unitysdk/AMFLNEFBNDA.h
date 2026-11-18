#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define AMFLNEFBNDA_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x143B72F0)
#define AMFLNEFBNDA_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x143B7320)
#define AMFLNEFBNDA_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x143B7310)
#define AMFLNEFBNDA_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x143B7330)
#define AMFLNEFBNDA_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x143B7340)
#define AMFLNEFBNDA_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x143B6F00)
#define AMFLNEFBNDA_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x143B6E80)
#define AMFLNEFBNDA_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x143B6DE0)
#define AMFLNEFBNDA_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x143B6E30)
#define AMFLNEFBNDA_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x143B7300)
#define AMFLNEFBNDA_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x143B6F80)
#define AMFLNEFBNDA_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x143B7000)
#define AMFLNEFBNDA__CTOR_OFFSET UNITYSDK_OFFSET(0x143B71C0)

inline static constexpr unsigned int AMFLNEFBNDA_TypeDefinitionIndex = 53582;

class AMFLNEFBNDA : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Gradient* BIIJMCDOIGI; // 0x10
	::UnityEngine::Texture* NMFIGDIOIKA; // 0x18
	::UnityEngine::Vector4 HPONHBCIIIG; // 0x20
	::System::Single POGDFAEGKLM; // 0x30
	::System::Single DMCMGBCIDNH; // 0x34
	::System::Single FCMMKFICOID; // 0x38
	::System::Single PJNDFDOFBFP; // 0x3C
	::System::Single AIFDILNNOKK; // 0x40
	::System::Single FMCCKEENHFH; // 0x44
	::System::Single LDPJPGDPCCM; // 0x48
	::System::Single IJOLBIONOJF; // 0x4C
	::System::Single DALLJAFIDGJ; // 0x50
	::UnityEngine::Color NJPCADOFCPE; // 0x54
	::System::Single GLPHGPJDPHE; // 0x64
	::System::Single EMNJGFJPNOC; // 0x68
	::System::Single ELBJGKDOOAC; // 0x6C
	::System::Single DKHEMCFKFKA; // 0x70
	::System::Single DELJLKMEKCE; // 0x74
	::System::Single LNHKHBOLJIH; // 0x78
	::System::Single BMADJHAOAGI; // 0x7C
	::System::Single CPIIHJNJFMJ; // 0x80
	::System::Single KNBMOPLLJEH; // 0x84
	::System::Int32 FEMKNLLJJMD; // 0x88
	::System::Single GJADNPICAIB; // 0x8C
	::System::Single DDLFMLDCEGC; // 0x90
	::System::Single BKBAJDGLHFP; // 0x94
	::UnityEngine::Vector3 NBGEHLDNKHG; // 0x98
	::System::Single OKBKHKGKFAN; // 0xA4
	::System::Single IAPNABDEENF; // 0xA8
	::UnityEngine::Vector2 IMEJJFNGNBF; // 0xAC
	::System::Single PLLDCMBBJAM; // 0xB4
	::System::Int32 FBLIHAPEEHG; // 0xB8
	::System::Single AADBIJNKMPL; // 0xBC
	::System::Single KPOEPMDLKPB; // 0xC0
	::UnityEngine::Color HBLFPFLDADH; // 0xC4
	::UnityEngine::Color FMFKLIFBDPE; // 0xD4
	::UnityEngine::Color DEBBDFPLKJJ; // 0xE4
	::UnityEngine::Color DJMGHHLCBDO; // 0xF4
	::System::Boolean EJHOBCNCKLK; // 0x104
	::System::Boolean MBPHLBHMCOG; // 0x105
	::System::Boolean GHFAHIOMBKD; // 0x106
	::System::Byte _padding0[0x1];
	::System::Single EMKHHBJKOME; // 0x108
	::System::Boolean CKDNCBGAMKI; // 0x10C
	::System::Boolean BGMOJDFCGKJ; // 0x10D
	::System::Boolean MEOLAJCIGBP; // 0x10E
	::System::Boolean KCPMGJMEFJL; // 0x10F
	::UnityEngine::Vector2 GKPMFILAGCM; // 0x110
	::UnityEngine::Vector3 EKNKIOIFJKA; // 0x118
	::System::Single LJFBJBBAFKO; // 0x124
	::System::Single DLKOIHJJBKI; // 0x128
	::UnityEngine::Color LIKGFCAGNGI; // 0x12C
	::System::Single LPAPEMIBPEP; // 0x13C
	::UnityEngine::Color CPHIMCFFFHE; // 0x140
	::System::Single DHKJNJJFLAD; // 0x150
	::System::Single PLEBLGOCKLH; // 0x154
	::System::Single EHPBOBGLEMM; // 0x158
	::System::Single MIAHKKGCAGH; // 0x15C
	::UnityEngine::Color BCFONLONFPM; // 0x160

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFLNEFBNDA__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AMFLNEFBNDA_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}
};
