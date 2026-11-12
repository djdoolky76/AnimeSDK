#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OFPMAOGICKP_CTOR_OFFSET UNITYSDK_OFFSET(0xC707A60)
#define OFPMAOGICKP_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0xC7079C0)

inline static constexpr unsigned int OFPMAOGICKP_TypeDefinitionIndex = 64092;

	class OFPMAOGICKP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPMAOGICKP_CTOR_OFFSET))(this);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPMAOGICKP_EEBLEFFIHBP_OFFSET))(this);
		}

	};
