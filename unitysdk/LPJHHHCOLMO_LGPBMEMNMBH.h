#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIAEJGNHIEC;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_LGPBMEMNMBH_BJKLCGAGHJI_OFFSET UNITYSDK_OFFSET(0x12D4BA30)
#define LPJHHHCOLMO_LGPBMEMNMBH_DJFIGLAKAFE_OFFSET UNITYSDK_OFFSET(0x12D4B9C0)
#define LPJHHHCOLMO_LGPBMEMNMBH__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4B9B0)

inline static constexpr unsigned int LPJHHHCOLMO_LGPBMEMNMBH_TypeDefinitionIndex = 46643;

class LPJHHHCOLMO_LGPBMEMNMBH : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::HIAEJGNHIEC*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_LGPBMEMNMBH__CTOR_OFFSET))(this);
	}

	::System::Void DJFIGLAKAFE(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_LGPBMEMNMBH_DJFIGLAKAFE_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void BJKLCGAGHJI(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_LGPBMEMNMBH_BJKLCGAGHJI_OFFSET))(this, DJCNCELJPOM);
	}
};
