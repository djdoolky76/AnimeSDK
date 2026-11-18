#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JLDACECJJCF;
namespace MoleMole { class UIScaryNightRecommendPageController; }

#define JLDACECJJCF_IIDBLDJIDCL_DGLLICGIELP_OFFSET UNITYSDK_OFFSET(0x157CF7B0)
#define JLDACECJJCF_IIDBLDJIDCL__CTOR_OFFSET UNITYSDK_OFFSET(0x157CF7A0)

inline static constexpr unsigned int JLDACECJJCF_IIDBLDJIDCL_TypeDefinitionIndex = 89774;

class JLDACECJJCF_IIDBLDJIDCL : public ::System::Object
{
public:
	::MoleMole::UIScaryNightRecommendPageController* LGBHOFGBGHC; // 0x10
	::JLDACECJJCF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDACECJJCF_IIDBLDJIDCL__CTOR_OFFSET))(this);
	}

	::System::Void DGLLICGIELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDACECJJCF_IIDBLDJIDCL_DGLLICGIELP_OFFSET))(this);
	}
};
