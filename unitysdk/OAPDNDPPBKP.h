#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
namespace RPG::GameCore { class AnchorInfo; }

#define OAPDNDPPBKP_CTOR_OFFSET UNITYSDK_OFFSET(0x3E6A9D0)
#define OAPDNDPPBKP_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define OAPDNDPPBKP_GET_BLENDTIME_OFFSET UNITYSDK_OFFSET(0xFDD0D0)
#define OAPDNDPPBKP_GET_BLENDTYPE_OFFSET UNITYSDK_OFFSET(0xC8F0)

inline static constexpr unsigned int OAPDNDPPBKP_TypeDefinitionIndex = 81558;

	struct alignas(8) OAPDNDPPBKP
	{
		::RPG::GameCore::AnchorInfo* _Anchor_k__BackingField; // 0x10
		::RPG::GameCore::VCameraBlendType _BlendType_k__BackingField; // 0x18
		::System::Single _BlendTime_k__BackingField; // 0x1C
		::System::Void _ctor(::RPG::GameCore::AnchorInfo* a1, ::RPG::GameCore::VCameraBlendType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*, ::RPG::GameCore::VCameraBlendType, ::System::Single))((::PBYTE)hIl2Cpp + OAPDNDPPBKP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AnchorInfo* get_Anchor()
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPDNDPPBKP_GET_ANCHOR_OFFSET))(this);
		}

		::RPG::GameCore::VCameraBlendType get_BlendType()
		{
			return ((::RPG::GameCore::VCameraBlendType(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPDNDPPBKP_GET_BLENDTYPE_OFFSET))(this);
		}

		::System::Single get_BlendTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPDNDPPBKP_GET_BLENDTIME_OFFSET))(this);
		}

	};
