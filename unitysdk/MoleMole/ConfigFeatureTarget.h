#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FeatureTargetExtraInfo.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIGFEATURETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1642DB80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigFeatureTarget_TypeDefinitionIndex = 70645;

	class ConfigFeatureTarget : public ::System::Object
	{
	public:
		::MoleMole::GameplayTag targetTag; // 0x10
		::UnityEngine::Transform* parent; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::FeatureTargetExtraInfo>* ExtraInfoDict; // 0x28
		::System::Boolean defaultEnable; // 0x30
		::System::Boolean enableAsHudFollow; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single colliderRadius; // 0x34
		::System::Boolean overrideColliderRadius; // 0x38

		::System::Void _ctor(::MoleMole::GameplayTag AELLPLBJELA, ::UnityEngine::Transform* GKDOFHMDKHA, ::System::Boolean PBEHPKPFFHD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGFEATURETARGET__CTOR_OFFSET))(this, AELLPLBJELA, GKDOFHMDKHA, PBEHPKPFFHD);
		}
	};
}
