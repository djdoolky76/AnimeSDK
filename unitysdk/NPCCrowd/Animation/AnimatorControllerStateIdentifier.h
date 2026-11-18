#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x67E960)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER_GET_ISMULTIPLE_OFFSET UNITYSDK_OFFSET(0x67E890)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x67E7D0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x67E950)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x114C7D60)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerStateIdentifier_TypeDefinitionIndex = 45513;

	struct alignas(4) AnimatorControllerStateIdentifier
	{
		static ::NPCCrowd::Animation::AnimatorControllerStateIdentifier* StaticGet_Null()
		{
			return (::NPCCrowd::Animation::AnimatorControllerStateIdentifier*)Il2CppClass::FromTypeDefinitionIndex(AnimatorControllerStateIdentifier_TypeDefinitionIndex)->GetStaticField(0xECE0);
		}
		static ::NPCCrowd::Animation::AnimatorControllerStateIdentifier* StaticGet_Multiple()
		{
			return (::NPCCrowd::Animation::AnimatorControllerStateIdentifier*)Il2CppClass::FromTypeDefinitionIndex(AnimatorControllerStateIdentifier_TypeDefinitionIndex)->GetStaticField(0xECE8);
		}
		::System::Int32 layerIndex; // 0x10
		::System::Int32 stateHash; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsMultiple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER_GET_ISMULTIPLE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER_GET_ISVALID_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::NPCCrowd::Animation::AnimatorControllerStateIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimatorControllerStateIdentifier))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERSTATEIDENTIFIER_EQUALS_OFFSET))(this, other);
		}
		*/
	};
}
