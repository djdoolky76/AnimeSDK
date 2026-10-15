#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFACHPPOANI.h"
namespace RPG::Client { class UIController; }

#define JPKEEKBLGHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C67D0)
#define JPKEEKBLGHE_DBIABJEIINF_OFFSET UNITYSDK_OFFSET(0xB2C6B80)
#define JPKEEKBLGHE_DNDDLHHOIEO_OFFSET UNITYSDK_OFFSET(0xB2C67E0)
#define JPKEEKBLGHE_HKDNHLPLDDG_OFFSET UNITYSDK_OFFSET(0xB2C6860)
#define JPKEEKBLGHE_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0xB2C6980)

inline static constexpr unsigned int JPKEEKBLGHE_TypeDefinitionIndex = 73124;

	class JPKEEKBLGHE : public ::HFACHPPOANI
	{
	public:
		::RPG::Client::UIController* ABDKNDNCAEA; // 0x10
		::System::UInt32 JNADKPFJLPM; // 0x18
		::System::Void _ctor(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + JPKEEKBLGHE_CTOR_OFFSET))(this, a1);
		}

		::System::Void DNDDLHHOIEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKEEKBLGHE_DNDDLHHOIEO_OFFSET))(this);
		}

		::System::Void OnEnterBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKEEKBLGHE_ONENTERBEGIN_OFFSET))(this);
		}

		::System::Void HKDNHLPLDDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKEEKBLGHE_HKDNHLPLDDG_OFFSET))(this);
		}

		::System::Void DBIABJEIINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKEEKBLGHE_DBIABJEIINF_OFFSET))(this);
		}

	};
