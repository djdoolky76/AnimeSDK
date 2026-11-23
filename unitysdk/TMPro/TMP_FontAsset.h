#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC0F03344772DE8E/F311F378F45C62DC.h"
#include "unitysdk/B311069BAD7789F5/FF42A1B8E33F028A.h"
#include "unitysdk/B32BFAA429008AE6/F97E71B06E086D4C.h"
#include "unitysdk/TMPro/FontAssetCreationSettings.h"
#include "unitysdk/TMPro/TMP_Asset.h"
#include "unitysdk/TMPro/TMP_FontWeightPair.h"
#include "unitysdk/UnityEngine/TextCore/FaceInfo.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class FaceInfo_Legacy; }
namespace TMPro { class KerningTable; }
namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_FontFeatureTable; }
namespace TMPro { class TMP_Glyph; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::TextCore { class Glyph; }
template <typename T> class FCECB52A00C1344E;

#define TMPRO_TMP_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET UNITYSDK_OFFSET(0x40964D0)
#define TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTERSANDFACEMETRICS_OFFSET UNITYSDK_OFFSET(0x4096820)
#define TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x4096580)
#define TMPRO_TMP_FONTASSET_AWAKE_OFFSET UNITYSDK_OFFSET(0x4096BB0)
#define TMPRO_TMP_FONTASSET_CLEARATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x4096C30)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x4097010)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0x4097040)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETTABLES_OFFSET UNITYSDK_OFFSET(0x4097080)
#define TMPRO_TMP_FONTASSET_CREATEFONTASSET_1_OFFSET UNITYSDK_OFFSET(0x4097360)
#define TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0x40972E0)
#define TMPRO_TMP_FONTASSET_GETCHARACTERSARRAY_OFFSET UNITYSDK_OFFSET(0x4097970)
#define TMPRO_TMP_FONTASSET_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x4097A50)
#define TMPRO_TMP_FONTASSET_GETGLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x4097B50)
#define TMPRO_TMP_FONTASSET_GET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0x18A6C10)
#define TMPRO_TMP_FONTASSET_GET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x409F350)
#define TMPRO_TMP_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0x1919AE0)
#define TMPRO_TMP_FONTASSET_GET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0x20EAA60)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0x409F360)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x1D19FB0)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x409F370)
#define TMPRO_TMP_FONTASSET_GET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0x18A6C30)
#define TMPRO_TMP_FONTASSET_GET_CHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x409F420)
#define TMPRO_TMP_FONTASSET_GET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x180ED20)
#define TMPRO_TMP_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0x3944FD0)
#define TMPRO_TMP_FONTASSET_GET_CREATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x409F460)
#define TMPRO_TMP_FONTASSET_GET_FACEINFO_OFFSET UNITYSDK_OFFSET(0x409F4B0)
#define TMPRO_TMP_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0x1CF7080)
#define TMPRO_TMP_FONTASSET_GET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x1EC4220)
#define TMPRO_TMP_FONTASSET_GET_FONTINFO_OFFSET UNITYSDK_OFFSET(0x1E37930)
#define TMPRO_TMP_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define TMPRO_TMP_FONTASSET_GET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x1D52DD0)
#define TMPRO_TMP_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x409F4F0)
#define TMPRO_TMP_FONTASSET_GET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x17F7030)
#define TMPRO_TMP_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0x2529A90)
#define TMPRO_TMP_FONTASSET_GET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define TMPRO_TMP_FONTASSET_GET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x2107AD0)
#define TMPRO_TMP_FONTASSET_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_1_OFFSET UNITYSDK_OFFSET(0x4098D00)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_2_OFFSET UNITYSDK_OFFSET(0x40984E0)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET UNITYSDK_OFFSET(0x4098640)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_1_OFFSET UNITYSDK_OFFSET(0x4097EB0)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x4097C60)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0x4097F20)
#define TMPRO_TMP_FONTASSET_INITIALIZECHARACTERLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0x4098DB0)
#define TMPRO_TMP_FONTASSET_INITIALIZEDICTIONARYLOOKUPTABLES_OFFSET UNITYSDK_OFFSET(0x4099020)
#define TMPRO_TMP_FONTASSET_INITIALIZEGLYPHLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0x4099050)
#define TMPRO_TMP_FONTASSET_INITIALIZEGLYPHPAIDADJUSTMENTRECORDSLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0x40992D0)
#define TMPRO_TMP_FONTASSET_READFONTASSETDEFINITION_OFFSET UNITYSDK_OFFSET(0x40994C0)
#define TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORATLASTEXTUREUPDATE_OFFSET UNITYSDK_OFFSET(0x4099780)
#define TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET UNITYSDK_OFFSET(0x4099870)
#define TMPRO_TMP_FONTASSET_SETUPNEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x4099960)
#define TMPRO_TMP_FONTASSET_SET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0x20EB160)
#define TMPRO_TMP_FONTASSET_SET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x409F530)
#define TMPRO_TMP_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0x18FF060)
#define TMPRO_TMP_FONTASSET_SET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0x20EB170)
#define TMPRO_TMP_FONTASSET_SET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x2691980)
#define TMPRO_TMP_FONTASSET_SET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0x1DD20F0)
#define TMPRO_TMP_FONTASSET_SET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x180F030)
#define TMPRO_TMP_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0x3944AF0)
#define TMPRO_TMP_FONTASSET_SET_CREATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x409F540)
#define TMPRO_TMP_FONTASSET_SET_FACEINFO_OFFSET UNITYSDK_OFFSET(0x409F5A0)
#define TMPRO_TMP_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0x1D1A130)
#define TMPRO_TMP_FONTASSET_SET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x26C5430)
#define TMPRO_TMP_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define TMPRO_TMP_FONTASSET_SET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x1D52E30)
#define TMPRO_TMP_FONTASSET_SET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x180F000)
#define TMPRO_TMP_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0x409F5F0)
#define TMPRO_TMP_FONTASSET_SET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0x184C910)
#define TMPRO_TMP_FONTASSET_SET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x24DBC00)
#define TMPRO_TMP_FONTASSET_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define TMPRO_TMP_FONTASSET_SORTALLTABLES_OFFSET UNITYSDK_OFFSET(0x4099C10)
#define TMPRO_TMP_FONTASSET_SORTCHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x4099EE0)
#define TMPRO_TMP_FONTASSET_SORTFONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x409A050)
#define TMPRO_TMP_FONTASSET_SORTGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x409A080)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x409A1F0)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_1_OFFSET UNITYSDK_OFFSET(0x409AB40)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_2_OFFSET UNITYSDK_OFFSET(0x409B790)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_3_OFFSET UNITYSDK_OFFSET(0x409C3E0)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x409B7C0)
#define TMPRO_TMP_FONTASSET_TRYADDGLYPHSTOATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define TMPRO_TMP_FONTASSET_TRYADDGLYPHSTONEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x409C410)
#define TMPRO_TMP_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x409C890)
#define TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURESFORFONTASSETSINQUEUE_OFFSET UNITYSDK_OFFSET(0x409CFC0)
#define TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x409CDC0)
#define TMPRO_TMP_FONTASSET_UPDATEFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0x409D120)
#define TMPRO_TMP_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET UNITYSDK_OFFSET(0x409D280)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_1_OFFSET UNITYSDK_OFFSET(0x409D3F0)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x409D770)
#define TMPRO_TMP_FONTASSET_UPGRADEFONTASSET_OFFSET UNITYSDK_OFFSET(0x409DAC0)
#define TMPRO_TMP_FONTASSET_UPGRADEGLYPHADJUSTMENTTABLETOFONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x409E7D0)
#define TMPRO_TMP_FONTASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x409EC00)
#define TMPRO_TMP_FONTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x409EF30)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAsset_TypeDefinitionIndex = 18228;

	class TMP_FontAsset : public ::TMPro::TMP_Asset
	{
	public:
		static ::B32BFAA429008AE6::F97E71B06E086D4C* StaticGet_k_ReadFontAssetDefinitionMarker()
		{
			return (::B32BFAA429008AE6::F97E71B06E086D4C*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::B32BFAA429008AE6::F97E71B06E086D4C* StaticGet_k_AddSynthesizedCharactersMarker()
		{
			return (::B32BFAA429008AE6::F97E71B06E086D4C*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::B32BFAA429008AE6::F97E71B06E086D4C* StaticGet_k_TryAddCharacterMarker()
		{
			return (::B32BFAA429008AE6::F97E71B06E086D4C*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::B32BFAA429008AE6::F97E71B06E086D4C* StaticGet_k_TryAddCharactersMarker()
		{
			return (::B32BFAA429008AE6::F97E71B06E086D4C*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::B32BFAA429008AE6::F97E71B06E086D4C* StaticGet_k_UpdateGlyphAdjustmentRecordsMarker()
		{
			return (::B32BFAA429008AE6::F97E71B06E086D4C*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::B32BFAA429008AE6::F97E71B06E086D4C* StaticGet_k_ClearFontAssetDataMarker()
		{
			return (::B32BFAA429008AE6::F97E71B06E086D4C*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::B32BFAA429008AE6::F97E71B06E086D4C* StaticGet_k_UpdateFontAssetDataMarker()
		{
			return (::B32BFAA429008AE6::F97E71B06E086D4C*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::System::String** StaticGet_s_DefaultMaterialSuffix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::FCECB52A00C1344E<::System::Int32>** StaticGet_k_SearchedFontAssetLookup()
		{
			return (::FCECB52A00C1344E<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>** StaticGet_k_FontAssets_FontFeaturesUpdateQueue()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::FCECB52A00C1344E<::System::Int32>** StaticGet_k_FontAssets_FontFeaturesUpdateQueueLookup()
		{
			return (::FCECB52A00C1344E<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>** StaticGet_k_FontAssets_AtlasTexturesUpdateQueue()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x58);
		}
		static ::FCECB52A00C1344E<::System::Int32>** StaticGet_k_FontAssets_AtlasTexturesUpdateQueueLookup()
		{
			return (::FCECB52A00C1344E<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x60);
		}
		::System::String* m_Version; // 0x30
		::System::String* m_SourceFontFileGUID; // 0x38
		::UnityEngine::Font* m_SourceFontFile; // 0x40
		::B311069BAD7789F5::FF42A1B8E33F028A m_AtlasPopulationMode; // 0x48
		::System::Byte _padding0[0x4];
		::UnityEngine::TextCore::FaceInfo m_FaceInfo; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphTable; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary; // 0xB8
		::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharacterTable; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_Character*>* m_CharacterLookupDictionary; // 0xC8
		::UnityEngine::Texture2D* m_AtlasTexture; // 0xD0
		::Il2CppArray<::UnityEngine::Texture2D*>* m_AtlasTextures; // 0xD8
		::System::Int32 m_AtlasTextureIndex; // 0xE0
		::System::Boolean m_IsMultiAtlasTexturesEnabled; // 0xE4
		::System::Boolean m_ClearDynamicDataOnBuild; // 0xE5
		::System::Byte _padding1[0x2];
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects; // 0xE8
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects; // 0xF0
		::TMPro::FaceInfo_Legacy* m_fontInfo; // 0xF8
		::UnityEngine::Texture2D* atlas; // 0x100
		::System::Int32 m_AtlasWidth; // 0x108
		::System::Int32 m_AtlasHeight; // 0x10C
		::System::Int32 m_AtlasPadding; // 0x110
		::AC0F03344772DE8E::F311F378F45C62DC m_AtlasRenderMode; // 0x114
		::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* m_glyphInfoList; // 0x118
		::TMPro::KerningTable* m_KerningTable; // 0x120
		::TMPro::TMP_FontFeatureTable* m_FontFeatureTable; // 0x128
		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* fallbackFontAssets; // 0x130
		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* m_FallbackFontAssetTable; // 0x138
		::TMPro::FontAssetCreationSettings m_CreationSettings; // 0x140
		::Il2CppArray<::TMPro::TMP_FontWeightPair>* m_FontWeightTable; // 0x198
		::Il2CppArray<::TMPro::TMP_FontWeightPair>* fontWeights; // 0x1A0
		::System::Single normalStyle; // 0x1A8
		::System::Single normalSpacingOffset; // 0x1AC
		::System::Single boldStyle; // 0x1B0
		::System::Single boldSpacing; // 0x1B4
		::System::Byte italicStyle; // 0x1B8
		::System::Byte tabSize; // 0x1B9
		::System::Boolean IsFontAssetLookupTablesDirty; // 0x1BA
		::System::Byte _padding2[0x5];
		::FCECB52A00C1344E<::System::Int32>* FallbackSearchQueryLookup; // 0x1C0
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsToRender; // 0x1C8
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsRendered; // 0x1D0
		::System::Collections::Generic::List_1<::System::UInt32>* m_GlyphIndexList; // 0x1D8
		::System::Collections::Generic::List_1<::System::UInt32>* m_GlyphIndexListNewlyAdded; // 0x1E0
		::System::Collections::Generic::List_1<::System::UInt32>* m_GlyphsToAdd; // 0x1E8
		::FCECB52A00C1344E<::System::UInt32>* m_GlyphsToAddLookup; // 0x1F0
		::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharactersToAdd; // 0x1F8
		::FCECB52A00C1344E<::System::UInt32>* m_CharactersToAddLookup; // 0x200
		::System::Collections::Generic::List_1<::System::UInt32>* s_MissingCharacterList; // 0x208
		::FCECB52A00C1344E<::System::UInt32>* m_MissingUnicodesFromFontFile; // 0x210

		::System::Int32 get_atlasPadding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASPADDING_OFFSET))(this);
		}

		::System::Int32 get_atlasWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASWIDTH_OFFSET))(this);
		}

		::System::Void set_clearDynamicDataOnBuild(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET))(this, E937D4885DAA1AE8);
		}

		::AC0F03344772DE8E::F311F378F45C62DC get_atlasRenderMode()
		{
			return ((::AC0F03344772DE8E::F311F378F45C62DC(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASRENDERMODE_OFFSET))(this);
		}

		::System::Void set_atlasTextures(::Il2CppArray<::UnityEngine::Texture2D*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASTEXTURES_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean HasCharacter(::System::Char F1971BC3E14481B3, ::System::Boolean EAEE31035203307B, ::System::Boolean ABB85189D17024A8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET))(this, F1971BC3E14481B3, EAEE31035203307B, ABB85189D17024A8);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_AWAKE_OFFSET))(this);
		}

		::System::Void AddSynthesizedCharacter(::System::UInt32 A8F53A76737F9A9C, ::System::Boolean E260B74CFBF0C16E, ::System::Boolean AD57348A9C7B7FB2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET))(this, A8F53A76737F9A9C, E260B74CFBF0C16E, AD57348A9C7B7FB2);
		}

		::System::Void set_version(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_VERSION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void AddSynthesizedCharactersAndFaceMetrics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTERSANDFACEMETRICS_OFFSET))(this);
		}

		::System::Void set_creationSettings(::TMPro::FontAssetCreationSettings E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::FontAssetCreationSettings))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CREATIONSETTINGS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::Il2CppArray<::UnityEngine::Texture2D*>* get_atlasTextures()
		{
			return ((::Il2CppArray<::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURES_OFFSET))(this);
		}

		::UnityEngine::TextCore::FaceInfo get_faceInfo()
		{
			return ((::UnityEngine::TextCore::FaceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FACEINFO_OFFSET))(this);
		}

		::System::Boolean HasCharacters(::System::String* E97E8D008427A296, ::Il2CppArray<::System::UInt32>*& A0985F3F4E55B3B2, ::System::Boolean EAEE31035203307B, ::System::Boolean ABB85189D17024A8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::UInt32>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET))(this, E97E8D008427A296, A0985F3F4E55B3B2, EAEE31035203307B, ABB85189D17024A8);
		}

		::System::Boolean TryAddCharacters(::System::String* ED99A83572F171A0, ::System::String*& A0985F3F4E55B3B2, ::System::Boolean A70D8B0A5BE47CCE)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET))(this, ED99A83572F171A0, A0985F3F4E55B3B2, A70D8B0A5BE47CCE);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* get_characterTable()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CHARACTERTABLE_OFFSET))(this);
		}

		::System::Boolean TryAddCharacters_1(::Il2CppArray<::System::UInt32>* A86281B5C4FE1ED9, ::Il2CppArray<::System::UInt32>*& B05457329B94A813, ::System::Boolean A70D8B0A5BE47CCE)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_1_OFFSET))(this, A86281B5C4FE1ED9, B05457329B94A813, A70D8B0A5BE47CCE);
		}

		::System::Boolean get_isMultiAtlasTexturesEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET))(this);
		}

		::Il2CppArray<::TMPro::TMP_FontWeightPair>* get_fontWeightTable()
		{
			return ((::Il2CppArray<::TMPro::TMP_FontWeightPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET))(this);
		}

		static ::TMPro::TMP_FontAsset* CreateFontAsset(::UnityEngine::Font* B1DC954065577781)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET))(B1DC954065577781);
		}

		::System::Boolean HasCharacters_1(::System::String* E97E8D008427A296)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_1_OFFSET))(this, E97E8D008427A296);
		}

		static ::System::Void RegisterFontAssetForFontFeatureUpdate(::TMPro::TMP_FontAsset* A04B97A6BA51CC83)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET))(A04B97A6BA51CC83);
		}

		static ::System::Void UpdateAtlasTexturesForFontAssetsInQueue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURESFORFONTASSETSINQUEUE_OFFSET))();
		}

		::System::Boolean TryAddGlyphsToNewAtlasTexture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDGLYPHSTONEWATLASTEXTURE_OFFSET))(this);
		}

		::System::Void set_atlasWidth(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASWIDTH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::TMPro::FaceInfo_Legacy* get_fontInfo()
		{
			return ((::TMPro::FaceInfo_Legacy*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTINFO_OFFSET))(this);
		}

		::System::Void ClearFontAssetTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETTABLES_OFFSET))(this);
		}

		::System::Boolean HasCharacter_Internal(::System::UInt32 F1971BC3E14481B3, ::System::Boolean EAEE31035203307B, ::System::Boolean ABB85189D17024A8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_INTERNAL_OFFSET))(this, F1971BC3E14481B3, EAEE31035203307B, ABB85189D17024A8);
		}

		static ::TMPro::TMP_FontAsset* CreateFontAsset_1(::UnityEngine::Font* B1DC954065577781, ::System::Int32 B411E6A8F5D05064, ::System::Int32 EE4BE7C730C9823B, ::AC0F03344772DE8E::F311F378F45C62DC B79495D1DE5F8D32, ::System::Int32 FEFC998EA5C15178, ::System::Int32 E78F9D3B7B0DEDE6, ::B311069BAD7789F5::FF42A1B8E33F028A F03FFA153414A518, ::System::Boolean AD9176B2954ABA25)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::UnityEngine::Font*, ::System::Int32, ::System::Int32, ::AC0F03344772DE8E::F311F378F45C62DC, ::System::Int32, ::System::Int32, ::B311069BAD7789F5::FF42A1B8E33F028A, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CREATEFONTASSET_1_OFFSET))(B1DC954065577781, B411E6A8F5D05064, EE4BE7C730C9823B, B79495D1DE5F8D32, FEFC998EA5C15178, E78F9D3B7B0DEDE6, F03FFA153414A518, AD9176B2954ABA25);
		}

		::System::Boolean get_clearDynamicDataOnBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>* get_glyphLookupTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET))(this);
		}

		::System::Void ClearFontAssetData(::System::Boolean AA2BF515CCEB41EF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETDATA_OFFSET))(this, AA2BF515CCEB41EF);
		}

		::System::Void UpgradeFontAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPGRADEFONTASSET_OFFSET))(this);
		}

		::System::Boolean TryAddCharacters_2(::System::String* ED99A83572F171A0, ::System::Boolean A70D8B0A5BE47CCE)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_2_OFFSET))(this, ED99A83572F171A0, A70D8B0A5BE47CCE);
		}

		::System::Void UpdateAtlasTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURE_OFFSET))(this);
		}

		::System::Void set_atlasRenderMode(::AC0F03344772DE8E::F311F378F45C62DC E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::AC0F03344772DE8E::F311F378F45C62DC))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASRENDERMODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::UInt32 GetGlyphIndex(::System::UInt32 A8F53A76737F9A9C)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETGLYPHINDEX_OFFSET))(this, A8F53A76737F9A9C);
		}

		::TMPro::FontAssetCreationSettings get_creationSettings()
		{
			return ((::TMPro::FontAssetCreationSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CREATIONSETTINGS_OFFSET))(this);
		}

		::System::Void set_isMultiAtlasTexturesEnabled(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void InitializeCharacterLookupDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZECHARACTERLOOKUPDICTIONARY_OFFSET))(this);
		}

		::System::Void set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_GLYPHTABLE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FREEGLYPHRECTS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void SortAllTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTALLTABLES_OFFSET))(this);
		}

		::System::Void set_atlasPadding(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASPADDING_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_USEDGLYPHRECTS_OFFSET))(this);
		}

		::UnityEngine::Font* get_sourceFontFile()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_SOURCEFONTFILE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* get_glyphTable()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_GLYPHTABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FREEGLYPHRECTS_OFFSET))(this);
		}

		::System::Void InitializeGlyphLookupDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZEGLYPHLOOKUPDICTIONARY_OFFSET))(this);
		}

		::System::Void UpdateGlyphAdjustmentRecords(::Il2CppArray<::System::UInt32>* E980C05B3DE9E6B1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(this, E980C05B3DE9E6B1);
		}

		::System::Int32 get_atlasTextureCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET))(this);
		}

		::System::Void set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_VERSION_OFFSET))(this);
		}

		::System::Void ClearAtlasTextures(::System::Boolean AA2BF515CCEB41EF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARATLASTEXTURES_OFFSET))(this, AA2BF515CCEB41EF);
		}

		::System::Void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZEGLYPHPAIDADJUSTMENTRECORDSLOOKUPDICTIONARY_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Int32>* GetCharactersArray(::TMPro::TMP_FontAsset* A04B97A6BA51CC83)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETCHARACTERSARRAY_OFFSET))(A04B97A6BA51CC83);
		}

		::System::Int32 get_atlasHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASHEIGHT_OFFSET))(this);
		}

		::System::Void UpdateFontAssetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEFONTASSETDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* get_fallbackFontAssetTable()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET))(this);
		}

		::System::Void ReadFontAssetDefinition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_READFONTASSETDEFINITION_OFFSET))(this);
		}

		::System::Void SortCharacterTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTCHARACTERTABLE_OFFSET))(this);
		}

		::System::Void SetupNewAtlasTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SETUPNEWATLASTEXTURE_OFFSET))(this);
		}

		::System::Void set_fontFeatureTable(::TMPro::TMP_FontFeatureTable* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontFeatureTable*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FONTFEATURETABLE_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::String* GetCharacters(::TMPro::TMP_FontAsset* A04B97A6BA51CC83)
		{
			return ((::System::String*(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETCHARACTERS_OFFSET))(A04B97A6BA51CC83);
		}

		::System::Void set_atlasHeight(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASHEIGHT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void SortGlyphTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTGLYPHTABLE_OFFSET))(this);
		}

		::System::Void set_fontWeightTable(::Il2CppArray<::TMPro::TMP_FontWeightPair>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::TMPro::TMP_FontWeightPair>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean TryGetCharacter_and_QueueRenderToTexture(::System::UInt32 A8F53A76737F9A9C, ::TMPro::TMP_Character*& F1971BC3E14481B3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET))(this, A8F53A76737F9A9C, F1971BC3E14481B3);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET__CTOR_OFFSET))(this);
		}

		::System::Void AddCharacterToLookupCache(::System::UInt32 A8F53A76737F9A9C, ::TMPro::TMP_Character* F1971BC3E14481B3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET))(this, A8F53A76737F9A9C, F1971BC3E14481B3);
		}

		::System::Void set_faceInfo(::UnityEngine::TextCore::FaceInfo E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::FaceInfo))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FACEINFO_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void TryAddGlyphsToAtlasTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDGLYPHSTOATLASTEXTURES_OFFSET))(this);
		}

		::System::Void ClearFontAssetDataInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET))(this);
		}

		::System::Void set_characterTable(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CHARACTERTABLE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void UpdateGlyphAdjustmentRecords_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_1_OFFSET))(this);
		}

		::System::Void SortFontFeatureTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTFONTFEATURETABLE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_atlasTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURE_OFFSET))(this);
		}

		::TMPro::TMP_FontFeatureTable* get_fontFeatureTable()
		{
			return ((::TMPro::TMP_FontFeatureTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTFEATURETABLE_OFFSET))(this);
		}

		::B311069BAD7789F5::FF42A1B8E33F028A get_atlasPopulationMode()
		{
			return ((::B311069BAD7789F5::FF42A1B8E33F028A(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET))(this);
		}

		::System::Void set_sourceFontFile(::UnityEngine::Font* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_SOURCEFONTFILE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_Character*>* get_characterLookupTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_Character*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CHARACTERLOOKUPTABLE_OFFSET))(this);
		}

		::System::Void set_atlasPopulationMode(::B311069BAD7789F5::FF42A1B8E33F028A E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::B311069BAD7789F5::FF42A1B8E33F028A))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void InitializeDictionaryLookupTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZEDICTIONARYLOOKUPTABLES_OFFSET))(this);
		}

		::System::Boolean HasCharacters_2(::System::String* E97E8D008427A296, ::System::Collections::Generic::List_1<::System::Char>*& A0985F3F4E55B3B2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Char>*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_2_OFFSET))(this, E97E8D008427A296, A0985F3F4E55B3B2);
		}

		static ::System::Void RegisterFontAssetForAtlasTextureUpdate(::TMPro::TMP_FontAsset* A04B97A6BA51CC83)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORATLASTEXTUREUPDATE_OFFSET))(A04B97A6BA51CC83);
		}

		::System::Boolean TryAddCharacterInternal(::System::UInt32 A8F53A76737F9A9C, ::TMPro::TMP_Character*& F1971BC3E14481B3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET))(this, A8F53A76737F9A9C, F1971BC3E14481B3);
		}

		::System::Void UpgradeGlyphAdjustmentTableToFontFeatureTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPGRADEGLYPHADJUSTMENTTABLETOFONTFEATURETABLE_OFFSET))(this);
		}

		::System::Void set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_USEDGLYPHRECTS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean TryAddCharacters_3(::Il2CppArray<::System::UInt32>* A86281B5C4FE1ED9, ::System::Boolean A70D8B0A5BE47CCE)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_3_OFFSET))(this, A86281B5C4FE1ED9, A70D8B0A5BE47CCE);
		}

		::System::Boolean HasCharacter_1(::System::Int32 F1971BC3E14481B3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_1_OFFSET))(this, F1971BC3E14481B3);
		}

		static ::System::Void UpdateFontFeaturesForFontAssetsInQueue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET))();
		}
	};
}
