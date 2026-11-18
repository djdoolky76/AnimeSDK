#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define JIDGDMDOEDD___C_KPOIJCBJMPC_OFFSET UNITYSDK_OFFSET(0x1A477BC0)
#define JIDGDMDOEDD___C_OLDHOEHHFFD_OFFSET UNITYSDK_OFFSET(0x1A477BD0)
#define JIDGDMDOEDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A477B70)
#define JIDGDMDOEDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A477BB0)

inline static constexpr unsigned int JIDGDMDOEDD___c_TypeDefinitionIndex = 51007;

class JIDGDMDOEDD___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JIDGDMDOEDD___c_TypeDefinitionIndex)->GetStaticField(0x325E0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JIDGDMDOEDD___c_TypeDefinitionIndex)->GetStaticField(0x325E8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JIDGDMDOEDD___c_TypeDefinitionIndex)->GetStaticField(0x325F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIDGDMDOEDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDGDMDOEDD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KPOIJCBJMPC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDGDMDOEDD___C_KPOIJCBJMPC_OFFSET))(this);
	}

	::System::Boolean OLDHOEHHFFD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDGDMDOEDD___C_OLDHOEHHFFD_OFFSET))(this);
	}
};
