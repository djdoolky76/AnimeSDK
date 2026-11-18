#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DEJICIEAOFB;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_CEAFLHDFOGA_FLAHLJCMKME_OFFSET UNITYSDK_OFFSET(0x1403D2A0)
#define LPJHHHCOLMO_CEAFLHDFOGA_IAODEJBCOJD_OFFSET UNITYSDK_OFFSET(0x1403D230)
#define LPJHHHCOLMO_CEAFLHDFOGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1403D220)

inline static constexpr unsigned int LPJHHHCOLMO_CEAFLHDFOGA_TypeDefinitionIndex = 46633;

class LPJHHHCOLMO_CEAFLHDFOGA : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::DEJICIEAOFB*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_CEAFLHDFOGA__CTOR_OFFSET))(this);
	}

	::System::Void IAODEJBCOJD(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_CEAFLHDFOGA_IAODEJBCOJD_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void FLAHLJCMKME(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_CEAFLHDFOGA_FLAHLJCMKME_OFFSET))(this, DJCNCELJPOM);
	}
};
