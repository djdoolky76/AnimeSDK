#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define GPOJGBOMBKJ___C_MGFPCMMEKPF_OFFSET UNITYSDK_OFFSET(0x15D913D0)
#define GPOJGBOMBKJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D91380)
#define GPOJGBOMBKJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D913C0)

inline static constexpr unsigned int GPOJGBOMBKJ___c_TypeDefinitionIndex = 46924;

class GPOJGBOMBKJ___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GPOJGBOMBKJ___c_TypeDefinitionIndex)->GetStaticField(0x40B10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GPOJGBOMBKJ___c_TypeDefinitionIndex)->GetStaticField(0x40B18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPOJGBOMBKJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 MGFPCMMEKPF(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ___C_MGFPCMMEKPF_OFFSET))(this, HBJOLKHGGDD);
	}
};
