#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace TMPro { class TMP_Character; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_FONTASSET_F5628F8349D4A8A6_B147E5CD32D812DF_OFFSET UNITYSDK_OFFSET(0x40CF890)
#define TMPRO_TMP_FONTASSET_F5628F8349D4A8A6_B5726D460E946324_OFFSET UNITYSDK_OFFSET(0x1AB3D50)
#define TMPRO_TMP_FONTASSET_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x40CF8B0)
#define TMPRO_TMP_FONTASSET_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAsset_F5628F8349D4A8A6_TypeDefinitionIndex = 18227;

	class TMP_FontAsset_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::TMPro::TMP_FontAsset_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::TMPro::TMP_FontAsset_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::TMPro::TMP_Character*, ::System::UInt32>** StaticGet_B44702F25B010970()
		{
			return (::System::Func_2<::TMPro::TMP_Character*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>** StaticGet_BF53EE0B7CD2E721()
		{
			return (::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::UInt32 B5726D460E946324(::TMPro::TMP_Character* A97F5B807CC19082)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_F5628F8349D4A8A6_B5726D460E946324_OFFSET))(this, A97F5B807CC19082);
		}

		::System::UInt32 B147E5CD32D812DF(::UnityEngine::TextCore::Glyph* A97F5B807CC19082)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_F5628F8349D4A8A6_B147E5CD32D812DF_OFFSET))(this, A97F5B807CC19082);
		}
	};
}
