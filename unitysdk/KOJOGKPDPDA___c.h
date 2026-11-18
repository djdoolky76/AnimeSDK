#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define KOJOGKPDPDA___C_NIIMDLHGGLK_OFFSET UNITYSDK_OFFSET(0x129AD0C0)
#define KOJOGKPDPDA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129AD070)
#define KOJOGKPDPDA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129AD0B0)

inline static constexpr unsigned int KOJOGKPDPDA___c_TypeDefinitionIndex = 84473;

class KOJOGKPDPDA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KOJOGKPDPDA___c_TypeDefinitionIndex)->GetStaticField(0x414C0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KOJOGKPDPDA___c_TypeDefinitionIndex)->GetStaticField(0x414C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOJOGKPDPDA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJOGKPDPDA___C__CTOR_OFFSET))(this);
	}

	::System::String* NIIMDLHGGLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJOGKPDPDA___C_NIIMDLHGGLK_OFFSET))(this);
	}
};
