#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define LJIBJEMIDJJ___C_FDDINEKPHPJ_OFFSET UNITYSDK_OFFSET(0x156627B0)
#define LJIBJEMIDJJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15662760)
#define LJIBJEMIDJJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156627A0)

inline static constexpr unsigned int LJIBJEMIDJJ___c_TypeDefinitionIndex = 50530;

class LJIBJEMIDJJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LJIBJEMIDJJ___c_TypeDefinitionIndex)->GetStaticField(0x3E6E0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_9()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LJIBJEMIDJJ___c_TypeDefinitionIndex)->GetStaticField(0x3E6E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJIBJEMIDJJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIBJEMIDJJ___C__CTOR_OFFSET))(this);
	}

	::System::String* FDDINEKPHPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIBJEMIDJJ___C_FDDINEKPHPJ_OFFSET))(this);
	}
};
