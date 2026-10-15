#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
namespace System { class String; }

#define HBMJDOFMACB_CNPJNFCAEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define HBMJDOFMACB_CNPJNFCAEAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36260)
#define HBMJDOFMACB_CNPJNFCAEAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C36280)
#define HBMJDOFMACB_CNPJNFCAEAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C397B0)

	struct alignas(4) HBMJDOFMACB_CNPJNFCAEAM
	{
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x10
		::System::UInt32 HNPDLANHONH; // 0x14
		::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + HBMJDOFMACB_CNPJNFCAEAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMJDOFMACB_CNPJNFCAEAM_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::HBMJDOFMACB_CNPJNFCAEAM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBMJDOFMACB_CNPJNFCAEAM))((::PBYTE)hIl2Cpp + HBMJDOFMACB_CNPJNFCAEAM_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMJDOFMACB_CNPJNFCAEAM_GETHASHCODE_OFFSET))(this);
		}

	};
