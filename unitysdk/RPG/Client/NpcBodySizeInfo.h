#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AssemNPCColliderInfo; }
namespace RPG::Client { class AssemblyNPCAttachPointInfo; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_NPCBODYSIZEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD9D2830)
#define RPG_CLIENT_NPCBODYSIZEINFO_KEPMMNCIGDK_OFFSET UNITYSDK_OFFSET(0xD9D26A0)

namespace RPG::Client
{
	inline static constexpr unsigned int NpcBodySizeInfo_TypeDefinitionIndex = 60048;

	class NpcBodySizeInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::NPCBodySize BodySize; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::AssemNPCColliderInfo* ColliderInfo; // 0x18
		::Il2CppArray<::RPG::Client::AssemblyNPCAttachPointInfo*>* AttachPoints; // 0x20
		::System::String* BodySizeComment; // 0x28
		::System::String* AnimationPath; // 0x30
		::System::Single Scale; // 0x38
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* MoveCurve00; // 0x40
		::UnityEngine::AnimationCurve* MoveCurve01; // 0x48
		::System::Single UpStairLerpRaito; // 0x50
		::System::Single DownStairLerpRatio; // 0x54
		::System::Single NameBoardOffsetY; // 0x58
		::System::Byte _padding2[0x4];
		::UnityEngine::GameObject* CapsuleOcclusionPreset; // 0x60
		::System::String* FreeStyleCharacterID; // 0x68
		::System::String* FreeStyleCharacterConfigPath; // 0x70
		::System::Int32 WalkStyleCount; // 0x78
		::System::Byte _padding3[0x4];
		::Il2CppArray<::System::Single>* WalkStyleWeights; // 0x80
		::System::Single _sumWeight; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCBODYSIZEINFO_CTOR_OFFSET))(this);
		}

		::System::Int32 KEPMMNCIGDK(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCBODYSIZEINFO_KEPMMNCIGDK_OFFSET))(this, a1);
		}

	};
}
