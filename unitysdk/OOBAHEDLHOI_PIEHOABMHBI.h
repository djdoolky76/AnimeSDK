#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OOBAHEDLHOI_PIEHOABMHBI_ODAPFNIFPKM_OFFSET UNITYSDK_OFFSET(0x11B4B760)
#define OOBAHEDLHOI_PIEHOABMHBI__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4B750)

inline static constexpr unsigned int OOBAHEDLHOI_PIEHOABMHBI_TypeDefinitionIndex = 75537;

class OOBAHEDLHOI_PIEHOABMHBI : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_PIEHOABMHBI__CTOR_OFFSET))(this);
	}

	::System::Void ODAPFNIFPKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_PIEHOABMHBI_ODAPFNIFPKM_OFFSET))(this);
	}
};
