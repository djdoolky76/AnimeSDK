#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Comparison_1; }

#define NJBMMEKAHJH___C_JKEGDDGDDBM_OFFSET UNITYSDK_OFFSET(0x11F82010)
#define NJBMMEKAHJH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F81FC0)
#define NJBMMEKAHJH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F82000)

inline static constexpr unsigned int NJBMMEKAHJH___c_TypeDefinitionIndex = 47150;

class NJBMMEKAHJH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NJBMMEKAHJH___c_TypeDefinitionIndex)->GetStaticField(0x4DB90);
	}
	static ::System::Comparison_1<::MoleMole::UIWindowController*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::MoleMole::UIWindowController*>**)Il2CppClass::FromTypeDefinitionIndex(NJBMMEKAHJH___c_TypeDefinitionIndex)->GetStaticField(0x4DB98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJBMMEKAHJH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBMMEKAHJH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JKEGDDGDDBM(::MoleMole::UIWindowController* EJCBEJMGFAJ, ::MoleMole::UIWindowController* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NJBMMEKAHJH___C_JKEGDDGDDBM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
