#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;

#define LGOMFCCFGFF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1BCAEA10)
#define LGOMFCCFGFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCAEAD0)

inline static constexpr unsigned int LGOMFCCFGFF_TypeDefinitionIndex = 82860;

	class LGOMFCCFGFF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOMFCCFGFF_CTOR_OFFSET))(this);
		}

		::BCFAKEGJPKN* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::BCFAKEGJPKN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGOMFCCFGFF_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
