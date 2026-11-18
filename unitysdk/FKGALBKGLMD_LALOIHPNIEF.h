#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMNHFJOBPKL;
class FKGALBKGLMD;
namespace System { class Action; }

#define FKGALBKGLMD_LALOIHPNIEF_GGPMBOIIFDD_OFFSET UNITYSDK_OFFSET(0x11D808D0)
#define FKGALBKGLMD_LALOIHPNIEF_PFMNBMCAFJG_OFFSET UNITYSDK_OFFSET(0x11D808E0)
#define FKGALBKGLMD_LALOIHPNIEF__CTOR_OFFSET UNITYSDK_OFFSET(0x11D808C0)

inline static constexpr unsigned int FKGALBKGLMD_LALOIHPNIEF_TypeDefinitionIndex = 47427;

class FKGALBKGLMD_LALOIHPNIEF : public ::System::Object
{
public:
	::FKGALBKGLMD* KLHPEBKNIFB; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18
	::System::Action* EDNJGMKPFHG; // 0x20
	::AMNHFJOBPKL* JGEHEMEIIBL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGALBKGLMD_LALOIHPNIEF__CTOR_OFFSET))(this);
	}

	::System::Void GGPMBOIIFDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGALBKGLMD_LALOIHPNIEF_GGPMBOIIFDD_OFFSET))(this);
	}

	::System::Void PFMNBMCAFJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGALBKGLMD_LALOIHPNIEF_PFMNBMCAFJG_OFFSET))(this);
	}
};
