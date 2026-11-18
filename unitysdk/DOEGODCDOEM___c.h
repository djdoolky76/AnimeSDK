#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define DOEGODCDOEM___C_JBLDAPOLAFL_OFFSET UNITYSDK_OFFSET(0x12429690)
#define DOEGODCDOEM___C_KKMKHFEHHGH_OFFSET UNITYSDK_OFFSET(0x12429650)
#define DOEGODCDOEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12429600)
#define DOEGODCDOEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12429640)

inline static constexpr unsigned int DOEGODCDOEM___c_TypeDefinitionIndex = 44068;

class DOEGODCDOEM___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__34_15()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DOEGODCDOEM___c_TypeDefinitionIndex)->GetStaticField(0x4E320);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__34_8()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DOEGODCDOEM___c_TypeDefinitionIndex)->GetStaticField(0x4E328);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DOEGODCDOEM___c_TypeDefinitionIndex)->GetStaticField(0x4E330);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOEGODCDOEM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEGODCDOEM___C__CTOR_OFFSET))(this);
	}

	::System::String* KKMKHFEHHGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEGODCDOEM___C_KKMKHFEHHGH_OFFSET))(this);
	}

	::System::Boolean JBLDAPOLAFL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEGODCDOEM___C_JBLDAPOLAFL_OFFSET))(this);
	}
};
