#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PopText;
namespace System { class Action; }
namespace System { class String; }

#define PJDLOIBFGNN_AONONIPDJHM_OFFSET UNITYSDK_OFFSET(0x11B748C0)
#define PJDLOIBFGNN_HDCIIABJEKD_1_OFFSET UNITYSDK_OFFSET(0x11B74AA0)
#define PJDLOIBFGNN_HDCIIABJEKD_OFFSET UNITYSDK_OFFSET(0x11B74A20)
#define PJDLOIBFGNN_IJMMGNEPGOA_OFFSET UNITYSDK_OFFSET(0x11B74870)
#define PJDLOIBFGNN_JMDKOOFCABL_OFFSET UNITYSDK_OFFSET(0x11B74D00)
#define PJDLOIBFGNN_KNLHJIIGHOD_OFFSET UNITYSDK_OFFSET(0x11B749C0)
#define PJDLOIBFGNN_MONKLEIINEE_OFFSET UNITYSDK_OFFSET(0x11B74D80)
#define PJDLOIBFGNN__CTOR_OFFSET UNITYSDK_OFFSET(0x11B74860)

inline static constexpr unsigned int PJDLOIBFGNN_TypeDefinitionIndex = 79782;

class PJDLOIBFGNN : public ::System::Object
{
public:
	::System::String* KNDONPHAAHM; // 0x10
	::System::Action* GDPOCGECCHG; // 0x18
	::System::String* BMIAMOFNOMK; // 0x20
	::PopText* IGAJMPCDAJI; // 0x28
	::System::Boolean CBJIAECJJOH; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single FNJALNOIGDN; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDLOIBFGNN__CTOR_OFFSET))(this);
	}

	::System::Void IJMMGNEPGOA(::System::Action* GDPOCGECCHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PJDLOIBFGNN_IJMMGNEPGOA_OFFSET))(this, GDPOCGECCHG);
	}

	::System::Void AONONIPDJHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDLOIBFGNN_AONONIPDJHM_OFFSET))(this);
	}

	::System::Void HDCIIABJEKD(::System::String* BMIAMOFNOMK, ::System::String* KNDONPHAAHM, ::System::Single FNJALNOIGDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + PJDLOIBFGNN_HDCIIABJEKD_OFFSET))(this, BMIAMOFNOMK, KNDONPHAAHM, FNJALNOIGDN);
	}

	::System::Void KNLHJIIGHOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDLOIBFGNN_KNLHJIIGHOD_OFFSET))(this);
	}

	::System::Void JMDKOOFCABL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDLOIBFGNN_JMDKOOFCABL_OFFSET))(this);
	}

	::System::Void HDCIIABJEKD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDLOIBFGNN_HDCIIABJEKD_1_OFFSET))(this);
	}

	::System::Void MONKLEIINEE(::PopText* IGAJMPCDAJI)
	{
		return ((::System::Void(*)(::PVOID, ::PopText*))((::PBYTE)hIl2Cpp + PJDLOIBFGNN_MONKLEIINEE_OFFSET))(this, IGAJMPCDAJI);
	}
};
