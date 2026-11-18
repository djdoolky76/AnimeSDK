#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BALFGKABMCH;
class IAEJFPPBODG;
class IANAIPMNOBC;
namespace MoleMole::Battle { class Entity; }

#define FCOBDIGOFGD_GMMDOMNOPAN_OFFSET UNITYSDK_OFFSET(0x11CFD640)
#define FCOBDIGOFGD_LECJEAIIAEI_OFFSET UNITYSDK_OFFSET(0x11CFD920)
#define FCOBDIGOFGD_NJMNDFIDAOH_OFFSET UNITYSDK_OFFSET(0x11CFDA40)

inline static constexpr unsigned int FCOBDIGOFGD_TypeDefinitionIndex = 83260;

class FCOBDIGOFGD : public ::System::Object
{
public:
	static ::BALFGKABMCH* GMMDOMNOPAN()
	{
		return ((::BALFGKABMCH*(*)())((::PBYTE)hIl2Cpp + FCOBDIGOFGD_GMMDOMNOPAN_OFFSET))();
	}

	static ::IAEJFPPBODG* LECJEAIIAEI(::IANAIPMNOBC* HODAIDNDKHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::IAEJFPPBODG*(*)(::IANAIPMNOBC*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCOBDIGOFGD_LECJEAIIAEI_OFFSET))(HODAIDNDKHD, KECKGDFIALJ);
	}

	static ::System::Void NJMNDFIDAOH(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FCOBDIGOFGD_NJMNDFIDAOH_OFFSET))(MGMDLMBEDJF);
	}
};
