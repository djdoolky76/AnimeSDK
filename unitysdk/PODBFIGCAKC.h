#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBNGNLBAOAG.h"
class JNBAPNPIADL;

#define PODBFIGCAKC_CJOGOKJOJAA_OFFSET UNITYSDK_OFFSET(0xC3523F0)
#define PODBFIGCAKC_CTOR_OFFSET UNITYSDK_OFFSET(0xC3522D0)
#define PODBFIGCAKC_DABGANLNNBF_OFFSET UNITYSDK_OFFSET(0xC352450)
#define PODBFIGCAKC_LHGOLMGGOJL_OFFSET UNITYSDK_OFFSET(0xC352330)
#define PODBFIGCAKC_LJKGFKNGJDF_OFFSET UNITYSDK_OFFSET(0xC352170)
#define PODBFIGCAKC_MODEDJCLMDJ_OFFSET UNITYSDK_OFFSET(0xC3521C0)

inline static constexpr unsigned int PODBFIGCAKC_TypeDefinitionIndex = 61412;

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
