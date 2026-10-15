#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TRIVISIONSPEED_CCTOR_OFFSET UNITYSDK_OFFSET(0xE327380)
#define RPG_CLIENT_TRIVISIONSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0xE327370)
#define RPG_CLIENT_TRIVISIONSPEED_GETTEXTURENUM_OFFSET UNITYSDK_OFFSET(0xE327110)
#define RPG_CLIENT_TRIVISIONSPEED_MFGBCAMBEAJ_OFFSET UNITYSDK_OFFSET(0xE327220)
#define RPG_CLIENT_TRIVISIONSPEED_UPDATE_OFFSET UNITYSDK_OFFSET(0xE326F40)

namespace RPG::Client
{
	inline static constexpr unsigned int TrivisionSpeed_TypeDefinitionIndex = 70710;

	class TrivisionSpeed : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* Property; // 0x18
		::UnityEngine::AnimationCurve* AnimCurve; // 0x20
		::System::Single Duration; // 0x28
		::System::Int32 TextureNum; // 0x2C
		::UnityEngine::Renderer* OJAHLJGABMJ; // 0x30
		::System::Single HIIIDLPCOHK; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0x40
		::System::UInt32 MainTex_BoardID; // 0x48
		::System::UInt32 SecondTex_BoardID; // 0x4C
		::System::UInt32 ThirdTex_BoardID; // 0x50
		::System::Single PGMIOKKLHIE; // 0x54
		::System::Int32 EFHJOCLFEFD; // 0x58
		static ::System::Int32* StaticGet_DJJLMOOBPLP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TrivisionSpeed")->GetStaticField(0x7D20);
		}

		static ::System::Int32* StaticGet_FNGOBPOJMMD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TrivisionSpeed")->GetStaticField(0x7D24);
		}

		static ::System::Int32* StaticGet_BIKDJFJELDN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TrivisionSpeed")->GetStaticField(0x7D28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED_CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED_UPDATE_OFFSET))(this);
		}

		::System::Int32 GetTextureNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED_GETTEXTURENUM_OFFSET))(this);
		}

		::System::Void MFGBCAMBEAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED_MFGBCAMBEAJ_OFFSET))(this);
		}

	};
}
