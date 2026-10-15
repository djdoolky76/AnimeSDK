#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;

#define LGOMFCCFGFF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB696DA0)
#define LGOMFCCFGFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB696E70)

inline static constexpr unsigned int LGOMFCCFGFF_TypeDefinitionIndex = 80083;

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
