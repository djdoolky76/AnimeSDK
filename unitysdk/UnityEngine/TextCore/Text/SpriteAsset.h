#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextCore/Text/TextAsset.h"
#include "unitysdk/UnityEngine/TextCore/FaceInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::TextCore::Text { class SpriteCharacter; }
namespace UnityEngine::TextCore::Text { class SpriteGlyph; }
namespace UnityEngine::TextCore::Text { class TextSettings; }
template <typename T> class FCECB52A00C1344E;

#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A3E482B1093AF710_OFFSET UNITYSDK_OFFSET(0x24136E0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A4A85C987C3D0DEB_OFFSET UNITYSDK_OFFSET(0x4197810)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A55194192C8C833A_OFFSET UNITYSDK_OFFSET(0x41F9930)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A76E3C28F0DF2D13_OFFSET UNITYSDK_OFFSET(0x41FA950)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A8904CC07FC74E64_OFFSET UNITYSDK_OFFSET(0x41FA7E0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A8F1B8F44791628C_OFFSET UNITYSDK_OFFSET(0x41F9C30)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_AC6A457BCAA15DA2_OFFSET UNITYSDK_OFFSET(0x40C08C0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_ACC7446990C7AF90_1_OFFSET UNITYSDK_OFFSET(0x41F99D0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_ACC7446990C7AF90_OFFSET UNITYSDK_OFFSET(0x41F9B70)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_B0E65E79B88AB448_OFFSET UNITYSDK_OFFSET(0x180F030)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_B52536375D674551_OFFSET UNITYSDK_OFFSET(0x41FA1F0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_B768FA4E771B946B_OFFSET UNITYSDK_OFFSET(0x41FAFF0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_E0DEF8302BE71F05_OFFSET UNITYSDK_OFFSET(0x17F7050)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_E2EEDA6A5DE3BBF4_1_OFFSET UNITYSDK_OFFSET(0x41FA130)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_E2EEDA6A5DE3BBF4_OFFSET UNITYSDK_OFFSET(0x41F9FA0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_E5DEAC41236F9342_OFFSET UNITYSDK_OFFSET(0x41FA3C0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_EF408D8595CD11E0_OFFSET UNITYSDK_OFFSET(0x180F000)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F0DA679E81C418E7_OFFSET UNITYSDK_OFFSET(0x41FAFB0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F1E923B22ECEDC4D_OFFSET UNITYSDK_OFFSET(0x41FA530)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F36DA39CB3477A35_OFFSET UNITYSDK_OFFSET(0x41F9860)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F86254A5D5FC7C9B_OFFSET UNITYSDK_OFFSET(0x41F98F0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F9898BC07347EE11_OFFSET UNITYSDK_OFFSET(0x4197770)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_FB442C909A67B9BE_OFFSET UNITYSDK_OFFSET(0x41FAF70)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x41FAEA0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int SpriteAsset_TypeDefinitionIndex = 18738;

	class SpriteAsset : public ::UnityEngine::TextCore::Text::TextAsset
	{
	public:
		static ::FCECB52A00C1344E<::System::Int32>** StaticGet_A8DD7689026D09F7()
		{
			return (::FCECB52A00C1344E<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SpriteAsset_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BD2A39F906E69BC0; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* AD0304A60EAFD1D7; // 0x40
		::UnityEngine::TextCore::FaceInfo m_FaceInfo; // 0x48
		::UnityEngine::Texture* m_SpriteAtlasTexture; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* m_SpriteCharacterTable; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Text::SpriteCharacter*>* BDD1ECD606538DE1; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* m_SpriteGlyphTable; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Text::SpriteGlyph*>* F7AC6A5152C33B69; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* fallbackSpriteAssets; // 0xD0
		::System::Boolean EDC802393C72D993; // 0xD8

		::System::Void E5DEAC41236F9342()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_E5DEAC41236F9342_OFFSET))(this);
		}

		::System::Int32 F36DA39CB3477A35(::System::Int32 AE8665F1077F631B)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F36DA39CB3477A35_OFFSET))(this, AE8665F1077F631B);
		}

		::System::Void A8904CC07FC74E64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A8904CC07FC74E64_OFFSET))(this);
		}

		::System::Void E0DEF8302BE71F05(::UnityEngine::Texture* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_E0DEF8302BE71F05_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::UnityEngine::TextCore::Text::SpriteAsset* E2EEDA6A5DE3BBF4(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* FEE4D5B46BF3EEF2, ::System::UInt32 A8F53A76737F9A9C, ::System::Boolean B9AD8F4F29BFDBF5, ::System::Int32& F612355077DC4463)
		{
			return ((::UnityEngine::TextCore::Text::SpriteAsset*(*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*, ::System::UInt32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_E2EEDA6A5DE3BBF4_OFFSET))(FEE4D5B46BF3EEF2, A8F53A76737F9A9C, B9AD8F4F29BFDBF5, F612355077DC4463);
		}

		static ::UnityEngine::TextCore::Text::SpriteAsset* B52536375D674551(::UnityEngine::TextCore::Text::SpriteAsset* FBB25D464987D82F, ::System::UInt32 A8F53A76737F9A9C, ::System::Boolean B9AD8F4F29BFDBF5, ::System::Int32& F612355077DC4463)
		{
			return ((::UnityEngine::TextCore::Text::SpriteAsset*(*)(::UnityEngine::TextCore::Text::SpriteAsset*, ::System::UInt32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_B52536375D674551_OFFSET))(FBB25D464987D82F, A8F53A76737F9A9C, B9AD8F4F29BFDBF5, F612355077DC4463);
		}

		static ::UnityEngine::TextCore::Text::SpriteAsset* A8F1B8F44791628C(::UnityEngine::TextCore::Text::SpriteAsset* FBB25D464987D82F, ::System::Int32 AE8665F1077F631B, ::System::Boolean B9AD8F4F29BFDBF5, ::System::Int32& F612355077DC4463, ::UnityEngine::TextCore::Text::TextSettings* A1F0C4AC5D6801DC)
		{
			return ((::UnityEngine::TextCore::Text::SpriteAsset*(*)(::UnityEngine::TextCore::Text::SpriteAsset*, ::System::Int32, ::System::Boolean, ::System::Int32&, ::UnityEngine::TextCore::Text::TextSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A8F1B8F44791628C_OFFSET))(FBB25D464987D82F, AE8665F1077F631B, B9AD8F4F29BFDBF5, F612355077DC4463, A1F0C4AC5D6801DC);
		}

		::System::Void A3E482B1093AF710(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Text::SpriteCharacter*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Text::SpriteCharacter*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A3E482B1093AF710_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::TextCore::FaceInfo FB442C909A67B9BE()
		{
			return ((::UnityEngine::TextCore::FaceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_FB442C909A67B9BE_OFFSET))(this);
		}

		::System::Void F1E923B22ECEDC4D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F1E923B22ECEDC4D_OFFSET))(this);
		}

		static ::UnityEngine::TextCore::Text::SpriteAsset* ACC7446990C7AF90(::UnityEngine::TextCore::Text::SpriteAsset* FBB25D464987D82F, ::System::Int32 AE8665F1077F631B, ::System::Boolean EAEE31035203307B, ::System::Int32& F612355077DC4463)
		{
			return ((::UnityEngine::TextCore::Text::SpriteAsset*(*)(::UnityEngine::TextCore::Text::SpriteAsset*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_ACC7446990C7AF90_OFFSET))(FBB25D464987D82F, AE8665F1077F631B, EAEE31035203307B, F612355077DC4463);
		}

		::System::Void EF408D8595CD11E0(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_EF408D8595CD11E0_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* B768FA4E771B946B()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_B768FA4E771B946B_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* A4A85C987C3D0DEB()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A4A85C987C3D0DEB_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Text::SpriteCharacter*>* F0DA679E81C418E7()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Text::SpriteCharacter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F0DA679E81C418E7_OFFSET))(this);
		}

		::UnityEngine::Texture* F9898BC07347EE11()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F9898BC07347EE11_OFFSET))(this);
		}

		::System::Void B0E65E79B88AB448(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_B0E65E79B88AB448_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 A55194192C8C833A(::System::UInt32 A8F53A76737F9A9C)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A55194192C8C833A_OFFSET))(this, A8F53A76737F9A9C);
		}

		::System::Int32 F86254A5D5FC7C9B(::System::String* F79B4D487F303AB2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_F86254A5D5FC7C9B_OFFSET))(this, F79B4D487F303AB2);
		}

		static ::UnityEngine::TextCore::Text::SpriteAsset* ACC7446990C7AF90_1(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* FEE4D5B46BF3EEF2, ::System::Int32 AE8665F1077F631B, ::System::Boolean EAEE31035203307B, ::System::Int32& F612355077DC4463)
		{
			return ((::UnityEngine::TextCore::Text::SpriteAsset*(*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_ACC7446990C7AF90_1_OFFSET))(FEE4D5B46BF3EEF2, AE8665F1077F631B, EAEE31035203307B, F612355077DC4463);
		}

		static ::UnityEngine::TextCore::Text::SpriteAsset* E2EEDA6A5DE3BBF4_1(::UnityEngine::TextCore::Text::SpriteAsset* FBB25D464987D82F, ::System::UInt32 A8F53A76737F9A9C, ::System::Boolean B9AD8F4F29BFDBF5, ::System::Int32& F612355077DC4463)
		{
			return ((::UnityEngine::TextCore::Text::SpriteAsset*(*)(::UnityEngine::TextCore::Text::SpriteAsset*, ::System::UInt32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_E2EEDA6A5DE3BBF4_1_OFFSET))(FBB25D464987D82F, A8F53A76737F9A9C, B9AD8F4F29BFDBF5, F612355077DC4463);
		}

		::System::Void A76E3C28F0DF2D13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_A76E3C28F0DF2D13_OFFSET))(this);
		}

		::System::Void AC6A457BCAA15DA2(::UnityEngine::TextCore::FaceInfo E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::FaceInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_AC6A457BCAA15DA2_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
