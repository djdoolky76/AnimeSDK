#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace TMPro { class TMP_SpriteCharacter; }
namespace TMPro { class TMP_SpriteGlyph; }

#define TMPRO_TMP_SPRITEASSET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19BC8230)
#define TMPRO_TMP_SPRITEASSET___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19BC8270)
#define TMPRO_TMP_SPRITEASSET___C__SORTCHARACTERTABLE_B__40_0_OFFSET UNITYSDK_OFFSET(0x19BC82A0)
#define TMPRO_TMP_SPRITEASSET___C__SORTGLYPHTABLE_B__39_0_OFFSET UNITYSDK_OFFSET(0x19BC8280)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAsset___c_TypeDefinitionIndex = 45711;

	class TMP_SpriteAsset___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x6ABB0);
		}

		static ::System::Func_2<::TMPro::TMP_SpriteGlyph*, ::System::UInt32>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::TMPro::TMP_SpriteGlyph*, ::System::UInt32>**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x6ABB8);
		}

		static ::System::Func_2<::TMPro::TMP_SpriteCharacter*, ::System::UInt32>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::TMPro::TMP_SpriteCharacter*, ::System::UInt32>**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x6ABC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortGlyphTable_b__39_0(::TMPro::TMP_SpriteGlyph* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_SpriteGlyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET___C__SORTGLYPHTABLE_B__39_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SortCharacterTable_b__40_0(::TMPro::TMP_SpriteCharacter* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_SpriteCharacter*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET___C__SORTCHARACTERTABLE_B__40_0_OFFSET))(this, a1);
		}

	};
}
