#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class ABFDJPPBLHF;
class LEKHPKOOGIP;
class OHKBMKNIBHA;

#define PJLLFCLNHLO_BOEKCAIHMEG_CKHACAMMKEL_OFFSET UNITYSDK_OFFSET(0x1F90D020)
#define PJLLFCLNHLO_BOEKCAIHMEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F90D010)

inline static constexpr unsigned int PJLLFCLNHLO_BOEKCAIHMEG_TypeDefinitionIndex = 95112;

class PJLLFCLNHLO_BOEKCAIHMEG : public ::System::Object
{
public:
	::OHKBMKNIBHA* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLLFCLNHLO_BOEKCAIHMEG__CTOR_OFFSET))(this);
	}

	::System::Boolean CKHACAMMKEL(::System::ValueTuple_3<::MoleMole::Arcade::BallsRace::BrEntityType, ::ABFDJPPBLHF*, ::LEKHPKOOGIP*> IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_3<::MoleMole::Arcade::BallsRace::BrEntityType, ::ABFDJPPBLHF*, ::LEKHPKOOGIP*>))((::PBYTE)hIl2Cpp + PJLLFCLNHLO_BOEKCAIHMEG_CKHACAMMKEL_OFFSET))(this, IMLLDOHDCNC);
	}
};
