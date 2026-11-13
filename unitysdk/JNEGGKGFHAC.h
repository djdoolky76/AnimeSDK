#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABNAJNBCHNL.h"
class EAGPPDDBBIM;

#define JNEGGKGFHAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C3EC0)
#define JNEGGKGFHAC_OPGAAFBOAAG_OFFSET UNITYSDK_OFFSET(0x1A0C3ED0)

inline static constexpr unsigned int JNEGGKGFHAC_TypeDefinitionIndex = 80061;

	class JNEGGKGFHAC : public ::ABNAJNBCHNL
	{
	public:
		::System::Void _ctor(::EAGPPDDBBIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAGPPDDBBIM*))((::PBYTE)hIl2Cpp + JNEGGKGFHAC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean OPGAAFBOAAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEGGKGFHAC_OPGAAFBOAAG_OFFSET))(this);
		}

	};
