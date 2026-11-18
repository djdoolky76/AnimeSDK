#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"

namespace System { class Object; }

#define ROOTMOTION_FINALIK_AMPLIFIER_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1F7DC4E0)
#define ROOTMOTION_FINALIK_AMPLIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7DC680)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Amplifier_TypeDefinitionIndex = 36988;

	class Amplifier : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::Il2CppArray<::System::Object*>* bodies; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER__CTOR_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER_ONMODIFYOFFSET_OFFSET))(this);
		}
	};
}
