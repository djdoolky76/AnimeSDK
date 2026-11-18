#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHLDOALNCNF;
namespace System { class Action; }

#define CHLDOALNCNF_MDILLPGFFPK_DEKACAPGGFG_OFFSET UNITYSDK_OFFSET(0x159DA2A0)
#define CHLDOALNCNF_MDILLPGFFPK_IBFGKAELBNP_OFFSET UNITYSDK_OFFSET(0x159DA280)
#define CHLDOALNCNF_MDILLPGFFPK__CTOR_OFFSET UNITYSDK_OFFSET(0x159DA270)

inline static constexpr unsigned int CHLDOALNCNF_MDILLPGFFPK_TypeDefinitionIndex = 52549;

class CHLDOALNCNF_MDILLPGFFPK : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::CHLDOALNCNF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLDOALNCNF_MDILLPGFFPK__CTOR_OFFSET))(this);
	}

	::System::Void IBFGKAELBNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLDOALNCNF_MDILLPGFFPK_IBFGKAELBNP_OFFSET))(this);
	}

	::System::Void DEKACAPGGFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLDOALNCNF_MDILLPGFFPK_DEKACAPGGFG_OFFSET))(this);
	}
};
