#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEJEPGBODPG_BBMCEIJIOPG_OFFSET UNITYSDK_OFFSET(0x146F62C0)
#define HEJEPGBODPG_EPMNNBHMFPO_OFFSET UNITYSDK_OFFSET(0x146F6060)
#define HEJEPGBODPG_JAGJBFAFAOA_OFFSET UNITYSDK_OFFSET(0x146F62A0)
#define HEJEPGBODPG_PFCGKLILNNF_OFFSET UNITYSDK_OFFSET(0x146F62B0)
#define HEJEPGBODPG_PMNCBPBDDDB_OFFSET UNITYSDK_OFFSET(0x146F60F0)
#define HEJEPGBODPG__CTOR_OFFSET UNITYSDK_OFFSET(0x146F5E40)

inline static constexpr unsigned int HEJEPGBODPG_TypeDefinitionIndex = 68316;

class HEJEPGBODPG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* CEIMFMLOJNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FGMJFGBBCDC; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* JLGGFOOFAHC; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DOLAJOBDGMI; // 0x28
	::MoleMole::Battle::Entity* _DKCBFMBGJBF_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* FOIEGNGKMAP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJEPGBODPG__CTOR_OFFSET))(this);
	}

	::System::Void EPMNNBHMFPO(::System::String* JPALMGLNGGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEJEPGBODPG_EPMNNBHMFPO_OFFSET))(this, JPALMGLNGGN);
	}

	::System::Void PMNCBPBDDDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJEPGBODPG_PMNCBPBDDDB_OFFSET))(this);
	}

	::System::Void JAGJBFAFAOA(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HEJEPGBODPG_JAGJBFAFAOA_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Battle::Entity* PFCGKLILNNF()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJEPGBODPG_PFCGKLILNNF_OFFSET))(this);
	}

	::System::Void BBMCEIJIOPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJEPGBODPG_BBMCEIJIOPG_OFFSET))(this);
	}
};
