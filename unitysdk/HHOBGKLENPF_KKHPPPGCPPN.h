#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HHOBGKLENPF_KKHPPPGCPPN_JDNKFJHIKKF_OFFSET UNITYSDK_OFFSET(0x16CF11C0)
#define HHOBGKLENPF_KKHPPPGCPPN__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF11B0)

inline static constexpr unsigned int HHOBGKLENPF_KKHPPPGCPPN_TypeDefinitionIndex = 54312;

class HHOBGKLENPF_KKHPPPGCPPN : public ::System::Object
{
public:
	::System::Action* KKPCHLMMKDL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_KKHPPPGCPPN__CTOR_OFFSET))(this);
	}

	::System::Void JDNKFJHIKKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_KKHPPPGCPPN_JDNKFJHIKKF_OFFSET))(this);
	}
};
