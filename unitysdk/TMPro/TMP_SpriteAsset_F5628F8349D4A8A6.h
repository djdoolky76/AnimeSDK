#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace TMPro { class TMP_SpriteCharacter; }
namespace TMPro { class TMP_SpriteGlyph; }

#define TMPRO_TMP_SPRITEASSET_F5628F8349D4A8A6_A8530D260AF35D45_OFFSET UNITYSDK_OFFSET(0x40CF890)
#define TMPRO_TMP_SPRITEASSET_F5628F8349D4A8A6_F1663CEA23B60B11_OFFSET UNITYSDK_OFFSET(0x1AB3D50)
#define TMPRO_TMP_SPRITEASSET_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x40CF990)
#define TMPRO_TMP_SPRITEASSET_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAsset_F5628F8349D4A8A6_TypeDefinitionIndex = 18259;

	class TMP_SpriteAsset_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::TMPro::TMP_SpriteAsset_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::TMPro::TMP_SpriteAsset_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(TMP_SpriteAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::TMPro::TMP_SpriteGlyph*, ::System::UInt32>** StaticGet_F7C347DE9468B877()
		{
			return (::System::Func_2<::TMPro::TMP_SpriteGlyph*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_SpriteAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::TMPro::TMP_SpriteCharacter*, ::System::UInt32>** StaticGet_ED91EFAC806C306A()
		{
			return (::System::Func_2<::TMPro::TMP_SpriteCharacter*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_SpriteAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::UInt32 A8530D260AF35D45(::TMPro::TMP_SpriteGlyph* EC35F88C87A83BEB)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_SpriteGlyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_F5628F8349D4A8A6_A8530D260AF35D45_OFFSET))(this, EC35F88C87A83BEB);
		}

		::System::UInt32 F1663CEA23B60B11(::TMPro::TMP_SpriteCharacter* A97F5B807CC19082)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_SpriteCharacter*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_F5628F8349D4A8A6_F1663CEA23B60B11_OFFSET))(this, A97F5B807CC19082);
		}
	};
}
