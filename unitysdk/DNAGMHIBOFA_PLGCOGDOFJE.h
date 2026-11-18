#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DNAGMHIBOFA;
namespace MoleMole { class UICreateRoleNameDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DNAGMHIBOFA_PLGCOGDOFJE_CLCCGLDFHLD_OFFSET UNITYSDK_OFFSET(0x13E5A410)
#define DNAGMHIBOFA_PLGCOGDOFJE_DPLIKLIBCLN_OFFSET UNITYSDK_OFFSET(0x13E5A8D0)
#define DNAGMHIBOFA_PLGCOGDOFJE_GLLLGEEOHIA_OFFSET UNITYSDK_OFFSET(0x13E5A7C0)
#define DNAGMHIBOFA_PLGCOGDOFJE_MCOGHILNMCE_OFFSET UNITYSDK_OFFSET(0x13E5AB50)
#define DNAGMHIBOFA_PLGCOGDOFJE_OACFJLIJFLO_OFFSET UNITYSDK_OFFSET(0x13E5AA40)
#define DNAGMHIBOFA_PLGCOGDOFJE__CTOR_OFFSET UNITYSDK_OFFSET(0x13E5A400)

inline static constexpr unsigned int DNAGMHIBOFA_PLGCOGDOFJE_TypeDefinitionIndex = 56363;

class DNAGMHIBOFA_PLGCOGDOFJE : public ::System::Object
{
public:
	::MoleMole::UICreateRoleNameDialogPopWindowController* CAGFEMEINKF; // 0x10
	::System::Action* MNMDKBDFAFE; // 0x18
	::System::Action_1<::System::Boolean>* OLDCEOGKOAE; // 0x20
	::DNAGMHIBOFA* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_PLGCOGDOFJE__CTOR_OFFSET))(this);
	}

	::System::Void CLCCGLDFHLD(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_PLGCOGDOFJE_CLCCGLDFHLD_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void GLLLGEEOHIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_PLGCOGDOFJE_GLLLGEEOHIA_OFFSET))(this);
	}

	::System::Void DPLIKLIBCLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_PLGCOGDOFJE_DPLIKLIBCLN_OFFSET))(this);
	}

	::System::Void OACFJLIJFLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_PLGCOGDOFJE_OACFJLIJFLO_OFFSET))(this);
	}

	::System::Void MCOGHILNMCE(::System::Boolean CDNMJGCLGCI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_PLGCOGDOFJE_MCOGHILNMCE_OFFSET))(this, CDNMJGCLGCI);
	}
};
