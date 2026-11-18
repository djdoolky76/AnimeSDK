#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDigibooPlayerChangeRowWidgetController_Context; }
namespace System { template <typename T> class Comparison_1; }

#define IJKOHIODLDG___C_CPKKBIHIDLN_OFFSET UNITYSDK_OFFSET(0x1987D600)
#define IJKOHIODLDG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1987D5B0)
#define IJKOHIODLDG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1987D5F0)

inline static constexpr unsigned int IJKOHIODLDG___c_TypeDefinitionIndex = 58384;

class IJKOHIODLDG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IJKOHIODLDG___c_TypeDefinitionIndex)->GetStaticField(0x40E90);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__10_2()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(IJKOHIODLDG___c_TypeDefinitionIndex)->GetStaticField(0x40E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKOHIODLDG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKOHIODLDG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CPKKBIHIDLN(::MoleMole::UIDigibooPlayerChangeRowWidgetController_Context* EJCBEJMGFAJ, ::MoleMole::UIDigibooPlayerChangeRowWidgetController_Context* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIDigibooPlayerChangeRowWidgetController_Context*, ::MoleMole::UIDigibooPlayerChangeRowWidgetController_Context*))((::PBYTE)hIl2Cpp + IJKOHIODLDG___C_CPKKBIHIDLN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
