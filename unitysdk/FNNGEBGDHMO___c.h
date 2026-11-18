#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOINMHNNHJE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FNNGEBGDHMO___C_AGNIBMGFKHK_OFFSET UNITYSDK_OFFSET(0x15E75DD0)
#define FNNGEBGDHMO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E75D80)
#define FNNGEBGDHMO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E75DC0)

inline static constexpr unsigned int FNNGEBGDHMO___c_TypeDefinitionIndex = 74972;

class FNNGEBGDHMO___c : public ::System::Object
{
public:
	static ::System::Func_2<::AOINMHNNHJE*, ::System::Boolean>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::AOINMHNNHJE*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FNNGEBGDHMO___c_TypeDefinitionIndex)->GetStaticField(0x4B940);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FNNGEBGDHMO___c_TypeDefinitionIndex)->GetStaticField(0x4B948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNNGEBGDHMO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNGEBGDHMO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AGNIBMGFKHK(::AOINMHNNHJE* HMDKKCKDOFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOINMHNNHJE*))((::PBYTE)hIl2Cpp + FNNGEBGDHMO___C_AGNIBMGFKHK_OFFSET))(this, HMDKKCKDOFP);
	}
};
