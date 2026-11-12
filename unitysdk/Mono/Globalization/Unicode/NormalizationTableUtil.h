#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E15C0)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET UNITYSDK_OFFSET(0x1D1E1BA0)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET UNITYSDK_OFFSET(0x1D1E1AC0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int NormalizationTableUtil_TypeDefinitionIndex = 38;

	class NormalizationTableUtil : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Prop()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "NormalizationTableUtil")->GetStaticField(0xA0A0);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Map()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "NormalizationTableUtil")->GetStaticField(0xA0A8);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Composite()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "NormalizationTableUtil")->GetStaticField(0xA0B0);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Helper()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "NormalizationTableUtil")->GetStaticField(0xA0B8);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Combining()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "NormalizationTableUtil")->GetStaticField(0xA0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_CCTOR_OFFSET))();
		}

		static ::System::Int32 PropIdx(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET))(a1);
		}

		static ::System::Int32 MapIdx(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET))(a1);
		}

	};
}
