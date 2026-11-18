#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define KBOHMMAOIJI___C_GOHFNCBDFOE_OFFSET UNITYSDK_OFFSET(0x17B66230)
#define KBOHMMAOIJI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B661E0)
#define KBOHMMAOIJI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B66220)

inline static constexpr unsigned int KBOHMMAOIJI___c_TypeDefinitionIndex = 72552;

class KBOHMMAOIJI___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__54_15()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KBOHMMAOIJI___c_TypeDefinitionIndex)->GetStaticField(0x32770);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBOHMMAOIJI___c_TypeDefinitionIndex)->GetStaticField(0x32778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBOHMMAOIJI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOHMMAOIJI___C__CTOR_OFFSET))(this);
	}

	::System::String* GOHFNCBDFOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOHMMAOIJI___C_GOHFNCBDFOE_OFFSET))(this);
	}
};
