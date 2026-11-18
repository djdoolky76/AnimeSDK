#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define EMNAJKLAFBG_BBCLMNAOHFJ_OFFSET UNITYSDK_OFFSET(0x1724B710)
#define EMNAJKLAFBG_FHFPEFMLLFH_OFFSET UNITYSDK_OFFSET(0x1724B160)
#define EMNAJKLAFBG_IBCKKJHLJBG_OFFSET UNITYSDK_OFFSET(0x1724B280)
#define EMNAJKLAFBG_KODGMKLFAGB_OFFSET UNITYSDK_OFFSET(0x1724B540)
#define EMNAJKLAFBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1724B150)

inline static constexpr unsigned int EMNAJKLAFBG_TypeDefinitionIndex = 64323;

class EMNAJKLAFBG : public ::System::Object
{
public:
	::System::Action* DCANDBAINGJ; // 0x10
	::System::Action_1<::ENGKPGFGGLM*>* PLGLKDMLBLE; // 0x18
	::MoleMole::UIWindowController* FEFFFPGCIIO; // 0x20
	::System::Boolean CIFLENFEEGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNAJKLAFBG__CTOR_OFFSET))(this);
	}

	::System::Void FHFPEFMLLFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNAJKLAFBG_FHFPEFMLLFH_OFFSET))(this);
	}

	::System::Void IBCKKJHLJBG(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EMNAJKLAFBG_IBCKKJHLJBG_OFFSET))(this, FFNKDGGHBPP);
	}

	static ::System::Boolean KODGMKLFAGB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMNAJKLAFBG_KODGMKLFAGB_OFFSET))();
	}

	::System::Void BBCLMNAOHFJ(::MoleMole::UIWindowController* AMNIHACKELI, ::System::Action* CALJKDFFLMH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Action*))((::PBYTE)hIl2Cpp + EMNAJKLAFBG_BBCLMNAOHFJ_OFFSET))(this, AMNIHACKELI, CALJKDFFLMH);
	}
};
