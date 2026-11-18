#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPPMPHICDEA_KJPKBOIAOBM.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UIControllerContextBase; }

#define GPPMPHICDEA_GJOFIOMHMKF_JPJAGDEKMIJ_OFFSET UNITYSDK_OFFSET(0x13E03F20)
#define GPPMPHICDEA_GJOFIOMHMKF_JPOAPMGDGDH_OFFSET UNITYSDK_OFFSET(0x13E03DC0)
#define GPPMPHICDEA_GJOFIOMHMKF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E03DB0)

inline static constexpr unsigned int GPPMPHICDEA_GJOFIOMHMKF_TypeDefinitionIndex = 42684;

class GPPMPHICDEA_GJOFIOMHMKF : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* PJCLCLCNDCG; // 0x10
	::GPPMPHICDEA_KJPKBOIAOBM FFNENJMLKAM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_GJOFIOMHMKF__CTOR_OFFSET))(this);
	}

	::System::Void JPOAPMGDGDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_GJOFIOMHMKF_JPOAPMGDGDH_OFFSET))(this);
	}

	::System::Void JPJAGDEKMIJ(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_GJOFIOMHMKF_JPJAGDEKMIJ_OFFSET))(this, NAPFALLANDL);
	}
};
