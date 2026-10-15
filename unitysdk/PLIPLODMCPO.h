#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOBNNLAEHCO;
namespace RPG::GameCore { class FiveDimGravityFieldRingConfig; }

#define PLIPLODMCPO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9C8060)
#define PLIPLODMCPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C80C0)

inline static constexpr unsigned int PLIPLODMCPO_TypeDefinitionIndex = 43512;

	class PLIPLODMCPO : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimGravityFieldRingConfig* EABKOHGCHFP; // 0x10
		::JOBNNLAEHCO* BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIPLODMCPO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIPLODMCPO_CLEAR_OFFSET))(this);
		}

	};
