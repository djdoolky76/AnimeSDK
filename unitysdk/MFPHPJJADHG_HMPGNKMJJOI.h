#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFALNBMNFCA.h"

class GMCPAFDJNLH;
class HCBFNKIPOPJ;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MFPHPJJADHG_HMPGNKMJJOI_ICPOKJDOBMO_OFFSET UNITYSDK_OFFSET(0x13D2CE00)
#define MFPHPJJADHG_HMPGNKMJJOI_PIDNFALHEGE_OFFSET UNITYSDK_OFFSET(0x13D2CFA0)
#define MFPHPJJADHG_HMPGNKMJJOI__CTOR_OFFSET UNITYSDK_OFFSET(0x13D2CDF0)

inline static constexpr unsigned int MFPHPJJADHG_HMPGNKMJJOI_TypeDefinitionIndex = 58845;

class MFPHPJJADHG_HMPGNKMJJOI : public ::System::Object
{
public:
	::HCBFNKIPOPJ* OIPJHJHGONH; // 0x10
	::System::Action_1<::System::String*>* DMLPMECHBEP; // 0x18
	::MoleMole::UIControllerContextBase* PJCLCLCNDCG; // 0x20
	::GMCPAFDJNLH* BOGHDABFGLF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPHPJJADHG_HMPGNKMJJOI__CTOR_OFFSET))(this);
	}

	::System::Void ICPOKJDOBMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPHPJJADHG_HMPGNKMJJOI_ICPOKJDOBMO_OFFSET))(this);
	}

	::System::Void PIDNFALHEGE(::HFALNBMNFCA PDIBELGHENG)
	{
		return ((::System::Void(*)(::PVOID, ::HFALNBMNFCA))((::PBYTE)hIl2Cpp + MFPHPJJADHG_HMPGNKMJJOI_PIDNFALHEGE_OFFSET))(this, PDIBELGHENG);
	}
};
