#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PINIBJHANOF_HBPCJOIMDLG.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define PINIBJHANOF___C_GDKEHCAIDAI_OFFSET UNITYSDK_OFFSET(0x1B9E7AA0)
#define PINIBJHANOF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9E7A50)
#define PINIBJHANOF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E7A90)

inline static constexpr unsigned int PINIBJHANOF___c_TypeDefinitionIndex = 62690;

class PINIBJHANOF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PINIBJHANOF___c_TypeDefinitionIndex)->GetStaticField(0x429B0);
	}
	static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PINIBJHANOF___c_TypeDefinitionIndex)->GetStaticField(0x429B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PINIBJHANOF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINIBJHANOF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GDKEHCAIDAI(::PINIBJHANOF_HBPCJOIMDLG IMLLDOHDCNC)
	{
		return ((::System::Int32(*)(::PVOID, ::PINIBJHANOF_HBPCJOIMDLG))((::PBYTE)hIl2Cpp + PINIBJHANOF___C_GDKEHCAIDAI_OFFSET))(this, IMLLDOHDCNC);
	}
};
