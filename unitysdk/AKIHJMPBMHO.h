#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEBDAPFKGKP.h"
namespace System { class String; }

#define AKIHJMPBMHO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD3670)
#define AKIHJMPBMHO_DNCOGIBIIFM_OFFSET UNITYSDK_OFFSET(0x12CD3BB0)
#define AKIHJMPBMHO_FNFKJCEECMO_OFFSET UNITYSDK_OFFSET(0x12CD3810)
#define AKIHJMPBMHO_GDCKPAOHHKC_OFFSET UNITYSDK_OFFSET(0x12CD3680)
#define AKIHJMPBMHO_NFMMIGNFNFE_OFFSET UNITYSDK_OFFSET(0x12CD38E0)
#define AKIHJMPBMHO_OFLDFAAPKHK_OFFSET UNITYSDK_OFFSET(0x12CD3A10)

inline static constexpr unsigned int AKIHJMPBMHO_TypeDefinitionIndex = 61079;

	class AKIHJMPBMHO : public ::PEBDAPFKGKP
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKIHJMPBMHO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean GDCKPAOHHKC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKIHJMPBMHO_GDCKPAOHHKC_OFFSET))();
		}

		::System::Boolean FNFKJCEECMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIHJMPBMHO_FNFKJCEECMO_OFFSET))(this);
		}

		::System::Void NFMMIGNFNFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIHJMPBMHO_NFMMIGNFNFE_OFFSET))(this);
		}

		::System::Void OFLDFAAPKHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIHJMPBMHO_OFLDFAAPKHK_OFFSET))(this);
		}

		::System::Void DNCOGIBIIFM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKIHJMPBMHO_DNCOGIBIIFM_OFFSET))(this, a1);
		}

	};
