#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABDepositoryElementTextTagRowWidgetController_Data; }
namespace MoleMole { class UIRABEnemyRowWidgetController_Data; }
namespace MoleMole { class UIRABLevelEnemyRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OGFFGMJOGNC___C_CGKJEMHEIGB_OFFSET UNITYSDK_OFFSET(0x1292E6C0)
#define OGFFGMJOGNC___C_DGDLPAJPGOL_OFFSET UNITYSDK_OFFSET(0x1292E650)
#define OGFFGMJOGNC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1292E600)
#define OGFFGMJOGNC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1292E640)

inline static constexpr unsigned int OGFFGMJOGNC___c_TypeDefinitionIndex = 60579;

class OGFFGMJOGNC___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::System::Object*>** StaticGet___9__11_10()
	{
		return (::System::Converter_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(OGFFGMJOGNC___c_TypeDefinitionIndex)->GetStaticField(0x477D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OGFFGMJOGNC___c_TypeDefinitionIndex)->GetStaticField(0x477D8);
	}
	static ::System::Func_2<::System::Object*, ::System::Object*>** StaticGet___9__11_9()
	{
		return (::System::Func_2<::System::Object*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(OGFFGMJOGNC___c_TypeDefinitionIndex)->GetStaticField(0x477E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGFFGMJOGNC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFFGMJOGNC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIRABEnemyRowWidgetController_Data* DGDLPAJPGOL(::MoleMole::UIRABLevelEnemyRowWidgetController_Data* IPMMCGDMODG)
	{
		return ((::MoleMole::UIRABEnemyRowWidgetController_Data*(*)(::PVOID, ::MoleMole::UIRABLevelEnemyRowWidgetController_Data*))((::PBYTE)hIl2Cpp + OGFFGMJOGNC___C_DGDLPAJPGOL_OFFSET))(this, IPMMCGDMODG);
	}

	::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data* CGKJEMHEIGB(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGFFGMJOGNC___C_CGKJEMHEIGB_OFFSET))(this, MGMDLMBEDJF);
	}
};
