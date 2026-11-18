#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMENMNEOEMM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABLevelEnemyRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DEJMKFCMPNP___C_IPAJMLGPPEK_OFFSET UNITYSDK_OFFSET(0x149A0A80)
#define DEJMKFCMPNP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149A0A30)
#define DEJMKFCMPNP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149A0A70)

inline static constexpr unsigned int DEJMKFCMPNP___c_TypeDefinitionIndex = 73459;

class DEJMKFCMPNP___c : public ::System::Object
{
public:
	static ::System::Func_2<::OMENMNEOEMM, ::System::Object*>** StaticGet___9__27_1()
	{
		return (::System::Func_2<::OMENMNEOEMM, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DEJMKFCMPNP___c_TypeDefinitionIndex)->GetStaticField(0x31420);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DEJMKFCMPNP___c_TypeDefinitionIndex)->GetStaticField(0x31428);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEJMKFCMPNP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJMKFCMPNP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIRABLevelEnemyRowWidgetController_Data* IPAJMLGPPEK(::OMENMNEOEMM IPMMCGDMODG)
	{
		return ((::MoleMole::UIRABLevelEnemyRowWidgetController_Data*(*)(::PVOID, ::OMENMNEOEMM))((::PBYTE)hIl2Cpp + DEJMKFCMPNP___C_IPAJMLGPPEK_OFFSET))(this, IPMMCGDMODG);
	}
};
