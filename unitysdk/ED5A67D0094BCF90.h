#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UI { class Text; }
template <typename T> class FCECB52A00C1344E;

#define ED5A67D0094BCF90_E374CC9A10E029C4_OFFSET UNITYSDK_OFFSET(0x4216DE0)
#define ED5A67D0094BCF90_EF975513C2882510_OFFSET UNITYSDK_OFFSET(0x4216B70)
#define ED5A67D0094BCF90_F3CA40B539C9D933_OFFSET UNITYSDK_OFFSET(0x4217030)
#define ED5A67D0094BCF90__CCTOR_OFFSET UNITYSDK_OFFSET(0x4217240)

inline static constexpr unsigned int ED5A67D0094BCF90_TypeDefinitionIndex = 18527;

class ED5A67D0094BCF90 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::FCECB52A00C1344E<::UnityEngine::UI::Text*>*>** StaticGet_A9A99C5B3B302030()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::FCECB52A00C1344E<::UnityEngine::UI::Text*>*>**)Il2CppClass::FromTypeDefinitionIndex(ED5A67D0094BCF90_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void E374CC9A10E029C4(::UnityEngine::UI::Text* BBCFEC7DB309E927)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + ED5A67D0094BCF90_E374CC9A10E029C4_OFFSET))(BBCFEC7DB309E927);
	}

	static ::System::Void F3CA40B539C9D933(::UnityEngine::UI::Text* BBCFEC7DB309E927)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + ED5A67D0094BCF90_F3CA40B539C9D933_OFFSET))(BBCFEC7DB309E927);
	}

	static ::System::Void EF975513C2882510(::UnityEngine::Font* A45600735D539BFC)
	{
		return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + ED5A67D0094BCF90_EF975513C2882510_OFFSET))(A45600735D539BFC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ED5A67D0094BCF90__CCTOR_OFFSET))();
	}
};
