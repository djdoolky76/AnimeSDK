#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class FAKIACDIKOP;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPJHHHCOLMO_BCIALLMBOEH_BMBOHILEKPM_OFFSET UNITYSDK_OFFSET(0x13D0DBB0)
#define LPJHHHCOLMO_BCIALLMBOEH_EJIDIOCAJDG_OFFSET UNITYSDK_OFFSET(0x13D0DB30)
#define LPJHHHCOLMO_BCIALLMBOEH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0DB20)

inline static constexpr unsigned int LPJHHHCOLMO_BCIALLMBOEH_TypeDefinitionIndex = 46620;

class LPJHHHCOLMO_BCIALLMBOEH : public ::System::Object
{
public:
	::System::Action_2<::FAKIACDIKOP*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*>* PDGKNELEGKJ; // 0x10
	::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* HDLJALJFOHB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_BCIALLMBOEH__CTOR_OFFSET))(this);
	}

	::System::Void EJIDIOCAJDG(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_BCIALLMBOEH_EJIDIOCAJDG_OFFSET))(this, POLEBKEFMFL);
	}

	::System::Void BMBOHILEKPM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_BCIALLMBOEH_BMBOHILEKPM_OFFSET))(this, PIIPCLCCOIG);
	}
};
