#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DLPCMDPJAOM_LAGLCOLIMKM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLPCMDPJAOM_FDCKJAPIAJD_OFFSET UNITYSDK_OFFSET(0xFDC5210)
#define DLPCMDPJAOM_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0xFDC5040)
#define DLPCMDPJAOM_KBPALODLDBP_OFFSET UNITYSDK_OFFSET(0xFDC5180)
#define DLPCMDPJAOM_KDEHIHNAPAD_OFFSET UNITYSDK_OFFSET(0xFDC5130)
#define DLPCMDPJAOM_OOBDAEOEGMI_OFFSET UNITYSDK_OFFSET(0xFDC54F0)
#define DLPCMDPJAOM__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC5000)

inline static constexpr unsigned int DLPCMDPJAOM_TypeDefinitionIndex = 89038;

class DLPCMDPJAOM
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* CEJENBBHBBG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* GLEJMKLOMBP(::MoleMole::Config::ProjectileTraitConfig DFMKILICPFB, ::UnityEngine::Vector3 KPLGFGLGLPD, ::System::Action* PABLEDCGDGM, ::DLPCMDPJAOM_LAGLCOLIMKM* AOKHOHCJNFJ)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::Config::ProjectileTraitConfig, ::UnityEngine::Vector3, ::System::Action*, ::DLPCMDPJAOM_LAGLCOLIMKM*))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_GLEJMKLOMBP_OFFSET))(this, DFMKILICPFB, KPLGFGLGLPD, PABLEDCGDGM, AOKHOHCJNFJ);
	}

	::System::Void KDEHIHNAPAD(::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>*))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_KDEHIHNAPAD_OFFSET))(this, DFMKILICPFB);
	}

	static ::UnityEngine::Vector3 KBPALODLDBP(::UnityEngine::Vector3 IEFBHIDIPPL)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_KBPALODLDBP_OFFSET))(IEFBHIDIPPL);
	}

	::System::Void FDCKJAPIAJD(::System::String* NNEGLBMECKE, ::UnityEngine::Vector3 KPLGFGLGLPD, ::UnityEngine::Vector3 MAPKFPJJIAM, ::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_FDCKJAPIAJD_OFFSET))(this, NNEGLBMECKE, KPLGFGLGLPD, MAPKFPJJIAM, PABLEDCGDGM);
	}

	::System::Void OOBDAEOEGMI(::System::String* NNEGLBMECKE, ::UnityEngine::Vector3 KPLGFGLGLPD, ::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_OOBDAEOEGMI_OFFSET))(this, NNEGLBMECKE, KPLGFGLGLPD, PABLEDCGDGM);
	}
};
