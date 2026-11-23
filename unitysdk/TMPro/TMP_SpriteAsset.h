#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_Asset.h"
#include "unitysdk/UnityEngine/TextCore/FaceInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Sprite; }
namespace TMPro { class TMP_SpriteCharacter; }
namespace TMPro { class TMP_SpriteGlyph; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
template <typename T> class FCECB52A00C1344E;

#define TMPRO_TMP_SPRITEASSET_A3E482B1093AF710_OFFSET UNITYSDK_OFFSET(0x24136E0)
#define TMPRO_TMP_SPRITEASSET_A4A85C987C3D0DEB_OFFSET UNITYSDK_OFFSET(0x180ED20)
#define TMPRO_TMP_SPRITEASSET_A55194192C8C833A_OFFSET UNITYSDK_OFFSET(0x40BEB30)
#define TMPRO_TMP_SPRITEASSET_A76E3C28F0DF2D13_OFFSET UNITYSDK_OFFSET(0x40BFC90)
#define TMPRO_TMP_SPRITEASSET_A8904CC07FC74E64_OFFSET UNITYSDK_OFFSET(0x40BFB20)
#define TMPRO_TMP_SPRITEASSET_A8F1B8F44791628C_OFFSET UNITYSDK_OFFSET(0x40BEE20)
#define TMPRO_TMP_SPRITEASSET_AC6A457BCAA15DA2_OFFSET UNITYSDK_OFFSET(0x40C08C0)
#define TMPRO_TMP_SPRITEASSET_ACC7446990C7AF90_1_OFFSET UNITYSDK_OFFSET(0x40BEC90)
#define TMPRO_TMP_SPRITEASSET_ACC7446990C7AF90_OFFSET UNITYSDK_OFFSET(0x40BEBD0)
#define TMPRO_TMP_SPRITEASSET_B0E65E79B88AB448_OFFSET UNITYSDK_OFFSET(0x180F030)
#define TMPRO_TMP_SPRITEASSET_B52536375D674551_OFFSET UNITYSDK_OFFSET(0x40BF470)
#define TMPRO_TMP_SPRITEASSET_B768FA4E771B946B_OFFSET UNITYSDK_OFFSET(0x40C0880)
#define TMPRO_TMP_SPRITEASSET_BE866E6196BCC611_OFFSET UNITYSDK_OFFSET(0x184C910)
#define TMPRO_TMP_SPRITEASSET_E2EEDA6A5DE3BBF4_1_OFFSET UNITYSDK_OFFSET(0x40BF220)
#define TMPRO_TMP_SPRITEASSET_E2EEDA6A5DE3BBF4_OFFSET UNITYSDK_OFFSET(0x40BF3B0)
#define TMPRO_TMP_SPRITEASSET_E5DEAC41236F9342_OFFSET UNITYSDK_OFFSET(0x40BF700)
#define TMPRO_TMP_SPRITEASSET_EC54EE6DB5500A3B_OFFSET UNITYSDK_OFFSET(0x40BE940)
#define TMPRO_TMP_SPRITEASSET_EF408D8595CD11E0_OFFSET UNITYSDK_OFFSET(0x180F000)
#define TMPRO_TMP_SPRITEASSET_F0DA679E81C418E7_OFFSET UNITYSDK_OFFSET(0x40C0840)
#define TMPRO_TMP_SPRITEASSET_F1E923B22ECEDC4D_OFFSET UNITYSDK_OFFSET(0x40BF870)
#define TMPRO_TMP_SPRITEASSET_F36DA39CB3477A35_OFFSET UNITYSDK_OFFSET(0x40BEA20)
#define TMPRO_TMP_SPRITEASSET_F86254A5D5FC7C9B_OFFSET UNITYSDK_OFFSET(0x40BEAB0)
#define TMPRO_TMP_SPRITEASSET_FB442C909A67B9BE_OFFSET UNITYSDK_OFFSET(0x40C0800)
#define TMPRO_TMP_SPRITEASSET_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x40BE8C0)
#define TMPRO_TMP_SPRITEASSET_FE58B9BF805DB24B_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define TMPRO_TMP_SPRITEASSET_FE59D5EC8E99FBD7_OFFSET UNITYSDK_OFFSET(0x40C0220)
#define TMPRO_TMP_SPRITEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x40C0730)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAsset_TypeDefinitionIndex = 18260;

	class TMP_SpriteAsset : public ::TMPro::TMP_Asset
	{
	public:
		static ::FCECB52A00C1344E<::System::Int32>** StaticGet_A8DD7689026D09F7()
		{
			return (::FCECB52A00C1344E<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_SpriteAsset_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BD2A39F906E69BC0; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* AD0304A60EAFD1D7; // 0x38
		::System::String* m_Version; // 0x40
		::UnityEngine::TextCore::FaceInfo m_FaceInfo; // 0x48
		::UnityEngine::Texture* spriteSheet; // 0xA8
		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* m_SpriteCharacterTable; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>* BDD1ECD606538DE1; // 0xB8
		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* m_SpriteGlyphTable; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteGlyph*>* F7AC6A5152C33B69; // 0xC8
		::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* spriteInfoList; // 0xD0
		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* fallbackSpriteAssets; // 0xD8
		::System::Boolean EDC802393C72D993; // 0xE0

		static ::TMPro::TMP_SpriteAsset* E2EEDA6A5DE3BBF4(::TMPro::TMP_SpriteAsset* FBB25D464987D82F, ::System::UInt32 A8F53A76737F9A9C, ::System::Boolean B9AD8F4F29BFDBF5, ::System::Int32& F612355077DC4463)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::UInt32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_E2EEDA6A5DE3BBF4_OFFSET))(FBB25D464987D82F, A8F53A76737F9A9C, B9AD8F4F29BFDBF5, F612355077DC4463);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* A4A85C987C3D0DEB()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_A4A85C987C3D0DEB_OFFSET))(this);
		}

		::System::Int32 F36DA39CB3477A35(::System::Int32 AE8665F1077F631B)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_F36DA39CB3477A35_OFFSET))(this, AE8665F1077F631B);
		}

		::UnityEngine::TextCore::FaceInfo FB442C909A67B9BE()
		{
			return ((::UnityEngine::TextCore::FaceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_FB442C909A67B9BE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* B768FA4E771B946B()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_B768FA4E771B946B_OFFSET))(this);
		}

		static ::TMPro::TMP_SpriteAsset* E2EEDA6A5DE3BBF4_1(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* FEE4D5B46BF3EEF2, ::System::UInt32 A8F53A76737F9A9C, ::System::Boolean B9AD8F4F29BFDBF5, ::System::Int32& F612355077DC4463)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>*, ::System::UInt32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_E2EEDA6A5DE3BBF4_1_OFFSET))(FEE4D5B46BF3EEF2, A8F53A76737F9A9C, B9AD8F4F29BFDBF5, F612355077DC4463);
		}

		::System::Void E5DEAC41236F9342()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_E5DEAC41236F9342_OFFSET))(this);
		}

		::System::Void EF408D8595CD11E0(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_EF408D8595CD11E0_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void A3E482B1093AF710(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_A3E482B1093AF710_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::TMPro::TMP_SpriteAsset* B52536375D674551(::TMPro::TMP_SpriteAsset* FBB25D464987D82F, ::System::UInt32 A8F53A76737F9A9C, ::System::Boolean B9AD8F4F29BFDBF5, ::System::Int32& F612355077DC4463)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::UInt32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_B52536375D674551_OFFSET))(FBB25D464987D82F, A8F53A76737F9A9C, B9AD8F4F29BFDBF5, F612355077DC4463);
		}

		::System::Void A8904CC07FC74E64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_A8904CC07FC74E64_OFFSET))(this);
		}

		::System::Void F1E923B22ECEDC4D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_F1E923B22ECEDC4D_OFFSET))(this);
		}

		::System::Int32 F86254A5D5FC7C9B(::System::String* F79B4D487F303AB2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_F86254A5D5FC7C9B_OFFSET))(this, F79B4D487F303AB2);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Int32 A55194192C8C833A(::System::UInt32 A8F53A76737F9A9C)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_A55194192C8C833A_OFFSET))(this, A8F53A76737F9A9C);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>* F0DA679E81C418E7()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_F0DA679E81C418E7_OFFSET))(this);
		}

		static ::TMPro::TMP_SpriteAsset* A8F1B8F44791628C(::TMPro::TMP_SpriteAsset* FBB25D464987D82F, ::System::Int32 AE8665F1077F631B, ::System::Boolean B9AD8F4F29BFDBF5, ::System::Int32& F612355077DC4463)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_A8F1B8F44791628C_OFFSET))(FBB25D464987D82F, AE8665F1077F631B, B9AD8F4F29BFDBF5, F612355077DC4463);
		}

		static ::TMPro::TMP_SpriteAsset* ACC7446990C7AF90(::TMPro::TMP_SpriteAsset* FBB25D464987D82F, ::System::Int32 AE8665F1077F631B, ::System::Boolean EAEE31035203307B, ::System::Int32& F612355077DC4463)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_ACC7446990C7AF90_OFFSET))(FBB25D464987D82F, AE8665F1077F631B, EAEE31035203307B, F612355077DC4463);
		}

		::System::Void A76E3C28F0DF2D13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_A76E3C28F0DF2D13_OFFSET))(this);
		}

		::System::String* FE58B9BF805DB24B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_FE58B9BF805DB24B_OFFSET))(this);
		}

		static ::TMPro::TMP_SpriteAsset* ACC7446990C7AF90_1(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* FEE4D5B46BF3EEF2, ::System::Int32 AE8665F1077F631B, ::System::Boolean EAEE31035203307B, ::System::Int32& F612355077DC4463)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_ACC7446990C7AF90_1_OFFSET))(FEE4D5B46BF3EEF2, AE8665F1077F631B, EAEE31035203307B, F612355077DC4463);
		}

		::System::Void AC6A457BCAA15DA2(::UnityEngine::TextCore::FaceInfo E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::FaceInfo))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_AC6A457BCAA15DA2_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void BE866E6196BCC611(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_BE866E6196BCC611_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FE59D5EC8E99FBD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_FE59D5EC8E99FBD7_OFFSET))(this);
		}

		::System::Void B0E65E79B88AB448(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_B0E65E79B88AB448_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Material* EC54EE6DB5500A3B()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_EC54EE6DB5500A3B_OFFSET))(this);
		}
	};
}
