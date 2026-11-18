#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define EGDDBEBCGBL___C_OLDHOEHHFFD_OFFSET UNITYSDK_OFFSET(0x154A88D0)
#define EGDDBEBCGBL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154A8880)
#define EGDDBEBCGBL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154A88C0)

inline static constexpr unsigned int EGDDBEBCGBL___c_TypeDefinitionIndex = 64801;

class EGDDBEBCGBL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGDDBEBCGBL___c_TypeDefinitionIndex)->GetStaticField(0x45FA0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EGDDBEBCGBL___c_TypeDefinitionIndex)->GetStaticField(0x45FA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGDDBEBCGBL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL___C__CTOR_OFFSET))(this);
	}

	::System::String* OLDHOEHHFFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL___C_OLDHOEHHFFD_OFFSET))(this);
	}
};
