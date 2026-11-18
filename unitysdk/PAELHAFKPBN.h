#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/PMFJFEFDFAL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HIFPJDPDICG.h"

class DFEFCOAAPGK;
class OHKBMKNIBHA;

#define PAELHAFKPBN_GLJAPOBDFIH_OFFSET UNITYSDK_OFFSET(0x1DCA6970)
#define PAELHAFKPBN_MIFCDENGAPL_OFFSET UNITYSDK_OFFSET(0x1DCA6760)

inline static constexpr unsigned int PAELHAFKPBN_TypeDefinitionIndex = 93295;

class PAELHAFKPBN : public ::System::Object
{
public:
	static ::HIFPJDPDICG MIFCDENGAPL(::DFEFCOAAPGK* GEEHGDABNJF, ::OHKBMKNIBHA* KECKGDFIALJ, ::PMFJFEFDFAL OBNIAHNMHPF)
	{
		return ((::HIFPJDPDICG(*)(::DFEFCOAAPGK*, ::OHKBMKNIBHA*, ::PMFJFEFDFAL))((::PBYTE)hIl2Cpp + PAELHAFKPBN_MIFCDENGAPL_OFFSET))(GEEHGDABNJF, KECKGDFIALJ, OBNIAHNMHPF);
	}

	static ::System::Boolean GLJAPOBDFIH(::MoleMole::Arcade::BallsRace::BrEntityType MKCOMJHINNJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + PAELHAFKPBN_GLJAPOBDFIH_OFFSET))(MKCOMJHINNJ);
	}
};
