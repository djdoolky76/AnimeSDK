#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Globalization::Unicode { class Level2Map; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C02B380)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C02B3B0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C__BUILDTAILORINGTABLES_B__17_0_OFFSET UNITYSDK_OFFSET(0x1C02B3C0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTable___c_TypeDefinitionIndex = 36;

	class MSCompatUnicodeTable___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>**)UnitySDK::FromName("Mono.Globalization.Unicode", "<>c")->GetStaticField(0x2880);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Mono.Globalization.Unicode", "<>c")->GetStaticField(0x2888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildTailoringTables_b__17_0(::Mono::Globalization::Unicode::Level2Map* a1, ::Mono::Globalization::Unicode::Level2Map* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Globalization::Unicode::Level2Map*, ::Mono::Globalization::Unicode::Level2Map*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE___C__BUILDTAILORINGTABLES_B__17_0_OFFSET))(this, a1, a2);
		}

	};
}
