#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMGLMCOIEIK_GFEPHOMLKFG.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }

#define AMGLMCOIEIK_DNBFHNGGBOI_OFFSET UNITYSDK_OFFSET(0x135F6530)
#define AMGLMCOIEIK_ENFFKPGIICL_OFFSET UNITYSDK_OFFSET(0x135F61D0)
#define AMGLMCOIEIK_GAOKCADKPCK_OFFSET UNITYSDK_OFFSET(0x135F62D0)

inline static constexpr unsigned int AMGLMCOIEIK_TypeDefinitionIndex = 80147;

class AMGLMCOIEIK : public ::System::Object
{
public:
	static ::System::Void ENFFKPGIICL(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM, ::AMGLMCOIEIK_GFEPHOMLKFG FKMHMOELCIO)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*, ::AMGLMCOIEIK_GFEPHOMLKFG))((::PBYTE)hIl2Cpp + AMGLMCOIEIK_ENFFKPGIICL_OFFSET))(NCIMBHDKIJM, FKMHMOELCIO);
	}

	static ::System::Void GAOKCADKPCK(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + AMGLMCOIEIK_GAOKCADKPCK_OFFSET))(NCIMBHDKIJM);
	}

	static ::System::Void DNBFHNGGBOI(::MoleMole::Battle::Entity* EOOPMPNJAAI, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + AMGLMCOIEIK_DNBFHNGGBOI_OFFSET))(EOOPMPNJAAI, NCIMBHDKIJM);
	}
};
