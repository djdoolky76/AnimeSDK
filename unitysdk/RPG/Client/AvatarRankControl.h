#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarRankControl_ShowAvatarType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AVATARRANKCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD06FC70)
#define RPG_CLIENT_AVATARRANKCONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD06F090)
#define RPG_CLIENT_AVATARRANKCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD06EEE0)
#define RPG_CLIENT_AVATARRANKCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD06EF30)
#define RPG_CLIENT_AVATARRANKCONTROL_SETDLCRANKACTIVE_OFFSET UNITYSDK_OFFSET(0xD06E860)
#define RPG_CLIENT_AVATARRANKCONTROL_SETDLCRANKTEXTURE_OFFSET UNITYSDK_OFFSET(0xD06E8E0)
#define RPG_CLIENT_AVATARRANKCONTROL_SETRANKTEXTURES_OFFSET UNITYSDK_OFFSET(0xD06EAC0)
#define RPG_CLIENT_AVATARRANKCONTROL__RELEASEEXRANKTEXTURE_OFFSET UNITYSDK_OFFSET(0xD06EA60)
#define RPG_CLIENT_AVATARRANKCONTROL__RELEASETEXTUREASSET_OFFSET UNITYSDK_OFFSET(0xD06ECA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRankControl_TypeDefinitionIndex = 73021;

	class AvatarRankControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean waveUpdate; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::AnimationCurve* waveCurve; // 0x20
		::System::Single waveAmplititude; // 0x28
		::System::Single waveSpeed; // 0x2C
		::Il2CppArray<::UnityEngine::Renderer*>* avatarRankGlasses; // 0x30
		::Il2CppArray<::UnityEngine::Transform*>* avatarRankLights; // 0x38
		::UnityEngine::Renderer* dlcGlass; // 0x40
		::UnityEngine::Material* dlcGlassActiveMaterial; // 0x48
		::UnityEngine::Material* dlcGlassInactiveMaterial; // 0x50
		::Il2CppArray<::UnityEngine::Transform*>* moveTragets; // 0x58
		::UnityEngine::Color diffuseTint; // 0x60
		::UnityEngine::Color specularColor; // 0x70
		::UnityEngine::Color lightColor; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* originPositions; // 0x90
		::System::Boolean showHideAvatar; // 0x98
		::System::Boolean enterAvatarRank; // 0x99
		::System::Boolean unlockGlass; // 0x9A
		::System::Boolean unlockRankSix; // 0x9B
		::System::Boolean showAvatar; // 0x9C
		::System::Boolean hideAvatar; // 0x9D
		::System::Boolean moveGalss; // 0x9E
		::System::Byte _padding1[0x1];
		::RPG::Client::AvatarRankControl_ShowAvatarType showAvatarType; // 0xA0
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* dissolveCenterStart; // 0xA8
		::UnityEngine::Transform* dissolveCenterEnd; // 0xB0
		::UnityEngine::Transform* dissolveDir; // 0xB8
		::System::Single traverseProgress; // 0xC0
		::System::Single ditherValue; // 0xC4
		::System::Single moveTargetRatio; // 0xC8
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* glassMoveCurve; // 0xD0
		::System::Single glassMoveDuration; // 0xD8
		::System::Single showAvatarDuration; // 0xDC
		::UnityEngine::GameObject* avatarToShow; // 0xE0
		::UnityEngine::Renderer* glassToUnlock; // 0xE8
		::Il2CppArray<::UnityEngine::Texture*>* _AvatarRankTextures; // 0xF0
		::UnityEngine::Texture* _AvatarExRankTexture; // 0xF8
		::Il2CppArray<::System::String*>* effectObjectNames; // 0x100
		::Il2CppArray<::System::String*>* glassObjectNames; // 0x108
		::Il2CppArray<::UnityEngine::Transform*>* effectTransforms; // 0x110
		::Il2CppArray<::UnityEngine::Transform*>* glassTransforms; // 0x118
		::System::Boolean firstTime; // 0x120
		::System::Byte _padding4[0x3];
		::System::Int32 _AvatarTexID; // 0x124
		::System::Int32 _LightDirID; // 0x128
		// static const ::System::Object _MAX_RANK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void SetDLCRankActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_SETDLCRANKACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetDLCRankTexture(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_SETDLCRANKTEXTURE_OFFSET))(this, a1);
		}

		::System::Void SetRankTextures(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_SETRANKTEXTURES_OFFSET))(this, a1);
		}

		::System::Void _ReleaseTextureAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL__RELEASETEXTUREASSET_OFFSET))(this);
		}

		::System::Void _ReleaseExRankTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL__RELEASEEXRANKTEXTURE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKCONTROL_LATEUPDATE_OFFSET))(this);
		}

	};
}
