#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEAOEHAEJPG.h"
class DHKBPAGJIHF;
class MOGBNBGMIHF;

#define DHKBPAGJIHF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xEBE30F0)
#define DHKBPAGJIHF_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE31F0)
#define DHKBPAGJIHF_DDCGIMAGEJF_OFFSET UNITYSDK_OFFSET(0xEBE30D0)
#define DHKBPAGJIHF_EJLDDHIMBEM_OFFSET UNITYSDK_OFFSET(0xEBE3210)
#define DHKBPAGJIHF_ONJHLHJFKAM_OFFSET UNITYSDK_OFFSET(0xEBE30E0)

inline static constexpr unsigned int DHKBPAGJIHF_TypeDefinitionIndex = 73515;

	class DHKBPAGJIHF : public ::PEAOEHAEJPG
	{
	public:
		::System::Single PGGAIBEGCBE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKBPAGJIHF_CTOR_OFFSET))(this);
		}

		::System::Single DDCGIMAGEJF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKBPAGJIHF_DDCGIMAGEJF_OFFSET))(this);
		}

		::System::Void ONJHLHJFKAM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHKBPAGJIHF_ONJHLHJFKAM_OFFSET))(this, a1);
		}

		::DHKBPAGJIHF* BPLPBPMEODA(::MOGBNBGMIHF* a1, ::System::Single a2)
		{
			return ((::DHKBPAGJIHF*(*)(::PVOID, ::MOGBNBGMIHF*, ::System::Single))((::PBYTE)hIl2Cpp + DHKBPAGJIHF_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::System::Boolean EJLDDHIMBEM(::MOGBNBGMIHF* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOGBNBGMIHF*, ::System::Single))((::PBYTE)hIl2Cpp + DHKBPAGJIHF_EJLDDHIMBEM_OFFSET))(this, a1, a2);
		}

	};
