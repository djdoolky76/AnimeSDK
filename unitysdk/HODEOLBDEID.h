#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BBPCINJAMAF;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define HODEOLBDEID_PHMGCEBAHPA_OFFSET UNITYSDK_OFFSET(0x16F505C0)

inline static constexpr unsigned int HODEOLBDEID_TypeDefinitionIndex = 47273;

class HODEOLBDEID : public ::System::Object
{
public:
	static ::BBPCINJAMAF* PHMGCEBAHPA(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::System::String* FOPKPPMGLGH)
	{
		return ((::BBPCINJAMAF*(*)(::MoleMole::HollowChessboard::HollowEntity*, ::System::String*))((::PBYTE)hIl2Cpp + HODEOLBDEID_PHMGCEBAHPA_OFFSET))(KECKGDFIALJ, FOPKPPMGLGH);
	}
};
