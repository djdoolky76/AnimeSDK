#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MKLOIFMMLMC___C_KICPNLKJPMM_OFFSET UNITYSDK_OFFSET(0x14DEF820)
#define MKLOIFMMLMC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DEF7D0)
#define MKLOIFMMLMC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEF810)

inline static constexpr unsigned int MKLOIFMMLMC___c_TypeDefinitionIndex = 57830;

class MKLOIFMMLMC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MKLOIFMMLMC___c_TypeDefinitionIndex)->GetStaticField(0x46AC0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MKLOIFMMLMC___c_TypeDefinitionIndex)->GetStaticField(0x46AC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKLOIFMMLMC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOIFMMLMC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KICPNLKJPMM(::System::Int32 DPGFPHIMDEL, ::System::Int32 DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MKLOIFMMLMC___C_KICPNLKJPMM_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
