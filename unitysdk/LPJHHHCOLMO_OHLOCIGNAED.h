#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ACDJLNMKOHE;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_OHLOCIGNAED_GIAHMIJNPKB_OFFSET UNITYSDK_OFFSET(0xD43FD50)
#define LPJHHHCOLMO_OHLOCIGNAED_MCOFCKLMEIH_OFFSET UNITYSDK_OFFSET(0xD43FDC0)
#define LPJHHHCOLMO_OHLOCIGNAED__CTOR_OFFSET UNITYSDK_OFFSET(0xD43FD40)

inline static constexpr unsigned int LPJHHHCOLMO_OHLOCIGNAED_TypeDefinitionIndex = 46622;

class LPJHHHCOLMO_OHLOCIGNAED : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::ACDJLNMKOHE*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_OHLOCIGNAED__CTOR_OFFSET))(this);
	}

	::System::Void GIAHMIJNPKB(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_OHLOCIGNAED_GIAHMIJNPKB_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void MCOFCKLMEIH(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_OHLOCIGNAED_MCOFCKLMEIH_OFFSET))(this, DJCNCELJPOM);
	}
};
