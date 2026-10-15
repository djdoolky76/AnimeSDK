#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLEUTIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C059B50)

namespace Mono::Globalization::Unicode
{
	class MSCompatUnicodeTableUtil : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Category()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil")->GetStaticField(0x2980);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Level3()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil")->GetStaticField(0x2988);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Level1()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil")->GetStaticField(0x2990);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Level2()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil")->GetStaticField(0x2998);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Ignorable()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil")->GetStaticField(0x29A0);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_CjkCHS()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil")->GetStaticField(0x29A8);
		}

		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Cjk()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil")->GetStaticField(0x29B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLEUTIL_CCTOR_OFFSET))();
		}

	};
}
