#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define FIMKCJGOPLO___C_JOEFGINLCBO_OFFSET UNITYSDK_OFFSET(0x11C52C70)
#define FIMKCJGOPLO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C52C20)
#define FIMKCJGOPLO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11C52C60)

inline static constexpr unsigned int FIMKCJGOPLO___c_TypeDefinitionIndex = 83329;

class FIMKCJGOPLO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FIMKCJGOPLO___c_TypeDefinitionIndex)->GetStaticField(0x4CEA0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FIMKCJGOPLO___c_TypeDefinitionIndex)->GetStaticField(0x4CEA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIMKCJGOPLO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMKCJGOPLO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JOEFGINLCBO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMKCJGOPLO___C_JOEFGINLCBO_OFFSET))(this);
	}
};
