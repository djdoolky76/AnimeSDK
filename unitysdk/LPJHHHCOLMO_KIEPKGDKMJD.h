#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIPBNHIMABA;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_KIEPKGDKMJD_DFEDOAOKDIB_OFFSET UNITYSDK_OFFSET(0x15909630)
#define LPJHHHCOLMO_KIEPKGDKMJD_OOPMKPBAOLE_OFFSET UNITYSDK_OFFSET(0x159095C0)
#define LPJHHHCOLMO_KIEPKGDKMJD__CTOR_OFFSET UNITYSDK_OFFSET(0x159095B0)

inline static constexpr unsigned int LPJHHHCOLMO_KIEPKGDKMJD_TypeDefinitionIndex = 46624;

class LPJHHHCOLMO_KIEPKGDKMJD : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::KIPBNHIMABA*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_KIEPKGDKMJD__CTOR_OFFSET))(this);
	}

	::System::Void OOPMKPBAOLE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_KIEPKGDKMJD_OOPMKPBAOLE_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DFEDOAOKDIB(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_KIEPKGDKMJD_DFEDOAOKDIB_OFFSET))(this, DJCNCELJPOM);
	}
};
