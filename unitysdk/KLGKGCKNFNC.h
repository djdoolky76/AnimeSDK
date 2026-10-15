#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class OLHPNPEHEON;
namespace System { class String; }

#define KLGKGCKNFNC_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0xB521830)
#define KLGKGCKNFNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB521820)
#define KLGKGCKNFNC_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0xB5217B0)

inline static constexpr unsigned int KLGKGCKNFNC_TypeDefinitionIndex = 65271;

	class KLGKGCKNFNC : public ::HEOLKMLMPML
	{
	public:
		::OLHPNPEHEON* GAJHLFGLCCK; // 0x10
		::System::Void _ctor(::OLHPNPEHEON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLHPNPEHEON*))((::PBYTE)hIl2Cpp + KLGKGCKNFNC_CTOR_OFFSET))(this, a1);
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKGCKNFNC_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + KLGKGCKNFNC_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

	};
