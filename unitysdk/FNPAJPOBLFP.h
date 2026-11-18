#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalAIScriptConfig; }
namespace System { class Action; }

#define FNPAJPOBLFP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1750D630)
#define FNPAJPOBLFP_ICLIADJGDME_OFFSET UNITYSDK_OFFSET(0x1750D5F0)
#define FNPAJPOBLFP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1750D5E0)

inline static constexpr unsigned int FNPAJPOBLFP_TypeDefinitionIndex = 63489;

class FNPAJPOBLFP : public ::System::Object
{
public:
	static ::MoleMole::Config::LevelGlobalAIScriptConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::LevelGlobalAIScriptConfig**)Il2CppClass::FromTypeDefinitionIndex(FNPAJPOBLFP_TypeDefinitionIndex)->GetStaticField(0x37740);
	}
	static ::System::Boolean* StaticGet_HOBDDJJEAIE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FNPAJPOBLFP_TypeDefinitionIndex)->GetStaticField(0xC950);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNPAJPOBLFP__CCTOR_OFFSET))();
	}

	static ::System::Void ICLIADJGDME()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNPAJPOBLFP_ICLIADJGDME_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FNPAJPOBLFP_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
