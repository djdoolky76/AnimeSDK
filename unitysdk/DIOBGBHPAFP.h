#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define DIOBGBHPAFP_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x18EDA1B0)
#define DIOBGBHPAFP_CTOR_OFFSET UNITYSDK_OFFSET(0x18EDA820)

inline static constexpr unsigned int DIOBGBHPAFP_TypeDefinitionIndex = 85032;

	class DIOBGBHPAFP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOBGBHPAFP_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + DIOBGBHPAFP_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
