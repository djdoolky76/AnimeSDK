#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define HHGMAPHMEHP___C_PBGBKBBGGAC_OFFSET UNITYSDK_OFFSET(0x15B4A670)
#define HHGMAPHMEHP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B4A620)
#define HHGMAPHMEHP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4A660)

inline static constexpr unsigned int HHGMAPHMEHP___c_TypeDefinitionIndex = 59920;

class HHGMAPHMEHP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HHGMAPHMEHP___c_TypeDefinitionIndex)->GetStaticField(0x44310);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HHGMAPHMEHP___c_TypeDefinitionIndex)->GetStaticField(0x44318);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHGMAPHMEHP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGMAPHMEHP___C__CTOR_OFFSET))(this);
	}

	::System::String* PBGBKBBGGAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGMAPHMEHP___C_PBGBKBBGGAC_OFFSET))(this);
	}
};
