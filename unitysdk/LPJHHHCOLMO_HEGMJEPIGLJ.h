#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class KIPBNHIMABA;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPJHHHCOLMO_HEGMJEPIGLJ_DBNCGLCOPPG_OFFSET UNITYSDK_OFFSET(0x14D55400)
#define LPJHHHCOLMO_HEGMJEPIGLJ_KMKFBLNIGEK_OFFSET UNITYSDK_OFFSET(0x14D55380)
#define LPJHHHCOLMO_HEGMJEPIGLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14D55370)

inline static constexpr unsigned int LPJHHHCOLMO_HEGMJEPIGLJ_TypeDefinitionIndex = 46627;

class LPJHHHCOLMO_HEGMJEPIGLJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* HDLJALJFOHB; // 0x10
	::System::Action_2<::KIPBNHIMABA*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*>* PDGKNELEGKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_HEGMJEPIGLJ__CTOR_OFFSET))(this);
	}

	::System::Void KMKFBLNIGEK(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_HEGMJEPIGLJ_KMKFBLNIGEK_OFFSET))(this, POLEBKEFMFL);
	}

	::System::Void DBNCGLCOPPG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_HEGMJEPIGLJ_DBNCGLCOPPG_OFFSET))(this, PIIPCLCCOIG);
	}
};
