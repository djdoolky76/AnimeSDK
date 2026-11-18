#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class ChallengeSubTypeItem; }
namespace System { template <typename T> class Action_1; }

#define NCDMMMLNAMM___C_DMMJHDLPDPM_OFFSET UNITYSDK_OFFSET(0x1157E080)
#define NCDMMMLNAMM___C_EMKGBAHBLCE_OFFSET UNITYSDK_OFFSET(0x1157E0B0)
#define NCDMMMLNAMM___C_NHEENLLJELM_OFFSET UNITYSDK_OFFSET(0x1157E0E0)
#define NCDMMMLNAMM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1157E030)
#define NCDMMMLNAMM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1157E070)

inline static constexpr unsigned int NCDMMMLNAMM___c_TypeDefinitionIndex = 65682;

class NCDMMMLNAMM___c : public ::System::Object
{
public:
	static ::System::Action_1<::MoleMole::Battle::ChallengeSubTypeItem*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::MoleMole::Battle::ChallengeSubTypeItem*>**)Il2CppClass::FromTypeDefinitionIndex(NCDMMMLNAMM___c_TypeDefinitionIndex)->GetStaticField(0x359B0);
	}
	static ::System::Action_1<::MoleMole::Battle::ChallengeSubTypeItem*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::MoleMole::Battle::ChallengeSubTypeItem*>**)Il2CppClass::FromTypeDefinitionIndex(NCDMMMLNAMM___c_TypeDefinitionIndex)->GetStaticField(0x359B8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NCDMMMLNAMM___c_TypeDefinitionIndex)->GetStaticField(0x359C0);
	}
	static ::System::Action_1<::MoleMole::Battle::ChallengeSubTypeItem*>** StaticGet___9__16_1()
	{
		return (::System::Action_1<::MoleMole::Battle::ChallengeSubTypeItem*>**)Il2CppClass::FromTypeDefinitionIndex(NCDMMMLNAMM___c_TypeDefinitionIndex)->GetStaticField(0x359C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCDMMMLNAMM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDMMMLNAMM___C__CTOR_OFFSET))(this);
	}

	::System::Void DMMJHDLPDPM(::MoleMole::Battle::ChallengeSubTypeItem* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ChallengeSubTypeItem*))((::PBYTE)hIl2Cpp + NCDMMMLNAMM___C_DMMJHDLPDPM_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void EMKGBAHBLCE(::MoleMole::Battle::ChallengeSubTypeItem* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ChallengeSubTypeItem*))((::PBYTE)hIl2Cpp + NCDMMMLNAMM___C_EMKGBAHBLCE_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void NHEENLLJELM(::MoleMole::Battle::ChallengeSubTypeItem* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ChallengeSubTypeItem*))((::PBYTE)hIl2Cpp + NCDMMMLNAMM___C_NHEENLLJELM_OFFSET))(this, IPMMCGDMODG);
	}
};
