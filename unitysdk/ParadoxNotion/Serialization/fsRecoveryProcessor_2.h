#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsObjectProcessor.h"

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int fsRecoveryProcessor_2_TypeDefinitionIndex = 30073;

	template <typename T1, typename T2>
	class fsRecoveryProcessor_2 : public ::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor
	{
	public:
		// static const ::System::String* FIELD_NAME_TYPE; // 0x0
		// static const ::System::String* FIELD_NAME_STATE; // 0x0
	};
}
