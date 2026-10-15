#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNHNLPIHONJ_BlobLabel.h"
#include "unitysdk/System/Object.h"
class KNHNLPIHONJ_EKNMJFJLGKI;

#define KNHNLPIHONJ_EKNMJFJLGKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D08F090)
#define KNHNLPIHONJ_EKNMJFJLGKI_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D08F070)
#define KNHNLPIHONJ_EKNMJFJLGKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D08F080)
#define KNHNLPIHONJ_EKNMJFJLGKI_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1D08F040)

inline static constexpr unsigned int KNHNLPIHONJ_EKNMJFJLGKI_TypeDefinitionIndex = 10368;

	class KNHNLPIHONJ_EKNMJFJLGKI : public ::System::Object
	{
	public:
		static ::KNHNLPIHONJ_EKNMJFJLGKI** StaticGet_EMLNOINPICJ()
		{
			return (::KNHNLPIHONJ_EKNMJFJLGKI**)UnitySDK::FromName("", "EKNMJFJLGKI")->GetStaticField(0x36F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_EKNMJFJLGKI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHNLPIHONJ_EKNMJFJLGKI_CCTOR_OFFSET))();
		}

		static ::KNHNLPIHONJ_EKNMJFJLGKI* GGBLHEHJBDO()
		{
			return ((::KNHNLPIHONJ_EKNMJFJLGKI*(*)())((::PBYTE)hIl2Cpp + KNHNLPIHONJ_EKNMJFJLGKI_GGBLHEHJBDO_OFFSET))();
		}

		::System::Int32 Compare(::KNHNLPIHONJ_BlobLabel a1, ::KNHNLPIHONJ_BlobLabel a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KNHNLPIHONJ_BlobLabel, ::KNHNLPIHONJ_BlobLabel))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_EKNMJFJLGKI_COMPARE_OFFSET))(this, a1, a2);
		}

	};
