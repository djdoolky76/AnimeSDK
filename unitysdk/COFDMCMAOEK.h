#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/LPGMNLJENKC.h"
#include "unitysdk/MoleMole/Photo/BlendSpaceBlendParameter.h"
#include "unitysdk/OFCIPACMFFN.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

#define COFDMCMAOEK_AIKMHPIMBFA_OFFSET UNITYSDK_OFFSET(0x16884E40)
#define COFDMCMAOEK_BHKMDNDHBJI_OFFSET UNITYSDK_OFFSET(0x16884E80)
#define COFDMCMAOEK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x168838F0)
#define COFDMCMAOEK_CPCLJEFGOMG_OFFSET UNITYSDK_OFFSET(0x16884D70)
#define COFDMCMAOEK_EGPCEMNIDBG_OFFSET UNITYSDK_OFFSET(0x16884E50)
#define COFDMCMAOEK_HMFIKGCHGKH_OFFSET UNITYSDK_OFFSET(0x168849D0)
#define COFDMCMAOEK_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x16883B10)
#define COFDMCMAOEK_LDKDIGLGNHN_OFFSET UNITYSDK_OFFSET(0x168855C0)
#define COFDMCMAOEK_MOECPBIMGEI_OFFSET UNITYSDK_OFFSET(0x16884D50)
#define COFDMCMAOEK_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x16883A60)
#define COFDMCMAOEK_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x16884D60)
#define COFDMCMAOEK_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x16883B80)
#define COFDMCMAOEK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16883840)
#define COFDMCMAOEK__CTOR_OFFSET UNITYSDK_OFFSET(0x16883610)

inline static constexpr unsigned int COFDMCMAOEK_TypeDefinitionIndex = 47130;

class COFDMCMAOEK : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Foundation::ReadOnlyNativeVariable_1<::System::Single> BHDHBCKMDMH; // 0x10
	::System::Byte _padding0[0x8];
	::Foundation::NativeVariableArray_1<::System::Single> IDBDPHGDANH; // 0x20
	::System::Byte _padding1[0x8];
	::UnityEngine::Animations::AnimationMixerPlayable AMLAFAJNHPH; // 0x30
	::System::Single HMMGKADBNFO; // 0x40
	::MoleMole::Photo::BlendSpaceBlendParameter PEHKAKIOMHI; // 0x44
	::Foundation::ReadOnlyNativeVariableArray_1<::OFCIPACMFFN> GHFGMOONEAB; // 0x50
	::System::Byte _padding2[0x8];
	::Foundation::ReadOnlyNativeVariableArray_1<::LPGMNLJENKC> GCADAFIJMAF; // 0x60
	::System::Byte _padding3[0x8];
	::System::Boolean JNBGHGHHHCM; // 0x70
	::System::Byte _padding4[0x3];
	::System::Single NDAIPKGNAOE; // 0x74
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFDMCMAOEK__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::UnityEngine::Animations::AnimationMixerPlayable ELKINNHLMJK, ::Foundation::ReadOnlyNativeVariable_1<::System::Single> GEJHLMAMINA, ::Foundation::ReadOnlyNativeVariableArray_1<::OFCIPACMFFN> ACMIOECHNAG, ::Foundation::ReadOnlyNativeVariableArray_1<::LPGMNLJENKC> EMKCJPPODLF, ::Foundation::NativeVariableArray_1<::System::Single> BONDOKEFBJO, ::MoleMole::Photo::BlendSpaceBlendParameter DFPHBOFEKPE, ::PMBCHGNJMKF AAOCANGHBDG, ::System::Single AHAFNGEDPLI, ::System::Boolean GJGMBLEGGJH, ::System::Single FCKGMNEGIPO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationMixerPlayable, ::Foundation::ReadOnlyNativeVariable_1<::System::Single>, ::Foundation::ReadOnlyNativeVariableArray_1<::OFCIPACMFFN>, ::Foundation::ReadOnlyNativeVariableArray_1<::LPGMNLJENKC>, ::Foundation::NativeVariableArray_1<::System::Single>, ::MoleMole::Photo::BlendSpaceBlendParameter, ::PMBCHGNJMKF, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + COFDMCMAOEK__CTOR_1_OFFSET))(this, ELKINNHLMJK, GEJHLMAMINA, ACMIOECHNAG, EMKCJPPODLF, BONDOKEFBJO, DFPHBOFEKPE, AAOCANGHBDG, AHAFNGEDPLI, GJGMBLEGGJH, FCKGMNEGIPO);
	}

	::UnityEngine::Playables::ScriptPlayable_1<::COFDMCMAOEK*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::COFDMCMAOEK*>(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + COFDMCMAOEK_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFDMCMAOEK_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + COFDMCMAOEK_IJMOICJDPPG_OFFSET))(this);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + COFDMCMAOEK_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void HMFIKGCHGKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFDMCMAOEK_HMFIKGCHGKH_OFFSET))(this);
	}

	::System::Single MOECPBIMGEI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFDMCMAOEK_MOECPBIMGEI_OFFSET))(this);
	}

	::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + COFDMCMAOEK_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::Foundation::NativeVariable_1<::System::Single> CPCLJEFGOMG()
	{
		return ((::Foundation::NativeVariable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + COFDMCMAOEK_CPCLJEFGOMG_OFFSET))(this);
	}

	::System::Void AIKMHPIMBFA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFDMCMAOEK_AIKMHPIMBFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single EGPCEMNIDBG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFDMCMAOEK_EGPCEMNIDBG_OFFSET))(this);
	}

	::System::Double BHKMDNDHBJI(::System::Single KCKELGIEMLH)
	{
		return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFDMCMAOEK_BHKMDNDHBJI_OFFSET))(this, KCKELGIEMLH);
	}

	::System::Void LDKDIGLGNHN(::Foundation::NativeVariable_1<::System::Single> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariable_1<::System::Single>))((::PBYTE)hIl2Cpp + COFDMCMAOEK_LDKDIGLGNHN_OFFSET))(this, EGEGIMGMJHN);
	}
};
