#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define CFFGNJNAMBD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x128EBF00)
#define CFFGNJNAMBD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x128EBFC0)
#define CFFGNJNAMBD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x128EBE70)
#define CFFGNJNAMBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x128EBDF0)
#define CFFGNJNAMBD__CTOR_OFFSET UNITYSDK_OFFSET(0x128EBE60)

inline static constexpr unsigned int CFFGNJNAMBD_TypeDefinitionIndex = 74797;

class CFFGNJNAMBD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD; // 0x0
	::MoleMole::Config::CharacterAliveState NCEIFKCHNCI; // 0x20
	::System::UInt32 MIJJBPIGJNJ; // 0x24
	::MoleMole::Config::CharacterAliveState GNCDJECFNJG; // 0x28
	::MoleMole::Config::EntityType JAICKFPPOEO; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFFGNJNAMBD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFGNJNAMBD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFGNJNAMBD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DKBGLBIECBN, ::System::UInt32 MIJJBPIGJNJ, ::MoleMole::Config::CharacterAliveState JBNIIHBJAJD, ::MoleMole::Config::CharacterAliveState EKOHIAJDIEC, ::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::Config::CharacterAliveState, ::MoleMole::Config::CharacterAliveState, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CFFGNJNAMBD_CNHBDOMKKDE_OFFSET))(this, DKBGLBIECBN, MIJJBPIGJNJ, JBNIIHBJAJD, EKOHIAJDIEC, MKCOMJHINNJ);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFGNJNAMBD_FIGPAOKNJLN_OFFSET))(this);
	}
};
