#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPGMICPIIKN.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

#define GODLLLCHCHF_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15B2FDA0)
#define GODLLLCHCHF_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x15B301F0)
#define GODLLLCHCHF_JMDEKPONKMF_1_OFFSET UNITYSDK_OFFSET(0x15B30380)
#define GODLLLCHCHF_JMDEKPONKMF_2_OFFSET UNITYSDK_OFFSET(0x15B30440)
#define GODLLLCHCHF_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x15B30370)
#define GODLLLCHCHF_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x15B30190)
#define GODLLLCHCHF_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x15B30430)
#define GODLLLCHCHF_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x15B2FF10)
#define GODLLLCHCHF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B30260)

inline static constexpr unsigned int GODLLLCHCHF_TypeDefinitionIndex = 61080;

class GODLLLCHCHF : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::CPGMICPIIKN KENOKFPNJGG; // 0x10
	::Foundation::NativeVariable_1<::System::Int32> MALLIFNIPCL; // 0x20
	::System::Byte _padding0[0x8];
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x30
	::Foundation::NativeVariable_1<::System::Double> BJMBOABGKOK; // 0xC0
	::System::Byte _padding1[0x8];
	::Foundation::NativeVariable_1<::System::Double> KJHHMLJPDJO; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODLLLCHCHF__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::ScriptPlayable_1<::GODLLLCHCHF*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::GODLLLCHCHF*>(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + GODLLLCHCHF_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + GODLLLCHCHF_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GODLLLCHCHF_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + GODLLLCHCHF_IJMOICJDPPG_OFFSET))(this);
	}

	::System::Void JMDEKPONKMF(::CPGMICPIIKN LNIOJLHBIHO)
	{
		return ((::System::Void(*)(::PVOID, ::CPGMICPIIKN))((::PBYTE)hIl2Cpp + GODLLLCHCHF_JMDEKPONKMF_OFFSET))(this, LNIOJLHBIHO);
	}

	::System::Void JMDEKPONKMF_1(::PMBCHGNJMKF AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF))((::PBYTE)hIl2Cpp + GODLLLCHCHF_JMDEKPONKMF_1_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + GODLLLCHCHF_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JMDEKPONKMF_2(::Foundation::NativeVariable_1<::System::Double> BEKLCLFIDKF, ::Foundation::NativeVariable_1<::System::Double> PMNLNNGEIFM, ::Foundation::NativeVariable_1<::System::Int32> IIFMJFJOOCK)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariable_1<::System::Double>, ::Foundation::NativeVariable_1<::System::Double>, ::Foundation::NativeVariable_1<::System::Int32>))((::PBYTE)hIl2Cpp + GODLLLCHCHF_JMDEKPONKMF_2_OFFSET))(this, BEKLCLFIDKF, PMNLNNGEIFM, IIFMJFJOOCK);
	}
};
