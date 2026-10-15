#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TargetTypeInferResult.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define EEPJKPJLMKJ_DIPDAPGAIPN_1_OFFSET UNITYSDK_OFFSET(0x13A42440)
#define EEPJKPJLMKJ_DIPDAPGAIPN_OFFSET UNITYSDK_OFFSET(0x13A423B0)
#define EEPJKPJLMKJ_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x13A42360)

inline static constexpr unsigned int EEPJKPJLMKJ_TypeDefinitionIndex = 59666;

	class EEPJKPJLMKJ : public ::System::Object
	{
	public:
		static ::System::Boolean GNADABFLEFM(::RPG::Client::TargetTypeInferResult a1, ::RPG::Client::TargetTypeInferResult a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TargetTypeInferResult, ::RPG::Client::TargetTypeInferResult))((::PBYTE)hIl2Cpp + EEPJKPJLMKJ_GNADABFLEFM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TargetTypeInferResult DIPDAPGAIPN(::RPG::GameCore::TargetEvaluator* a1)
		{
			return ((::RPG::Client::TargetTypeInferResult(*)(::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + EEPJKPJLMKJ_DIPDAPGAIPN_OFFSET))(a1);
		}

		static ::RPG::Client::TargetTypeInferResult DIPDAPGAIPN_1(::System::String* a1)
		{
			return ((::RPG::Client::TargetTypeInferResult(*)(::System::String*))((::PBYTE)hIl2Cpp + EEPJKPJLMKJ_DIPDAPGAIPN_1_OFFSET))(a1);
		}

	};
