#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchEvaluator; }
namespace TMPro { class TMP_Character; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_FONTASSET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA66A0)
#define TMPRO_TMP_FONTASSET___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19BA66E0)
#define TMPRO_TMP_FONTASSET___C__RENDERCHARACTERTOTEXTURE_B__180_0_OFFSET UNITYSDK_OFFSET(0x19BA6730)
#define TMPRO_TMP_FONTASSET___C__SORTCHARACTERTABLE_B__129_0_OFFSET UNITYSDK_OFFSET(0x19BA66F0)
#define TMPRO_TMP_FONTASSET___C__SORTGLYPHTABLE_B__130_0_OFFSET UNITYSDK_OFFSET(0x19BA6710)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAsset___c_TypeDefinitionIndex = 45644;

	class TMP_FontAsset___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::TMPro::TMP_Character*, ::System::UInt32>** StaticGet___9__129_0()
		{
			return (::System::Func_2<::TMPro::TMP_Character*, ::System::UInt32>**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x69CC0);
		}

		static ::System::Text::RegularExpressions::MatchEvaluator** StaticGet___9__180_0()
		{
			return (::System::Text::RegularExpressions::MatchEvaluator**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x69CC8);
		}

		static ::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>** StaticGet___9__130_0()
		{
			return (::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x69CD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x69CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortCharacterTable_b__129_0(::TMPro::TMP_Character* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__SORTCHARACTERTABLE_B__129_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SortGlyphTable_b__130_0(::UnityEngine::TextCore::Glyph* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__SORTGLYPHTABLE_B__130_0_OFFSET))(this, a1);
		}

		::System::String* _RenderCharacterToTexture_b__180_0(::System::Text::RegularExpressions::Match* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__RENDERCHARACTERTOTEXTURE_B__180_0_OFFSET))(this, a1);
		}

	};
}
