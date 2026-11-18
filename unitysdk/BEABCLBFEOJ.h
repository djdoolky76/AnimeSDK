#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEMANLDGCFD.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"

#define BEABCLBFEOJ_EDNOALPFFIO_OFFSET UNITYSDK_OFFSET(0x1424BA30)
#define BEABCLBFEOJ_OELADBPLLEM_OFFSET UNITYSDK_OFFSET(0x1422E170)
#define BEABCLBFEOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1424B9D0)

inline static constexpr unsigned int BEABCLBFEOJ_TypeDefinitionIndex = 92815;

class BEABCLBFEOJ : public ::GEMANLDGCFD
{
public:
	static ::BEABCLBFEOJ** StaticGet_GKKEJJFFMOO()
	{
		return (::BEABCLBFEOJ**)Il2CppClass::FromTypeDefinitionIndex(BEABCLBFEOJ_TypeDefinitionIndex)->GetStaticField(0x47BA0);
	}

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType JMBDBELDLGM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + BEABCLBFEOJ__CTOR_OFFSET))(this, JMBDBELDLGM);
	}

	static ::BEABCLBFEOJ* OELADBPLLEM()
	{
		return ((::BEABCLBFEOJ*(*)())((::PBYTE)hIl2Cpp + BEABCLBFEOJ_OELADBPLLEM_OFFSET))();
	}

	static ::System::Void EDNOALPFFIO(::BEABCLBFEOJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::BEABCLBFEOJ*))((::PBYTE)hIl2Cpp + BEABCLBFEOJ_EDNOALPFFIO_OFFSET))(EGEGIMGMJHN);
	}
};
