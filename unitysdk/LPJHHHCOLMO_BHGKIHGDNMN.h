#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class INEGGCPFANF;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_BHGKIHGDNMN_FIIDPJHGMIE_OFFSET UNITYSDK_OFFSET(0x125A42F0)
#define LPJHHHCOLMO_BHGKIHGDNMN_KFMADDDJAHP_OFFSET UNITYSDK_OFFSET(0x125A4360)
#define LPJHHHCOLMO_BHGKIHGDNMN__CTOR_OFFSET UNITYSDK_OFFSET(0x125A42E0)

inline static constexpr unsigned int LPJHHHCOLMO_BHGKIHGDNMN_TypeDefinitionIndex = 46650;

class LPJHHHCOLMO_BHGKIHGDNMN : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::INEGGCPFANF*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_BHGKIHGDNMN__CTOR_OFFSET))(this);
	}

	::System::Void FIIDPJHGMIE(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_BHGKIHGDNMN_FIIDPJHGMIE_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void KFMADDDJAHP(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_BHGKIHGDNMN_KFMADDDJAHP_OFFSET))(this, DJCNCELJPOM);
	}
};
