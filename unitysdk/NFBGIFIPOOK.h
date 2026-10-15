#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEBDAPFKGKP.h"
namespace System { class String; }

#define NFBGIFIPOOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB77740)
#define NFBGIFIPOOK_DNCOGIBIIFM_OFFSET UNITYSDK_OFFSET(0xBB77DD0)
#define NFBGIFIPOOK_FNFKJCEECMO_OFFSET UNITYSDK_OFFSET(0xBB77940)
#define NFBGIFIPOOK_GDCKPAOHHKC_OFFSET UNITYSDK_OFFSET(0xBB77750)
#define NFBGIFIPOOK_NFMMIGNFNFE_OFFSET UNITYSDK_OFFSET(0xBB77A10)
#define NFBGIFIPOOK_OFLDFAAPKHK_OFFSET UNITYSDK_OFFSET(0xBB77B40)

inline static constexpr unsigned int NFBGIFIPOOK_TypeDefinitionIndex = 61081;

	class NFBGIFIPOOK : public ::PEBDAPFKGKP
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFBGIFIPOOK_CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean GDCKPAOHHKC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFBGIFIPOOK_GDCKPAOHHKC_OFFSET))();
		}

		::System::Boolean FNFKJCEECMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBGIFIPOOK_FNFKJCEECMO_OFFSET))(this);
		}

		::System::Void NFMMIGNFNFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBGIFIPOOK_NFMMIGNFNFE_OFFSET))(this);
		}

		::System::Void OFLDFAAPKHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBGIFIPOOK_OFLDFAAPKHK_OFFSET))(this);
		}

		::System::Void DNCOGIBIIFM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFBGIFIPOOK_DNCOGIBIIFM_OFFSET))(this, a1);
		}

	};
