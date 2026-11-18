#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopTeamNameRowWidgetController_Context; }
namespace System { template <typename T> class Comparison_1; }

#define IFKLHPOJNIL___C_HAIAKOHDAAK_OFFSET UNITYSDK_OFFSET(0x141C15A0)
#define IFKLHPOJNIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141C1550)
#define IFKLHPOJNIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141C1590)

inline static constexpr unsigned int IFKLHPOJNIL___c_TypeDefinitionIndex = 78294;

class IFKLHPOJNIL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IFKLHPOJNIL___c_TypeDefinitionIndex)->GetStaticField(0x37CE0);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__9_35()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(IFKLHPOJNIL___c_TypeDefinitionIndex)->GetStaticField(0x37CE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFKLHPOJNIL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKLHPOJNIL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HAIAKOHDAAK(::MoleMole::UICoopTeamNameRowWidgetController_Context* EJCBEJMGFAJ, ::MoleMole::UICoopTeamNameRowWidgetController_Context* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UICoopTeamNameRowWidgetController_Context*, ::MoleMole::UICoopTeamNameRowWidgetController_Context*))((::PBYTE)hIl2Cpp + IFKLHPOJNIL___C_HAIAKOHDAAK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
