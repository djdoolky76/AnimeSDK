#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAAJIBDOIDA.h"
#include "unitysdk/OCDLFPJELKN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJMDMPEAEEL_BIGCLGGDCPB_1_OFFSET UNITYSDK_OFFSET(0x16F419D0)
#define HJMDMPEAEEL_BIGCLGGDCPB_OFFSET UNITYSDK_OFFSET(0x16F41800)
#define HJMDMPEAEEL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16F41AD0)
#define HJMDMPEAEEL_DOLGNIIJCEF_OFFSET UNITYSDK_OFFSET(0x16F41880)
#define HJMDMPEAEEL_EEKEOPCGDNJ_OFFSET UNITYSDK_OFFSET(0x16F41A70)
#define HJMDMPEAEEL_ICELNPNKMMC_OFFSET UNITYSDK_OFFSET(0x16F41AC0)
#define HJMDMPEAEEL_KAKLADBMEBH_OFFSET UNITYSDK_OFFSET(0x16F41890)
#define HJMDMPEAEEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F417A0)

inline static constexpr unsigned int HJMDMPEAEEL_TypeDefinitionIndex = 79519;

class HJMDMPEAEEL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::EAAJIBDOIDA>* FNGPCKPJBGG; // 0x10
	::OCDLFPJELKN OBNIAHNMHPF; // 0x18
	::System::Int32 _DCNOJOAIKJM_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMDMPEAEEL__CTOR_OFFSET))(this);
	}

	::System::Void BIGCLGGDCPB(::System::String* MCOHLHMKLIP, ::System::String* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HJMDMPEAEEL_BIGCLGGDCPB_OFFSET))(this, MCOHLHMKLIP, HNOPAJLDCFB);
	}

	::System::Int32 DOLGNIIJCEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMDMPEAEEL_DOLGNIIJCEF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::EAAJIBDOIDA>* KAKLADBMEBH()
	{
		return ((::System::Collections::Generic::List_1<::EAAJIBDOIDA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMDMPEAEEL_KAKLADBMEBH_OFFSET))(this);
	}

	::System::Void BIGCLGGDCPB_1(::System::String* MCOHLHMKLIP, ::System::Object* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + HJMDMPEAEEL_BIGCLGGDCPB_1_OFFSET))(this, MCOHLHMKLIP, HNOPAJLDCFB);
	}

	::System::Void EEKEOPCGDNJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJMDMPEAEEL_EEKEOPCGDNJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void ICELNPNKMMC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJMDMPEAEEL_ICELNPNKMMC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::OCDLFPJELKN OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::OCDLFPJELKN))((::PBYTE)hIl2Cpp + HJMDMPEAEEL_CNHBDOMKKDE_OFFSET))(this, OBNIAHNMHPF);
	}
};
