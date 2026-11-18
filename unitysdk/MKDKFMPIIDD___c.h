#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaMapTipsChildWindowController; }
namespace System { template <typename T> class Comparison_1; }

#define MKDKFMPIIDD___C_ELEIOPAPPDE_OFFSET UNITYSDK_OFFSET(0x13193C00)
#define MKDKFMPIIDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13193BB0)
#define MKDKFMPIIDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13193BF0)

inline static constexpr unsigned int MKDKFMPIIDD___c_TypeDefinitionIndex = 60061;

class MKDKFMPIIDD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MKDKFMPIIDD___c_TypeDefinitionIndex)->GetStaticField(0x4A400);
	}
	static ::System::Comparison_1<::MoleMole::UIYorozuyaMapTipsChildWindowController*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::MoleMole::UIYorozuyaMapTipsChildWindowController*>**)Il2CppClass::FromTypeDefinitionIndex(MKDKFMPIIDD___c_TypeDefinitionIndex)->GetStaticField(0x4A408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDKFMPIIDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDKFMPIIDD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 ELEIOPAPPDE(::MoleMole::UIYorozuyaMapTipsChildWindowController* EJCBEJMGFAJ, ::MoleMole::UIYorozuyaMapTipsChildWindowController* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIYorozuyaMapTipsChildWindowController*, ::MoleMole::UIYorozuyaMapTipsChildWindowController*))((::PBYTE)hIl2Cpp + MKDKFMPIIDD___C_ELEIOPAPPDE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
