#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ICIJJJLDLBM;
namespace System { class Action; }

#define ICIJJJLDLBM_DMMGMINHMFK_DOPJDCJLEKE_OFFSET UNITYSDK_OFFSET(0x12EA4770)
#define ICIJJJLDLBM_DMMGMINHMFK_JIDNIODMPEK_OFFSET UNITYSDK_OFFSET(0x12EA4800)
#define ICIJJJLDLBM_DMMGMINHMFK_NFAIAHIEMHO_OFFSET UNITYSDK_OFFSET(0x12EA4720)
#define ICIJJJLDLBM_DMMGMINHMFK__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA4710)

inline static constexpr unsigned int ICIJJJLDLBM_DMMGMINHMFK_TypeDefinitionIndex = 64736;

class ICIJJJLDLBM_DMMGMINHMFK : public ::System::Object
{
public:
	::ICIJJJLDLBM* KLHPEBKNIFB; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18
	::System::Action* KLHOIOCCHMI; // 0x20
	::System::Action* LOJFLJJAKFJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIJJJLDLBM_DMMGMINHMFK__CTOR_OFFSET))(this);
	}

	::System::Void NFAIAHIEMHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIJJJLDLBM_DMMGMINHMFK_NFAIAHIEMHO_OFFSET))(this);
	}

	::System::Void DOPJDCJLEKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIJJJLDLBM_DMMGMINHMFK_DOPJDCJLEKE_OFFSET))(this);
	}

	::System::Void JIDNIODMPEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIJJJLDLBM_DMMGMINHMFK_JIDNIODMPEK_OFFSET))(this);
	}
};
