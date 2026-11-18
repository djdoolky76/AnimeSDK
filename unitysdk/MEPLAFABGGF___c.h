#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MEPLAFABGGF___C_PHFEPHAKFNO_OFFSET UNITYSDK_OFFSET(0x1852F100)
#define MEPLAFABGGF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852F0B0)
#define MEPLAFABGGF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1852F0F0)

inline static constexpr unsigned int MEPLAFABGGF___c_TypeDefinitionIndex = 52022;

class MEPLAFABGGF___c : public ::System::Object
{
public:
	static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__6_1()
	{
		return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(MEPLAFABGGF___c_TypeDefinitionIndex)->GetStaticField(0x4BF80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MEPLAFABGGF___c_TypeDefinitionIndex)->GetStaticField(0x4BF88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEPLAFABGGF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPLAFABGGF___C__CTOR_OFFSET))(this);
	}

	::System::Void PHFEPHAKFNO(::MoleMole::UIGeneralHeadRowWidgetController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MEPLAFABGGF___C_PHFEPHAKFNO_OFFSET))(this, JOLDOMEIKEF);
	}
};
