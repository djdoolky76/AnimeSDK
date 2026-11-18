#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"

namespace System { class Object; }

#define ROOTMOTION_FINALIK_INERTIA_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1FE322A0)
#define ROOTMOTION_FINALIK_INERTIA_RESETBODIES_OFFSET UNITYSDK_OFFSET(0x1FE32220)
#define ROOTMOTION_FINALIK_INERTIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE32360)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Inertia_TypeDefinitionIndex = 36817;

	class Inertia : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::Il2CppArray<::System::Object*>* bodies; // 0x30
		::Il2CppArray<::System::Object*>* limits; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INERTIA__CTOR_OFFSET))(this);
		}

		::System::Void ResetBodies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INERTIA_RESETBODIES_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INERTIA_ONMODIFYOFFSET_OFFSET))(this);
		}
	};
}
