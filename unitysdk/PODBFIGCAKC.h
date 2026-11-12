#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBNGNLBAOAG.h"
class JNBAPNPIADL;

#define PODBFIGCAKC_CJOGOKJOJAA_OFFSET UNITYSDK_OFFSET(0xCC8C220)
#define PODBFIGCAKC_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8C100)
#define PODBFIGCAKC_DABGANLNNBF_OFFSET UNITYSDK_OFFSET(0xCC8C280)
#define PODBFIGCAKC_LHGOLMGGOJL_OFFSET UNITYSDK_OFFSET(0xCC8C160)
#define PODBFIGCAKC_LJKGFKNGJDF_OFFSET UNITYSDK_OFFSET(0xCC8BFA0)
#define PODBFIGCAKC_MODEDJCLMDJ_OFFSET UNITYSDK_OFFSET(0xCC8BFF0)

inline static constexpr unsigned int PODBFIGCAKC_TypeDefinitionIndex = 62797;

	class PODBFIGCAKC : public ::DBNGNLBAOAG
	{
	public:
		::System::Void _ctor(::JNBAPNPIADL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNBAPNPIADL*))((::PBYTE)hIl2Cpp + PODBFIGCAKC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 LJKGFKNGJDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PODBFIGCAKC_LJKGFKNGJDF_OFFSET))(this);
		}

		::System::UInt32 MODEDJCLMDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PODBFIGCAKC_MODEDJCLMDJ_OFFSET))(this);
		}

		::System::Boolean LHGOLMGGOJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PODBFIGCAKC_LHGOLMGGOJL_OFFSET))(this);
		}

		::System::Boolean CJOGOKJOJAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PODBFIGCAKC_CJOGOKJOJAA_OFFSET))(this);
		}

		::System::Boolean DABGANLNNBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PODBFIGCAKC_DABGANLNNBF_OFFSET))(this);
		}

	};
