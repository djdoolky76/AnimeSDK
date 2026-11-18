#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShootingGround; }
namespace MoleMole::Config { class ConfigShootingGroundScriptableObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KNCNFCKDAHL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x129A92E0)
#define KNCNFCKDAHL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x129A91F0)
#define KNCNFCKDAHL_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x129A94F0)
#define KNCNFCKDAHL__CTOR_OFFSET UNITYSDK_OFFSET(0x129A91E0)

inline static constexpr unsigned int KNCNFCKDAHL_TypeDefinitionIndex = 49171;

class KNCNFCKDAHL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigShootingGroundScriptableObject** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigShootingGroundScriptableObject**)Il2CppClass::FromTypeDefinitionIndex(KNCNFCKDAHL_TypeDefinitionIndex)->GetStaticField(0x38360);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCNFCKDAHL__CTOR_OFFSET))(this);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KNCNFCKDAHL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigShootingGround* KGNEJKNNODJ(::System::String* MGMDLMBEDJF)
	{
		return ((::MoleMole::Config::ConfigShootingGround*(*)(::System::String*))((::PBYTE)hIl2Cpp + KNCNFCKDAHL_KGNEJKNNODJ_OFFSET))(MGMDLMBEDJF);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KNCNFCKDAHL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
