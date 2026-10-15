#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }

#define BLBGBBCKGBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BC3E0)

inline static constexpr unsigned int BLBGBBCKGBN_TypeDefinitionIndex = 43310;

	class BLBGBBCKGBN : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimTriggerEventEmitterConfig* EABKOHGCHFP; // 0x10
		::System::Int32 IPNDHJDECDM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBGBBCKGBN_CTOR_OFFSET))(this);
		}

	};
