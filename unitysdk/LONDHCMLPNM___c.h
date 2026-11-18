#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOnGoingTypeDurationData; }
namespace System { template <typename T> class Func_1; }

#define LONDHCMLPNM___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x13D0C810)
#define LONDHCMLPNM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D0C7C0)
#define LONDHCMLPNM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0C800)

inline static constexpr unsigned int LONDHCMLPNM___c_TypeDefinitionIndex = 72829;

class LONDHCMLPNM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LONDHCMLPNM___c_TypeDefinitionIndex)->GetStaticField(0x46A00);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigOnGoingTypeDurationData*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigOnGoingTypeDurationData*>**)Il2CppClass::FromTypeDefinitionIndex(LONDHCMLPNM___c_TypeDefinitionIndex)->GetStaticField(0x46A08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LONDHCMLPNM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONDHCMLPNM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigOnGoingTypeDurationData* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigOnGoingTypeDurationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LONDHCMLPNM___C_LPCHADDECLC_OFFSET))(this);
	}
};
