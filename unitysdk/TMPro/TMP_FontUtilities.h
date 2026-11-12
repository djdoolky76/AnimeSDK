#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_FontAsset; }

#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x205B37B0)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x205B34C0)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_1_OFFSET UNITYSDK_OFFSET(0x205B3720)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET UNITYSDK_OFFSET(0x205B3420)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontUtilities_TypeDefinitionIndex = 45659;

	class TMP_FontUtilities : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_k_searchedFontAssets()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("TMPro", "TMP_FontUtilities")->GetStaticField(0x6A700);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacter(::TMPro::TMP_FontAsset* a1, ::System::UInt32 a2, ::TMPro::TMP_Character* a3)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::TMPro::TMP_FontAsset*, ::System::UInt32, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET))(a1, a2, a3);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacter_1(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* a1, ::System::UInt32 a2, ::TMPro::TMP_Character* a3)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, ::System::UInt32, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_1_OFFSET))(a1, a2, a3);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacterInternal(::TMPro::TMP_FontAsset* a1, ::System::UInt32 a2, ::TMPro::TMP_Character* a3)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::TMPro::TMP_FontAsset*, ::System::UInt32, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacterInternal_1(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* a1, ::System::UInt32 a2, ::TMPro::TMP_Character* a3)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, ::System::UInt32, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_1_OFFSET))(a1, a2, a3);
		}

	};
}
