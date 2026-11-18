#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigScaleCameraZ; }
namespace System { template <typename T> class Func_1; }

#define OIPHOLCDAHC___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x15F78540)
#define OIPHOLCDAHC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F784F0)
#define OIPHOLCDAHC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F78530)

inline static constexpr unsigned int OIPHOLCDAHC___c_TypeDefinitionIndex = 44413;

class OIPHOLCDAHC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OIPHOLCDAHC___c_TypeDefinitionIndex)->GetStaticField(0x3F970);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigScaleCameraZ*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigScaleCameraZ*>**)Il2CppClass::FromTypeDefinitionIndex(OIPHOLCDAHC___c_TypeDefinitionIndex)->GetStaticField(0x3F978);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIPHOLCDAHC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPHOLCDAHC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigScaleCameraZ* MEMFHNGDGIN()
	{
		return ((::MoleMole::Config::ConfigScaleCameraZ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPHOLCDAHC___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
