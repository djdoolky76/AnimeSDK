#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class FontAsset; }

#define B9E16BF724A02BE8_F19A935B16CB2754_1_OFFSET UNITYSDK_OFFSET(0x4207720)
#define B9E16BF724A02BE8_F19A935B16CB2754_OFFSET UNITYSDK_OFFSET(0x4207B30)
#define B9E16BF724A02BE8_FE989B8F086A6EF2_OFFSET UNITYSDK_OFFSET(0x4207450)
#define B9E16BF724A02BE8__CCTOR_OFFSET UNITYSDK_OFFSET(0x4208030)

inline static constexpr unsigned int B9E16BF724A02BE8_TypeDefinitionIndex = 18757;

class B9E16BF724A02BE8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::UnityEngine::Material*>** StaticGet_E870B7A90EEA3444()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(B9E16BF724A02BE8_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::UnityEngine::Material* F19A935B16CB2754(::UnityEngine::TextCore::Text::FontAsset* A04B97A6BA51CC83, ::UnityEngine::Material* AAA9905DA6739077, ::System::Int32 B260C716054B5830)
	{
		return ((::UnityEngine::Material*(*)(::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + B9E16BF724A02BE8_F19A935B16CB2754_OFFSET))(A04B97A6BA51CC83, AAA9905DA6739077, B260C716054B5830);
	}

	static ::UnityEngine::Material* F19A935B16CB2754_1(::UnityEngine::Material* AAA9905DA6739077, ::UnityEngine::Material* F09E893CDE3EF70E)
	{
		return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + B9E16BF724A02BE8_F19A935B16CB2754_1_OFFSET))(AAA9905DA6739077, F09E893CDE3EF70E);
	}

	static ::System::Void FE989B8F086A6EF2(::UnityEngine::Material* AFE8F10692F5139F, ::UnityEngine::Material* B80ACB93A9EE7636)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + B9E16BF724A02BE8_FE989B8F086A6EF2_OFFSET))(AFE8F10692F5139F, B80ACB93A9EE7636);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B9E16BF724A02BE8__CCTOR_OFFSET))();
	}
};
