#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HEAECEINKCC___C_NIFLJJKGGDE_OFFSET UNITYSDK_OFFSET(0x15DA19F0)
#define HEAECEINKCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DA19A0)
#define HEAECEINKCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA19E0)

inline static constexpr unsigned int HEAECEINKCC___c_TypeDefinitionIndex = 64563;

class HEAECEINKCC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HEAECEINKCC___c_TypeDefinitionIndex)->GetStaticField(0x3DE70);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__25_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HEAECEINKCC___c_TypeDefinitionIndex)->GetStaticField(0x3DE78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEAECEINKCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean NIFLJJKGGDE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC___C_NIFLJJKGGDE_OFFSET))(this);
	}
};
