#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MPNPHBJOHNG___C_LBBJOAMNPEE_OFFSET UNITYSDK_OFFSET(0x11E4BC80)
#define MPNPHBJOHNG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E4BC30)
#define MPNPHBJOHNG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E4BC70)

inline static constexpr unsigned int MPNPHBJOHNG___c_TypeDefinitionIndex = 66745;

class MPNPHBJOHNG___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MPNPHBJOHNG___c_TypeDefinitionIndex)->GetStaticField(0x419A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MPNPHBJOHNG___c_TypeDefinitionIndex)->GetStaticField(0x419A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNPHBJOHNG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNPHBJOHNG___C__CTOR_OFFSET))(this);
	}

	::System::String* LBBJOAMNPEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNPHBJOHNG___C_LBBJOAMNPEE_OFFSET))(this);
	}
};
