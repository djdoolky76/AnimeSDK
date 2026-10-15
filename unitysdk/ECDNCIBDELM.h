#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateEmergentBroadcastConditionType.h"
#include "unitysdk/System/Object.h"
class FPKNBOLOOJM;
namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define ECDNCIBDELM_EAGMKDOAOJF_OFFSET UNITYSDK_OFFSET(0x12D0AC20)
#define ECDNCIBDELM_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x12D0AAB0)

inline static constexpr unsigned int ECDNCIBDELM_TypeDefinitionIndex = 63993;

	class ECDNCIBDELM : public ::System::Object
	{
	public:
		static ::System::Boolean JJNFOPNOPBF(::RPG::GameCore::FateEmergentBroadcastConditionType a1, ::Il2CppArray<::System::String*>* a2, ::RPG::Client::FateGameData* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateEmergentBroadcastConditionType, ::Il2CppArray<::System::String*>*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + ECDNCIBDELM_JJNFOPNOPBF_OFFSET))(a1, a2, a3);
		}

		static ::FPKNBOLOOJM* EAGMKDOAOJF(::RPG::GameCore::FateEmergentBroadcastConditionType a1)
		{
			return ((::FPKNBOLOOJM*(*)(::RPG::GameCore::FateEmergentBroadcastConditionType))((::PBYTE)hIl2Cpp + ECDNCIBDELM_EAGMKDOAOJF_OFFSET))(a1);
		}

	};
