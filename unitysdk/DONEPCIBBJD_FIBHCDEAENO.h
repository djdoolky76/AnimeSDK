#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOBHNPJIENI;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define DONEPCIBBJD_FIBHCDEAENO_FBLIIMCGAKG_OFFSET UNITYSDK_OFFSET(0x10F18440)
#define DONEPCIBBJD_FIBHCDEAENO_OKABJMCCDOE_OFFSET UNITYSDK_OFFSET(0x10F18220)
#define DONEPCIBBJD_FIBHCDEAENO__CTOR_OFFSET UNITYSDK_OFFSET(0x10F18210)

inline static constexpr unsigned int DONEPCIBBJD_FIBHCDEAENO_TypeDefinitionIndex = 40185;

class DONEPCIBBJD_FIBHCDEAENO : public ::System::Object
{
public:
	::System::Action_1<::NOBHNPJIENI*>* LJFKEJMODMK; // 0x10
	::System::Action_1<::NOBHNPJIENI*>* DMPEOJCCCLO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONEPCIBBJD_FIBHCDEAENO__CTOR_OFFSET))(this);
	}

	::System::Void OKABJMCCDOE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DONEPCIBBJD_FIBHCDEAENO_OKABJMCCDOE_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void FBLIIMCGAKG(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DONEPCIBBJD_FIBHCDEAENO_FBLIIMCGAKG_OFFSET))(this, GLAOEHCGCFO);
	}
};
