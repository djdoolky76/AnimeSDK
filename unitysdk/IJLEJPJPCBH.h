#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NELEJGOMCPO.h"

#define IJLEJPJPCBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1743EAD0)
#define IJLEJPJPCBH_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x1743EA10)

inline static constexpr unsigned int IJLEJPJPCBH_TypeDefinitionIndex = 74503;

	class IJLEJPJPCBH : public ::NELEJGOMCPO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLEJPJPCBH_CTOR_OFFSET))(this);
		}

		::System::Void MBABPIHGAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLEJPJPCBH_MBABPIHGAJN_OFFSET))(this);
		}

	};
