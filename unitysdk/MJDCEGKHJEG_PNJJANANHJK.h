#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class KJPPANPJBOJ;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJDCEGKHJEG_PNJJANANHJK_AOCCOJIPAHA_OFFSET UNITYSDK_OFFSET(0x17D36610)
#define MJDCEGKHJEG_PNJJANANHJK_PBJIHAHOEAD_OFFSET UNITYSDK_OFFSET(0x17D36590)
#define MJDCEGKHJEG_PNJJANANHJK__CTOR_OFFSET UNITYSDK_OFFSET(0x17D36580)

inline static constexpr unsigned int MJDCEGKHJEG_PNJJANANHJK_TypeDefinitionIndex = 56445;

class MJDCEGKHJEG_PNJJANANHJK : public ::System::Object
{
public:
	::System::Action_2<::KJPPANPJBOJ*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*>* PDGKNELEGKJ; // 0x10
	::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* HDLJALJFOHB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_PNJJANANHJK__CTOR_OFFSET))(this);
	}

	::System::Void PBJIHAHOEAD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_PNJJANANHJK_PBJIHAHOEAD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void AOCCOJIPAHA(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_PNJJANANHJK_AOCCOJIPAHA_OFFSET))(this, POLEBKEFMFL);
	}
};
