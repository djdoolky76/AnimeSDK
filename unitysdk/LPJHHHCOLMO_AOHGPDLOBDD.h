#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILJGJDOLDOP;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_AOHGPDLOBDD_BHENDPHFHBD_OFFSET UNITYSDK_OFFSET(0x12D4B8D0)
#define LPJHHHCOLMO_AOHGPDLOBDD_NEHKMKOLHIF_OFFSET UNITYSDK_OFFSET(0x12D4B940)
#define LPJHHHCOLMO_AOHGPDLOBDD__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4B8C0)

inline static constexpr unsigned int LPJHHHCOLMO_AOHGPDLOBDD_TypeDefinitionIndex = 46631;

class LPJHHHCOLMO_AOHGPDLOBDD : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::ILJGJDOLDOP*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_AOHGPDLOBDD__CTOR_OFFSET))(this);
	}

	::System::Void BHENDPHFHBD(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_AOHGPDLOBDD_BHENDPHFHBD_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void NEHKMKOLHIF(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_AOHGPDLOBDD_NEHKMKOLHIF_OFFSET))(this, DJCNCELJPOM);
	}
};
