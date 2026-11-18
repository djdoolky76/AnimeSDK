#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define JBMAINKENIB_CJDGNJIPNPA_OFFSET UNITYSDK_OFFSET(0x1ACCB670)
#define JBMAINKENIB_DJCJEJIOMAP_OFFSET UNITYSDK_OFFSET(0x1ACCB6D0)

inline static constexpr unsigned int JBMAINKENIB_TypeDefinitionIndex = 69123;

class JBMAINKENIB : public ::System::Object
{
public:
	static ::System::String* CJDGNJIPNPA()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + JBMAINKENIB_CJDGNJIPNPA_OFFSET))();
	}

	static ::System::Boolean DJCJEJIOMAP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBMAINKENIB_DJCJEJIOMAP_OFFSET))();
	}
};
