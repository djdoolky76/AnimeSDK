#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKKBJHGPLNF;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_MNKMKNIHOLC_DINMALKPMKA_OFFSET UNITYSDK_OFFSET(0x15909700)
#define LPJHHHCOLMO_MNKMKNIHOLC_FJFLICEGNGH_OFFSET UNITYSDK_OFFSET(0x15909690)
#define LPJHHHCOLMO_MNKMKNIHOLC__CTOR_OFFSET UNITYSDK_OFFSET(0x15909680)

inline static constexpr unsigned int LPJHHHCOLMO_MNKMKNIHOLC_TypeDefinitionIndex = 46646;

class LPJHHHCOLMO_MNKMKNIHOLC : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::JKKBJHGPLNF*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_MNKMKNIHOLC__CTOR_OFFSET))(this);
	}

	::System::Void FJFLICEGNGH(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_MNKMKNIHOLC_FJFLICEGNGH_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void DINMALKPMKA(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_MNKMKNIHOLC_DINMALKPMKA_OFFSET))(this, DJCNCELJPOM);
	}
};
