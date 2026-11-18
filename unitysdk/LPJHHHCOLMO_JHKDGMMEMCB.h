#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class LEMPJDFNNBK;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPJHHHCOLMO_JHKDGMMEMCB_ABOCCDLOLDL_OFFSET UNITYSDK_OFFSET(0x15909530)
#define LPJHHHCOLMO_JHKDGMMEMCB_LCCJCBBFAJD_OFFSET UNITYSDK_OFFSET(0x159094B0)
#define LPJHHHCOLMO_JHKDGMMEMCB__CTOR_OFFSET UNITYSDK_OFFSET(0x159094A0)

inline static constexpr unsigned int LPJHHHCOLMO_JHKDGMMEMCB_TypeDefinitionIndex = 46649;

class LPJHHHCOLMO_JHKDGMMEMCB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* HDLJALJFOHB; // 0x10
	::System::Action_2<::LEMPJDFNNBK*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*>* PDGKNELEGKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_JHKDGMMEMCB__CTOR_OFFSET))(this);
	}

	::System::Void LCCJCBBFAJD(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_JHKDGMMEMCB_LCCJCBBFAJD_OFFSET))(this, POLEBKEFMFL);
	}

	::System::Void ABOCCDLOLDL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_JHKDGMMEMCB_ABOCCDLOLDL_OFFSET))(this, PIIPCLCCOIG);
	}
};
