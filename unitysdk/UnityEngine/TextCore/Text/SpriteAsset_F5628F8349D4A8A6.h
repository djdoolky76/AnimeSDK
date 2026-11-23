#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::TextCore::Text { class SpriteCharacter; }
namespace UnityEngine::TextCore::Text { class SpriteGlyph; }

#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F5628F8349D4A8A6_EEABCDE9EC326E8B_OFFSET UNITYSDK_OFFSET(0x1AB3D50)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F5628F8349D4A8A6_FE12C9E3BC6FB42B_OFFSET UNITYSDK_OFFSET(0x40CF890)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x4206820)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int SpriteAsset_F5628F8349D4A8A6_TypeDefinitionIndex = 18737;

	class SpriteAsset_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::TextCore::Text::SpriteAsset_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::TextCore::Text::SpriteAsset_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(SpriteAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, ::System::UInt32>** StaticGet_EA1384BFAE1D85DA()
		{
			return (::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SpriteAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, ::System::UInt32>** StaticGet_B0E230119F92F204()
		{
			return (::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SpriteAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::UInt32 FE12C9E3BC6FB42B(::UnityEngine::TextCore::Text::SpriteGlyph* EC35F88C87A83BEB)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::TextCore::Text::SpriteGlyph*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F5628F8349D4A8A6_FE12C9E3BC6FB42B_OFFSET))(this, EC35F88C87A83BEB);
		}

		::System::UInt32 EEABCDE9EC326E8B(::UnityEngine::TextCore::Text::SpriteCharacter* A97F5B807CC19082)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::TextCore::Text::SpriteCharacter*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F5628F8349D4A8A6_EEABCDE9EC326E8B_OFFSET))(this, A97F5B807CC19082);
		}
	};
}
