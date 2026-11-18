#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Comparison_1; }

#define IDBGIKCGHLI___C_KMIFLNMONJE_OFFSET UNITYSDK_OFFSET(0x1A3983D0)
#define IDBGIKCGHLI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A398380)
#define IDBGIKCGHLI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3983C0)

inline static constexpr unsigned int IDBGIKCGHLI___c_TypeDefinitionIndex = 71359;

class IDBGIKCGHLI___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::UIWindowController*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::MoleMole::UIWindowController*>**)Il2CppClass::FromTypeDefinitionIndex(IDBGIKCGHLI___c_TypeDefinitionIndex)->GetStaticField(0x3E000);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IDBGIKCGHLI___c_TypeDefinitionIndex)->GetStaticField(0x3E008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDBGIKCGHLI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBGIKCGHLI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KMIFLNMONJE(::MoleMole::UIWindowController* EJCBEJMGFAJ, ::MoleMole::UIWindowController* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IDBGIKCGHLI___C_KMIFLNMONJE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
