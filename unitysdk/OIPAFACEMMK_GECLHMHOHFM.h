#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OIPAFACEMMK_GECLHMHOHFM_CHFNENELHMA_OFFSET UNITYSDK_OFFSET(0x14F86A60)
#define OIPAFACEMMK_GECLHMHOHFM_DLGGKLFICIJ_OFFSET UNITYSDK_OFFSET(0x14F86AB0)
#define OIPAFACEMMK_GECLHMHOHFM__CTOR_OFFSET UNITYSDK_OFFSET(0x14F86A50)

inline static constexpr unsigned int OIPAFACEMMK_GECLHMHOHFM_TypeDefinitionIndex = 40828;

class OIPAFACEMMK_GECLHMHOHFM : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* KJEGEDODKCE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_GECLHMHOHFM__CTOR_OFFSET))(this);
	}

	::System::Void CHFNENELHMA(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_GECLHMHOHFM_CHFNENELHMA_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void DLGGKLFICIJ(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_GECLHMHOHFM_DLGGKLFICIJ_OFFSET))(this, DJCNCELJPOM);
	}
};
