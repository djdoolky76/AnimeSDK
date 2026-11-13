#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class MFPIHMCMONL;
class NGDBMBLAMEF;
namespace RPG::GameCore { class GameEntity; }

#define FFLGILJOEGH_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x130EED00)
#define FFLGILJOEGH_CTOR_OFFSET UNITYSDK_OFFSET(0x130EEDE0)
#define FFLGILJOEGH__ONBIND_OFFSET UNITYSDK_OFFSET(0x130EEC40)

inline static constexpr unsigned int FFLGILJOEGH_TypeDefinitionIndex = 73744;

	class FFLGILJOEGH : public ::FMPCODLIOLG
	{
	public:
		::NGDBMBLAMEF* PODEIFDONLC; // 0x60
		::MFPIHMCMONL* OENDKKCKOEG; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLGILJOEGH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLGILJOEGH__ONBIND_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFLGILJOEGH_CAJFDDIBPMI_OFFSET))(this, a1);
		}

	};
