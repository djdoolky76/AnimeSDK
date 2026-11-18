#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"

namespace System { class Object; }

#define ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1FC4E560)
#define ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4E5E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int PenetrationAvoidance_TypeDefinitionIndex = 36956;

	class PenetrationAvoidance : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::Il2CppArray<::System::Object*>* avoiders; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE__CTOR_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_ONMODIFYOFFSET_OFFSET))(this);
		}
	};
}
