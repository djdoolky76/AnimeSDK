#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LOEMCCMDHGF;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define LOEMCCMDHGF_GHJIFCABFGJ_GGBKCKNKIDF_OFFSET UNITYSDK_OFFSET(0x11F25620)
#define LOEMCCMDHGF_GHJIFCABFGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F25610)

inline static constexpr unsigned int LOEMCCMDHGF_GHJIFCABFGJ_TypeDefinitionIndex = 48027;

class LOEMCCMDHGF_GHJIFCABFGJ : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* DJHFOGHIFEJ; // 0x10
	::LOEMCCMDHGF* KLHPEBKNIFB; // 0x18
	::MoleMole::Battle::Entity* KEEENBHLHPL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEMCCMDHGF_GHJIFCABFGJ__CTOR_OFFSET))(this);
	}

	::System::Void GGBKCKNKIDF(::System::Int32 EGEGIMGMJHN, ::System::Int32 KCNOHOOPNAH, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + LOEMCCMDHGF_GHJIFCABFGJ_GGBKCKNKIDF_OFFSET))(this, EGEGIMGMJHN, KCNOHOOPNAH, GJBHEJGENMI);
	}
};
