#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EKMCEBIKALB_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xF9DCE90)
#define EKMCEBIKALB_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0xF9DCDB0)
#define EKMCEBIKALB_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0xF9DCF00)
#define EKMCEBIKALB__CTOR_OFFSET UNITYSDK_OFFSET(0xF9DCEE0)

inline static constexpr unsigned int EKMCEBIKALB_TypeDefinitionIndex = 91170;

class EKMCEBIKALB
{
public:
	::System::Int32 OGFPEPEEHLP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMCEBIKALB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* JLIMOLHLFAK(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* HLFFCMIFFIB)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + EKMCEBIKALB_JLIMOLHLFAK_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMCEBIKALB_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void JMDEKPONKMF(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKMCEBIKALB_JMDEKPONKMF_OFFSET))(this, JHFKDGBCOBA);
	}
};
