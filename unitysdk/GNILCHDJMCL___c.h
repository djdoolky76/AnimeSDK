#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define GNILCHDJMCL___C_FCAJGENNDHO_OFFSET UNITYSDK_OFFSET(0x14D05F20)
#define GNILCHDJMCL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D05ED0)
#define GNILCHDJMCL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D05F10)

inline static constexpr unsigned int GNILCHDJMCL___c_TypeDefinitionIndex = 87449;

class GNILCHDJMCL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GNILCHDJMCL___c_TypeDefinitionIndex)->GetStaticField(0x463A0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__10_6()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GNILCHDJMCL___c_TypeDefinitionIndex)->GetStaticField(0x463A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNILCHDJMCL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNILCHDJMCL___C__CTOR_OFFSET))(this);
	}

	::System::String* FCAJGENNDHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNILCHDJMCL___C_FCAJGENNDHO_OFFSET))(this);
	}
};
