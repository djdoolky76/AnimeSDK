#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define AKENMCOLJGI___C_GOHFNCBDFOE_OFFSET UNITYSDK_OFFSET(0x134D7780)
#define AKENMCOLJGI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134D7730)
#define AKENMCOLJGI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134D7770)

inline static constexpr unsigned int AKENMCOLJGI___c_TypeDefinitionIndex = 44275;

class AKENMCOLJGI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AKENMCOLJGI___c_TypeDefinitionIndex)->GetStaticField(0x47B50);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__54_15()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AKENMCOLJGI___c_TypeDefinitionIndex)->GetStaticField(0x47B58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKENMCOLJGI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI___C__CTOR_OFFSET))(this);
	}

	::System::String* GOHFNCBDFOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI___C_GOHFNCBDFOE_OFFSET))(this);
	}
};
