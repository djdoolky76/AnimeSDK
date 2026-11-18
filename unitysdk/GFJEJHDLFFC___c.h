#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIInLevelSkillButtonZiplineChangeChildWindowController_Mode.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define GFJEJHDLFFC___C_BNINJDOECJH_OFFSET UNITYSDK_OFFSET(0x13DD3570)
#define GFJEJHDLFFC___C_DOEKJHBHFDM_OFFSET UNITYSDK_OFFSET(0x13DD35E0)
#define GFJEJHDLFFC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DD3520)
#define GFJEJHDLFFC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD3560)

inline static constexpr unsigned int GFJEJHDLFFC___c_TypeDefinitionIndex = 77327;

class GFJEJHDLFFC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Object*>** StaticGet___9__29_1()
	{
		return (::System::Func_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GFJEJHDLFFC___c_TypeDefinitionIndex)->GetStaticField(0x50830);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GFJEJHDLFFC___c_TypeDefinitionIndex)->GetStaticField(0x50838);
	}
	static ::System::Func_1<::MoleMole::EntityHandle>** StaticGet___9__29_0()
	{
		return (::System::Func_1<::MoleMole::EntityHandle>**)Il2CppClass::FromTypeDefinitionIndex(GFJEJHDLFFC___c_TypeDefinitionIndex)->GetStaticField(0x50840);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFJEJHDLFFC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJEJHDLFFC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle BNINJDOECJH()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJEJHDLFFC___C_BNINJDOECJH_OFFSET))(this);
	}

	::MoleMole::UIInLevelSkillButtonZiplineChangeChildWindowController_Mode DOEKJHBHFDM()
	{
		return ((::MoleMole::UIInLevelSkillButtonZiplineChangeChildWindowController_Mode(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJEJHDLFFC___C_DOEKJHBHFDM_OFFSET))(this);
	}
};
