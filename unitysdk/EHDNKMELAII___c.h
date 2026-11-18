#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define EHDNKMELAII___C_GOOIDADIJMK_OFFSET UNITYSDK_OFFSET(0x148DF8F0)
#define EHDNKMELAII___C_LLALAPOLIMF_OFFSET UNITYSDK_OFFSET(0x148DF9B0)
#define EHDNKMELAII___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148DF8A0)
#define EHDNKMELAII___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148DF8E0)

inline static constexpr unsigned int EHDNKMELAII___c_TypeDefinitionIndex = 71389;

class EHDNKMELAII___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EHDNKMELAII___c_TypeDefinitionIndex)->GetStaticField(0x3AB30);
	}
	static ::System::Action** StaticGet___9__29_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EHDNKMELAII___c_TypeDefinitionIndex)->GetStaticField(0x3AB38);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EHDNKMELAII___c_TypeDefinitionIndex)->GetStaticField(0x3AB40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHDNKMELAII___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDNKMELAII___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GOOIDADIJMK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDNKMELAII___C_GOOIDADIJMK_OFFSET))(this);
	}

	::System::Void LLALAPOLIMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDNKMELAII___C_LLALAPOLIMF_OFFSET))(this);
	}
};
