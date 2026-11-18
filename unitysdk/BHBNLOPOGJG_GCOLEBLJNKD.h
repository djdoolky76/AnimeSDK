#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class HKNDDPEJAKF;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHBNLOPOGJG_GCOLEBLJNKD_INGAJKIKMMH_OFFSET UNITYSDK_OFFSET(0x1867A130)
#define BHBNLOPOGJG_GCOLEBLJNKD_LDKMOHDMCEC_OFFSET UNITYSDK_OFFSET(0x1867A0B0)
#define BHBNLOPOGJG_GCOLEBLJNKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1867A0A0)

inline static constexpr unsigned int BHBNLOPOGJG_GCOLEBLJNKD_TypeDefinitionIndex = 60230;

class BHBNLOPOGJG_GCOLEBLJNKD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* HDLJALJFOHB; // 0x10
	::System::Action_2<::HKNDDPEJAKF*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*>* PDGKNELEGKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_GCOLEBLJNKD__CTOR_OFFSET))(this);
	}

	::System::Void LDKMOHDMCEC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_GCOLEBLJNKD_LDKMOHDMCEC_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void INGAJKIKMMH(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_GCOLEBLJNKD_INGAJKIKMMH_OFFSET))(this, POLEBKEFMFL);
	}
};
