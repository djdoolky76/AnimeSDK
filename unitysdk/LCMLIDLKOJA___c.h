#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Comparison_1; }

#define LCMLIDLKOJA___C_HHJLHFJBAAG_OFFSET UNITYSDK_OFFSET(0x17942550)
#define LCMLIDLKOJA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17942500)
#define LCMLIDLKOJA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17942540)

inline static constexpr unsigned int LCMLIDLKOJA___c_TypeDefinitionIndex = 63755;

class LCMLIDLKOJA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LCMLIDLKOJA___c_TypeDefinitionIndex)->GetStaticField(0x4BE30);
	}
	static ::System::Comparison_1<::MoleMole::UIWindowController*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::MoleMole::UIWindowController*>**)Il2CppClass::FromTypeDefinitionIndex(LCMLIDLKOJA___c_TypeDefinitionIndex)->GetStaticField(0x4BE38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCMLIDLKOJA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMLIDLKOJA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HHJLHFJBAAG(::MoleMole::UIWindowController* EJCBEJMGFAJ, ::MoleMole::UIWindowController* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + LCMLIDLKOJA___C_HHJLHFJBAAG_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
