#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::TextCore { class Glyph; }
namespace UnityEngine::TextCore::Text { class Character; }

#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_F5628F8349D4A8A6_B7BA62EB62E5B112_OFFSET UNITYSDK_OFFSET(0x4210830)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_F5628F8349D4A8A6_F3336722240C8835_OFFSET UNITYSDK_OFFSET(0x40CF890)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x4210980)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontAsset_F5628F8349D4A8A6_TypeDefinitionIndex = 18751;

	class FontAsset_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::TextCore::Text::FontAsset_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::TextCore::Text::FontAsset_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FontAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::UnityEngine::TextCore::Text::Character*, ::System::UInt32>** StaticGet_A2A19ADBB85D6EF4()
		{
			return (::System::Func_2<::UnityEngine::TextCore::Text::Character*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FontAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>** StaticGet_A7CB1CA08CB1387C()
		{
			return (::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FontAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::UInt32 B7BA62EB62E5B112(::UnityEngine::TextCore::Text::Character* A97F5B807CC19082)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::TextCore::Text::Character*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_F5628F8349D4A8A6_B7BA62EB62E5B112_OFFSET))(this, A97F5B807CC19082);
		}

		::System::UInt32 F3336722240C8835(::UnityEngine::TextCore::Glyph* A97F5B807CC19082)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_F5628F8349D4A8A6_F3336722240C8835_OFFSET))(this, A97F5B807CC19082);
		}
	};
}
