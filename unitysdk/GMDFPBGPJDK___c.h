#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define GMDFPBGPJDK___C_KCHGFLFLBBJ_OFFSET UNITYSDK_OFFSET(0x1F3A9FB0)
#define GMDFPBGPJDK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3A9F60)
#define GMDFPBGPJDK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A9FA0)

inline static constexpr unsigned int GMDFPBGPJDK___c_TypeDefinitionIndex = 8560;

class GMDFPBGPJDK___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::String*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GMDFPBGPJDK___c_TypeDefinitionIndex)->GetStaticField(0x7130);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GMDFPBGPJDK___c_TypeDefinitionIndex)->GetStaticField(0x7138);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMDFPBGPJDK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDFPBGPJDK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KCHGFLFLBBJ(::System::String* DPGFPHIMDEL, ::System::String* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GMDFPBGPJDK___C_KCHGFLFLBBJ_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
