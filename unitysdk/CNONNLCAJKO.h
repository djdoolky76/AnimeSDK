#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCAGEKHAJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DKPJAEANAPO;
class FKDBFFKIOFN;
namespace MoleMole::Battle { class Entity; }

#define CNONNLCAJKO_DNKCHIOOBDL_OFFSET UNITYSDK_OFFSET(0x132704F0)
#define CNONNLCAJKO_HNOOCCLOANE_OFFSET UNITYSDK_OFFSET(0x132704A0)
#define CNONNLCAJKO__CTOR_OFFSET UNITYSDK_OFFSET(0x132703C0)

inline static constexpr unsigned int CNONNLCAJKO_TypeDefinitionIndex = 69445;

class CNONNLCAJKO : public ::BBDCAGEKHAJ
{
public:
	::DKPJAEANAPO* ONEFAGGPEFP; // 0x40
	::System::Single DNBFPMADDOD; // 0x48
	::System::Single ODEAIAMOEEF; // 0x4C
	::System::Single BCDHPKAHJDP; // 0x50
	::System::Single DPMKGCFDAAP; // 0x54
	::System::Single MFJKLOJDNBM; // 0x58
	::System::Single IGIICAJEGJC; // 0x5C
	::System::Single LBIGMIAACLB; // 0x60
	::System::Single FOJDJPICHIC; // 0x64

	::System::Void _ctor(::MoleMole::Battle::Entity* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CNONNLCAJKO__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Int32 HNOOCCLOANE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNONNLCAJKO_HNOOCCLOANE_OFFSET))(this);
	}

	::UnityEngine::Vector3 DNKCHIOOBDL(::FKDBFFKIOFN* LJBPECKCCEA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FKDBFFKIOFN*))((::PBYTE)hIl2Cpp + CNONNLCAJKO_DNKCHIOOBDL_OFFSET))(this, LJBPECKCCEA);
	}
};
