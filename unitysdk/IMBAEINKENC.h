#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFLDPIEPAE;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterListConfig; }

#define IMBAEINKENC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EC37080)
#define IMBAEINKENC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC37100)

inline static constexpr unsigned int IMBAEINKENC_TypeDefinitionIndex = 44292;

	class IMBAEINKENC : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* EABKOHGCHFP; // 0x10
		::EKFLDPIEPAE* CNLHCKELLBE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBAEINKENC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBAEINKENC_CLEAR_OFFSET))(this);
		}

	};
