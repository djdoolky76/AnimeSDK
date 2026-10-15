#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFLDPIEPAE;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterListConfig; }

#define IMBAEINKENC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB78550)
#define IMBAEINKENC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB785D0)

inline static constexpr unsigned int IMBAEINKENC_TypeDefinitionIndex = 43311;

	class IMBAEINKENC : public ::System::Object
	{
	public:
		::EKFLDPIEPAE* CNLHCKELLBE; // 0x10
		::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBAEINKENC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBAEINKENC_CLEAR_OFFSET))(this);
		}

	};
