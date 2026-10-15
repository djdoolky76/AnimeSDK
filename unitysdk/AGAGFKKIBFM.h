#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIICFLJFNFC.h"
#include "unitysdk/System/Object.h"

#define AGAGFKKIBFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C853750)

inline static constexpr unsigned int AGAGFKKIBFM_TypeDefinitionIndex = 43331;

	class AGAGFKKIBFM : public ::System::Object
	{
	public:
		::BIICFLJFNFC GFGCKPBIONK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGFKKIBFM_CTOR_OFFSET))(this);
		}

	};
