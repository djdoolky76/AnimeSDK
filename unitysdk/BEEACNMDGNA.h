#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"
#include "unitysdk/GNPPNJNBKAI.h"
class AEKEIBNBMDJ;
class CBEBICGIOAB;
class DLGOFLDEIOF;
class GGJFAFONDHN;
namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define BEEACNMDGNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x16305480)
#define BEEACNMDGNA_CHMCOKEGLIJ_OFFSET UNITYSDK_OFFSET(0x163050E0)
#define BEEACNMDGNA_COAHNGPOAKB_OFFSET UNITYSDK_OFFSET(0x16305390)
#define BEEACNMDGNA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16304F70)
#define BEEACNMDGNA_CTOR_OFFSET UNITYSDK_OFFSET(0x16304DE0)
#define BEEACNMDGNA_FFFJBMKNJNK_OFFSET UNITYSDK_OFFSET(0x16304D90)

inline static constexpr unsigned int BEEACNMDGNA_TypeDefinitionIndex = 49457;

	class BEEACNMDGNA : public ::GNPPNJNBKAI
	{
	public:
		static ::UnityEngine::Gradient** StaticGet_HIDOHJEAHAK()
		{
			return (::UnityEngine::Gradient**)UnitySDK::FromName("", "BEEACNMDGNA")->GetStaticField(0x69370);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEEACNMDGNA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + BEEACNMDGNA_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEEACNMDGNA_CCTOR_OFFSET))();
		}

		::EnviromentSystemV2Space::PropertyType FFFJBMKNJNK()
		{
			return ((::EnviromentSystemV2Space::PropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEACNMDGNA_FFFJBMKNJNK_OFFSET))(this);
		}

		::System::Void CHMCOKEGLIJ(::GGJFAFONDHN* a1, ::GGJFAFONDHN* a2, ::AEKEIBNBMDJ* a3, ::GGJFAFONDHN* a4, ::DLGOFLDEIOF* a5, ::CBEBICGIOAB* a6)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*, ::GGJFAFONDHN*, ::AEKEIBNBMDJ*, ::GGJFAFONDHN*, ::DLGOFLDEIOF*, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + BEEACNMDGNA_CHMCOKEGLIJ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single COAHNGPOAKB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEACNMDGNA_COAHNGPOAKB_OFFSET))(this);
		}

	};
