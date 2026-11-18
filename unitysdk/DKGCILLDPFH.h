#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEMANLDGCFD.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"

#define DKGCILLDPFH_EDNOALPFFIO_OFFSET UNITYSDK_OFFSET(0x1A1E7F80)
#define DKGCILLDPFH_OELADBPLLEM_OFFSET UNITYSDK_OFFSET(0x1A1E7E90)
#define DKGCILLDPFH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E7E30)

inline static constexpr unsigned int DKGCILLDPFH_TypeDefinitionIndex = 40220;

class DKGCILLDPFH : public ::GEMANLDGCFD
{
public:
	static ::DKGCILLDPFH** StaticGet_GKKEJJFFMOO()
	{
		return (::DKGCILLDPFH**)Il2CppClass::FromTypeDefinitionIndex(DKGCILLDPFH_TypeDefinitionIndex)->GetStaticField(0x3D8C0);
	}

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType JMBDBELDLGM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + DKGCILLDPFH__CTOR_OFFSET))(this, JMBDBELDLGM);
	}

	static ::DKGCILLDPFH* OELADBPLLEM()
	{
		return ((::DKGCILLDPFH*(*)())((::PBYTE)hIl2Cpp + DKGCILLDPFH_OELADBPLLEM_OFFSET))();
	}

	static ::System::Void EDNOALPFFIO(::DKGCILLDPFH* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::DKGCILLDPFH*))((::PBYTE)hIl2Cpp + DKGCILLDPFH_EDNOALPFFIO_OFFSET))(EGEGIMGMJHN);
	}
};
