#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/OPEECCJJHGB_JLPLOKFKGBI.h"

class AkSegmentInfo;
class IOHLHLGNLBO;
class OPEECCJJHGB;
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_AEBHNMBIIPG_OFFSET UNITYSDK_OFFSET(0x12754E10)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_BBMFJFHKLCF_OFFSET UNITYSDK_OFFSET(0x12754920)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_CGFHCFBDOOB_OFFSET UNITYSDK_OFFSET(0x12755630)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_DBEEDDPAEKH_OFFSET UNITYSDK_OFFSET(0x12754050)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_DKNBOKCCFPK_OFFSET UNITYSDK_OFFSET(0x12755010)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_GLLEHDNFLKA_OFFSET UNITYSDK_OFFSET(0x12755F10)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_JGIMCDFCJEP_OFFSET UNITYSDK_OFFSET(0x12755170)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_JLMBNKDGGJI_OFFSET UNITYSDK_OFFSET(0x12755B20)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_KOBDLKIEEJN_OFFSET UNITYSDK_OFFSET(0x12755BA0)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12755780)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_MHJMDNJHEMO_OFFSET UNITYSDK_OFFSET(0x12755F70)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_NKFKBGLCPBG_OFFSET UNITYSDK_OFFSET(0x12754730)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12754A40)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12754670)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12753E00)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_PJABHGPFAPH_OFFSET UNITYSDK_OFFSET(0x127540B0)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12754A90)
#define MOLEMOLE_AUDIO_MONOTESTMUSICMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x12755A90)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoTestMusicMeter_TypeDefinitionIndex = 52147;

	class MonoTestMusicMeter : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single ODJDJAOMFAE; // 0x0
		// static const ::System::Single KFCLBKBDLPH; // 0x0
		// static const ::System::Single OHCOMIJPGGC; // 0x0
		// static const ::System::Single LGGMGGHCNLF; // 0x0
		::System::String* musicEventName; // 0x18
		::Il2CppArray<::System::UInt32>* segmentIds; // 0x20
		::System::Boolean faceCamera; // 0x28
		::System::Boolean vertical; // 0x29
		::System::Boolean beatFlash; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Single beatFlashDecaySec; // 0x2C
		::System::Single minDb; // 0x30
		::System::Single maxDb; // 0x34
		::System::Single yellowDb; // 0x38
		::System::Single redDb; // 0x3C
		::System::Single dbgPeakDb; // 0x40
		::System::Single dbgRmsDb; // 0x44
		::System::Single dbgBeatFlash; // 0x48
		::System::Byte _padding1[0x4];
		::System::String* dbgBusName; // 0x50
		::UnityEngine::Renderer* BGHMFOCAHKH; // 0x58
		::UnityEngine::MaterialPropertyBlock* FAKODOKICHI; // 0x60
		::System::UInt32 KCBDANGBHGC; // 0x68
		::System::Boolean DKPAACMNBLK; // 0x6C
		::System::Byte _padding2[0x3];
		::System::String* MOOCIBNBLHF; // 0x70
		::System::UInt32 AKIJKACIJCC; // 0x78
		::System::Single MDGFNMGIOEO; // 0x7C
		::OPEECCJJHGB* OBPLEDOGCNI; // 0x80
		::AkSegmentInfo* OIAEMMHCMFO; // 0x88
		::System::Boolean DFOILPIJGLL; // 0x90
		::System::Byte _padding3[0x3];
		::System::Single CADJDHDJMGJ; // 0x94
		::System::Single LPKNNBBIGFM; // 0x98
		::System::Single IMPFILGLJAC; // 0x9C
		::System::Single HMBHIIOKFKH; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_LATEUPDATE_OFFSET))(this);
		}

		::System::Single JLMBNKDGGJI(::System::Single JAKAPNEKNPH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_JLMBNKDGGJI_OFFSET))(this, JAKAPNEKNPH);
		}

		::System::Void PJABHGPFAPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_PJABHGPFAPH_OFFSET))(this);
		}

		::System::Void AEBHNMBIIPG(::IOHLHLGNLBO* LDPBOMMBNBN)
		{
			return ((::System::Void(*)(::PVOID, ::IOHLHLGNLBO*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_AEBHNMBIIPG_OFFSET))(this, LDPBOMMBNBN);
		}

		::System::Void NKFKBGLCPBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_NKFKBGLCPBG_OFFSET))(this);
		}

		::System::Boolean KOBDLKIEEJN(::System::UInt32 ELNEEALLBGO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_KOBDLKIEEJN_OFFSET))(this, ELNEEALLBGO);
		}

		::System::Boolean JGIMCDFCJEP(::OPEECCJJHGB* FPCIKBBAOCM)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPEECCJJHGB*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_JGIMCDFCJEP_OFFSET))(this, FPCIKBBAOCM);
		}

		::System::Void MHJMDNJHEMO(::OPEECCJJHGB_JLPLOKFKGBI MFHBPIBHAOB)
		{
			return ((::System::Void(*)(::PVOID, ::OPEECCJJHGB_JLPLOKFKGBI))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_MHJMDNJHEMO_OFFSET))(this, MFHBPIBHAOB);
		}

		::System::Boolean GLLEHDNFLKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_GLLEHDNFLKA_OFFSET))(this);
		}

		::System::Void DBEEDDPAEKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_DBEEDDPAEKH_OFFSET))(this);
		}

		::System::Void DKNBOKCCFPK(::IOHLHLGNLBO* LDPBOMMBNBN)
		{
			return ((::System::Void(*)(::PVOID, ::IOHLHLGNLBO*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_DKNBOKCCFPK_OFFSET))(this, LDPBOMMBNBN);
		}

		::System::Void CGFHCFBDOOB(::System::Single BEPNAAALPPE, ::System::Single MDLAIGFCOIM, ::System::Single PBCAAADNEPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_CGFHCFBDOOB_OFFSET))(this, BEPNAAALPPE, MDLAIGFCOIM, PBCAAADNEPK);
		}

		::System::Void BBMFJFHKLCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOTESTMUSICMETER_BBMFJFHKLCF_OFFSET))(this);
		}
	};
}
