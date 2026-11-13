#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA.h"
class HCHMHEGBGGH;
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define MDGMEFEJHPL_CTOR_OFFSET UNITYSDK_OFFSET(0x183DD250)
#define MDGMEFEJHPL_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x183DD3A0)
#define MDGMEFEJHPL_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x183DD440)
#define MDGMEFEJHPL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x183DD260)
#define MDGMEFEJHPL_OGDLIONGCMP_OFFSET UNITYSDK_OFFSET(0x183DD2F0)

inline static constexpr unsigned int MDGMEFEJHPL_TypeDefinitionIndex = 75975;

	class MDGMEFEJHPL : public ::HPKACEPPPCA
	{
	public:
		::HCHMHEGBGGH* IHGJDKBPBHC; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGMEFEJHPL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + MDGMEFEJHPL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void OGDLIONGCMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGMEFEJHPL_OGDLIONGCMP_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDGMEFEJHPL_KGJAMKFPOAB_OFFSET))(this, a1);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGMEFEJHPL_KJMDJMBNCPE_OFFSET))(this);
		}

	};
