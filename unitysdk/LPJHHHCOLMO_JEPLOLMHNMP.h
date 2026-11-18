#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNBOFBNDHFO;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_JEPLOLMHNMP_BGJJPGNCIHE_OFFSET UNITYSDK_OFFSET(0xD43FC60)
#define LPJHHHCOLMO_JEPLOLMHNMP_LCNIHKLFICD_OFFSET UNITYSDK_OFFSET(0xD43FCD0)
#define LPJHHHCOLMO_JEPLOLMHNMP__CTOR_OFFSET UNITYSDK_OFFSET(0xD43FC50)

inline static constexpr unsigned int LPJHHHCOLMO_JEPLOLMHNMP_TypeDefinitionIndex = 46626;

class LPJHHHCOLMO_JEPLOLMHNMP : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::BNBOFBNDHFO*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_JEPLOLMHNMP__CTOR_OFFSET))(this);
	}

	::System::Void BGJJPGNCIHE(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_JEPLOLMHNMP_BGJJPGNCIHE_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void LCNIHKLFICD(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_JEPLOLMHNMP_LCNIHKLFICD_OFFSET))(this, DJCNCELJPOM);
	}
};
