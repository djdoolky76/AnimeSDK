#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTION3C__CTOR_OFFSET UNITYSDK_OFFSET(0x190A8610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeleportSelection3C_TypeDefinitionIndex = 39618;

	class ConfigTeleportSelection3C : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigPosRot* SwitchInPosRot; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* AnimatorTagBlacklist; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* BlockColliderTags; // 0x20
		::System::String* BlockRayEndPoint; // 0x28
		::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>* BlockColliderLayers; // 0x30
		::System::String* CandidateCustomTargetKey; // 0x38
		::System::String* ButtonIconPath; // 0x40
		::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>* CandidateEntityTypes; // 0x48
		::System::String* BlockRayStartPoint; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* GrappleAnimatorTags; // 0x58
		::System::Single DistanceCheckThreshold; // 0x60
		::System::Int32 RescanTickInterval; // 0x64
		::System::Single GrappleHiddenDistance; // 0x68
		::System::Int32 MaxShowIconNum; // 0x6C
		::System::Single MajorAxisLength; // 0x70
		::System::Single MinorAxisLength; // 0x74
		::System::Single GrappleInteractDistance; // 0x78
		::UnityEngine::Vector3 BlockRayStartPointOffset; // 0x7C
		::System::Single GrappleInteractAngle; // 0x88
		::System::Int32 SwitchInIndex; // 0x8C
		::System::Single GrapplePreInteractDistance; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTION3C__CTOR_OFFSET))(this);
		}
	};
}
