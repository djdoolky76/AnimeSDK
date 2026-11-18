#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CEGCCANJCPI;
class CFMGIKJLMBJ;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHBNLOPOGJG_HJJOLJPMLNG_IDJEFLEBBAE_OFFSET UNITYSDK_OFFSET(0x11504F00)
#define BHBNLOPOGJG_HJJOLJPMLNG_LLIFCOBCHOA_OFFSET UNITYSDK_OFFSET(0x11504F80)
#define BHBNLOPOGJG_HJJOLJPMLNG__CTOR_OFFSET UNITYSDK_OFFSET(0x11504EF0)

inline static constexpr unsigned int BHBNLOPOGJG_HJJOLJPMLNG_TypeDefinitionIndex = 60227;

class BHBNLOPOGJG_HJJOLJPMLNG : public ::System::Object
{
public:
	::System::Action_2<::CEGCCANJCPI*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*>* PDGKNELEGKJ; // 0x10
	::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* HDLJALJFOHB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_HJJOLJPMLNG__CTOR_OFFSET))(this);
	}

	::System::Void IDJEFLEBBAE(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_HJJOLJPMLNG_IDJEFLEBBAE_OFFSET))(this, POLEBKEFMFL);
	}

	::System::Void LLIFCOBCHOA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_HJJOLJPMLNG_LLIFCOBCHOA_OFFSET))(this, GLAOEHCGCFO);
	}
};
