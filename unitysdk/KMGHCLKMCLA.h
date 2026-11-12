#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GACEPNEKIAI.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimSpikeConfig; }

#define KMGHCLKMCLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB4C30)

inline static constexpr unsigned int KMGHCLKMCLA_TypeDefinitionIndex = 44453;

	class KMGHCLKMCLA : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimSpikeConfig* EABKOHGCHFP; // 0x10
		::GACEPNEKIAI BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGHCLKMCLA_CTOR_OFFSET))(this);
		}

	};
