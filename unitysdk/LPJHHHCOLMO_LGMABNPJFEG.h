#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LJPACNDLJMC;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_LGMABNPJFEG_EKMPDIMAPCD_OFFSET UNITYSDK_OFFSET(0x151B8F10)
#define LPJHHHCOLMO_LGMABNPJFEG_FBNMDAJKFMK_OFFSET UNITYSDK_OFFSET(0x151B8F80)
#define LPJHHHCOLMO_LGMABNPJFEG__CTOR_OFFSET UNITYSDK_OFFSET(0x151B8F00)

inline static constexpr unsigned int LPJHHHCOLMO_LGMABNPJFEG_TypeDefinitionIndex = 46635;

class LPJHHHCOLMO_LGMABNPJFEG : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::LJPACNDLJMC*>* NGJOOELCMPD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_LGMABNPJFEG__CTOR_OFFSET))(this);
	}

	::System::Void EKMPDIMAPCD(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_LGMABNPJFEG_EKMPDIMAPCD_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void FBNMDAJKFMK(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_LGMABNPJFEG_FBNMDAJKFMK_OFFSET))(this, DJCNCELJPOM);
	}
};
