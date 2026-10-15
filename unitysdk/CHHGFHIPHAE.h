#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHHGFHIPHAE;
class ECONLFPJNAA;

#define CHHGFHIPHAE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF4AF80)
#define CHHGFHIPHAE_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xCF4AEC0)

	class CHHGFHIPHAE : public ::System::Object
	{
	public:
		::ECONLFPJNAA* FGNHFJHBPIM; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x18
		::System::UInt32 IEDEBFCCKNL; // 0x1C
		::System::UInt32 PKEKFAHEPAL; // 0x20
		::System::UInt32 HALECHFBIHK; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHGFHIPHAE_CTOR_OFFSET))(this);
		}

		::CHHGFHIPHAE* NBHCPBBGAKA()
		{
			return ((::CHHGFHIPHAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHGFHIPHAE_NBHCPBBGAKA_OFFSET))(this);
		}

	};
