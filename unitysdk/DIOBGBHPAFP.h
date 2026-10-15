#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define DIOBGBHPAFP_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xF2248A0)
#define DIOBGBHPAFP_CTOR_OFFSET UNITYSDK_OFFSET(0xF224F10)

inline static constexpr unsigned int DIOBGBHPAFP_TypeDefinitionIndex = 82160;

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
