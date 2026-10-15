#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_CHARACTERDISSOLVE_CTOR_OFFSET UNITYSDK_OFFSET(0xC9C7B20)
#define RPG_CLIENT_CHARACTERDISSOLVE_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xC9C7AD0)

namespace RPG::Client
{
	class CharacterDissolve
	{
	public:
		::Il2CppArray<::System::Int32>* TargetMatIndexes; // 0x30
		::System::Boolean _EnableDissolve; // 0x38
		::System::Boolean Toggle_DissolveMap; // 0x39
		::System::Byte _padding0[0x6];
		::UnityEngine::Texture2D* _DissolveMap; // 0x40
		::System::Boolean Toggle_DissolveST; // 0x48
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector4 _DissolveST; // 0x4C
		::System::Boolean Toggle_DistortionST; // 0x5C
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector4 _DistortionST; // 0x60
		::System::Boolean Toggle_DissolveRate; // 0x70
		::System::Byte _padding3[0x3];
		::System::Single _DissolveRate; // 0x74
		::System::Boolean Toggle_DissolveUV; // 0x78
		::System::Byte _padding4[0x3];
		::System::Single _DissolveUV; // 0x7C
		::System::Boolean Toggle_DissolveDistortionIntensity; // 0x80
		::System::Byte _padding5[0x3];
		::System::Single _DissolveDistortionIntensity; // 0x84
		::System::Boolean Toggle_DissolveOutlineSize1; // 0x88
		::System::Byte _padding6[0x3];
		::System::Single _DissolveOutlineSize1; // 0x8C
		::System::Boolean Toggle_DissolveOutlineSize2; // 0x90
		::System::Byte _padding7[0x3];
		::System::Single _DissolveOutlineSize2; // 0x94
		::System::Boolean Toggle_DissolveOutlineEmission; // 0x98
		::System::Byte _padding8[0x3];
		::System::Single _DissolveOutlineEmission; // 0x9C
		::System::Boolean Toggle_DissolveMapAdd; // 0xA0
		::System::Byte _padding9[0x3];
		::System::Single _DissolveMapAdd; // 0xA4
		::System::Boolean Toggle_DissolveOutlineColor1; // 0xA8
		::System::Byte _padding10[0x3];
		::UnityEngine::Color _DissolveOutlineColor1; // 0xAC
		::System::Boolean Toggle_DissolveOutlineColor2; // 0xBC
		::System::Byte _padding11[0x3];
		::UnityEngine::Color _DissolveOutlineColor2; // 0xC0
		::System::Boolean Toggle_DissoveDirecMask; // 0xD0
		::System::Byte _padding12[0x3];
		::System::Single _DissoveDirecMask; // 0xD4
		::System::Boolean Toggle_DissolveUVSpeed; // 0xD8
		::System::Byte _padding13[0x3];
		::UnityEngine::Vector4 _DissolveUVSpeed; // 0xDC
		::System::Boolean Toggle_DissolveOutlineSmoothStep; // 0xEC
		::System::Byte _padding14[0x3];
		::UnityEngine::Vector2 _DissolveOutlineSmoothStep; // 0xF0
		::System::Boolean Toggle_DissolveMask; // 0xF8
		::System::Byte _padding15[0x7];
		::UnityEngine::Texture2D* _DissolveMask; // 0x100
		::System::Boolean Toggle_DissolveMaskUVSet; // 0x108
		::System::Byte _padding16[0x3];
		::System::Single _DissolveMaskUVSet; // 0x10C
		::System::Boolean Toggle_DissolveComponent; // 0x110
		::System::Byte _padding17[0x3];
		::UnityEngine::Vector4 _DissolveComponent; // 0x114
		::System::Boolean Toggle_DissolvePosMaskOn; // 0x124
		::System::Byte _padding18[0x3];
		::System::Single _DissolvePosMaskOn; // 0x128
		::System::Boolean Toggle_DissolvePosMaskWorldON; // 0x12C
		::System::Byte _padding19[0x3];
		::System::Single _DissolvePosMaskWorldON; // 0x130
		::System::Boolean Toggle_DissolvePosMaskFilpOn; // 0x134
		::System::Byte _padding20[0x3];
		::System::Single _DissolvePosMaskFilpOn; // 0x138
		::System::Boolean Toggle_DissolvePosMaskRootOffset; // 0x13C
		::System::Byte _padding21[0x3];
		::UnityEngine::Vector3 _DissolvePosMaskRootOffset; // 0x140
		::System::Boolean Toggle_DissolvePosTarget; // 0x14C
		::System::Byte _padding22[0x3];
		::UnityEngine::GameObject* _DissolvePosTarget; // 0x150
		::System::Boolean Toggle_DissolvePosRange; // 0x158
		::System::Byte _padding23[0x3];
		::System::Single _DissolvePosMaskRange; // 0x15C
		::System::Boolean Toggle_UseDither; // 0x160
		::System::Boolean _UseDither; // 0x161
		::System::Boolean Toggle_DitherAlpha; // 0x162
		::System::Byte _padding24[0x1];
		::System::Single _DitherAlpha; // 0x164
		::System::Boolean Toggle_DissolveShadowOff; // 0x168
		::System::Byte _padding25[0x3];
		::System::Int32 _DissolveShadowOff; // 0x16C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVE_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVE_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
