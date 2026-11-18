#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkillTypeToAttackTagsConfig; }
namespace System { template <typename T> class Func_1; }

#define DJBJDHHNBOP___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x134473A0)
#define DJBJDHHNBOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13447350)
#define DJBJDHHNBOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13447390)

inline static constexpr unsigned int DJBJDHHNBOP___c_TypeDefinitionIndex = 61263;

class DJBJDHHNBOP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DJBJDHHNBOP___c_TypeDefinitionIndex)->GetStaticField(0x37340);
	}
	static ::System::Func_1<::MoleMole::Config::SkillTypeToAttackTagsConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::SkillTypeToAttackTagsConfig*>**)Il2CppClass::FromTypeDefinitionIndex(DJBJDHHNBOP___c_TypeDefinitionIndex)->GetStaticField(0x37348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJBJDHHNBOP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJDHHNBOP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::SkillTypeToAttackTagsConfig* LPCHADDECLC()
	{
		return ((::MoleMole::Config::SkillTypeToAttackTagsConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJDHHNBOP___C_LPCHADDECLC_OFFSET))(this);
	}
};
