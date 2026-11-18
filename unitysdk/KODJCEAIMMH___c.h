#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define KODJCEAIMMH___C_BABCFMCMIAB_OFFSET UNITYSDK_OFFSET(0x129AC500)
#define KODJCEAIMMH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129AC4B0)
#define KODJCEAIMMH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129AC4F0)

inline static constexpr unsigned int KODJCEAIMMH___c_TypeDefinitionIndex = 57862;

class KODJCEAIMMH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KODJCEAIMMH___c_TypeDefinitionIndex)->GetStaticField(0x41490);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KODJCEAIMMH___c_TypeDefinitionIndex)->GetStaticField(0x41498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KODJCEAIMMH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BABCFMCMIAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH___C_BABCFMCMIAB_OFFSET))(this);
	}
};
