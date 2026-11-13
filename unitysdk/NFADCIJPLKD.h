#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NFADCIJPLKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C28D790)

inline static constexpr unsigned int NFADCIJPLKD_TypeDefinitionIndex = 43951;

	class NFADCIJPLKD : public ::System::Object
	{
	public:
		::System::Single DGLGPLADDFB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFADCIJPLKD_CTOR_OFFSET))(this);
		}

	};
