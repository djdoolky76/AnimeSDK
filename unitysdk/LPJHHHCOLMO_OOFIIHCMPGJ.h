#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILOCAIBFJIJ;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_OOFIIHCMPGJ_BFPGOMOCBNC_OFFSET UNITYSDK_OFFSET(0x17CF86B0)
#define LPJHHHCOLMO_OOFIIHCMPGJ_JPIFIKEIDBD_OFFSET UNITYSDK_OFFSET(0x17CF8640)
#define LPJHHHCOLMO_OOFIIHCMPGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF8630)

inline static constexpr unsigned int LPJHHHCOLMO_OOFIIHCMPGJ_TypeDefinitionIndex = 46638;

class LPJHHHCOLMO_OOFIIHCMPGJ : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::ILOCAIBFJIJ*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_OOFIIHCMPGJ__CTOR_OFFSET))(this);
	}

	::System::Void JPIFIKEIDBD(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_OOFIIHCMPGJ_JPIFIKEIDBD_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void BFPGOMOCBNC(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_OOFIIHCMPGJ_BFPGOMOCBNC_OFFSET))(this, DJCNCELJPOM);
	}
};
