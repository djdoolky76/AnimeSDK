#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPJHHHCOLMO_EIIBKMDDBAL_AECOGINKENL_OFFSET UNITYSDK_OFFSET(0x125A43F0)
#define LPJHHHCOLMO_EIIBKMDDBAL_DOEPMCFMKLA_OFFSET UNITYSDK_OFFSET(0x125A4400)
#define LPJHHHCOLMO_EIIBKMDDBAL_KNPDNBMNPDI_OFFSET UNITYSDK_OFFSET(0x125A43E0)
#define LPJHHHCOLMO_EIIBKMDDBAL__CTOR_OFFSET UNITYSDK_OFFSET(0x125A43D0)

inline static constexpr unsigned int LPJHHHCOLMO_EIIBKMDDBAL_TypeDefinitionIndex = 46645;

class LPJHHHCOLMO_EIIBKMDDBAL : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::Action_1<::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*>* PDGKNELEGKJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_EIIBKMDDBAL__CTOR_OFFSET))(this);
	}

	::System::Void KNPDNBMNPDI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_EIIBKMDDBAL_KNPDNBMNPDI_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void AECOGINKENL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_EIIBKMDDBAL_AECOGINKENL_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DOEPMCFMKLA(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_EIIBKMDDBAL_DOEPMCFMKLA_OFFSET))(this, POLEBKEFMFL);
	}
};
