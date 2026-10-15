#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFACHPPOANI.h"
namespace RPG::Client { class UIController; }

#define GJFPLCFBHPF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A67110)
#define GJFPLCFBHPF_DBIABJEIINF_OFFSET UNITYSDK_OFFSET(0x15A67360)
#define GJFPLCFBHPF_HKDNHLPLDDG_OFFSET UNITYSDK_OFFSET(0x15A671F0)
#define GJFPLCFBHPF_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x15A67120)
#define GJFPLCFBHPF_ONTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x15A67310)

	class GJFPLCFBHPF : public ::HFACHPPOANI
	{
	public:
		::RPG::Client::UIController* GNPJEGLBBJC; // 0x10
		::System::UInt32 JNADKPFJLPM; // 0x18
		::System::Void _ctor(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + GJFPLCFBHPF_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnExitBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFPLCFBHPF_ONEXITBEGIN_OFFSET))(this);
		}

		::System::Void OnTransitionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFPLCFBHPF_ONTRANSITIONEND_OFFSET))(this);
		}

		::System::Void HKDNHLPLDDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFPLCFBHPF_HKDNHLPLDDG_OFFSET))(this);
		}

		::System::Void DBIABJEIINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFPLCFBHPF_DBIABJEIINF_OFFSET))(this);
		}

	};
