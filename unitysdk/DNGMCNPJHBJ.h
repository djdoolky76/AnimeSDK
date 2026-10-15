#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGMCNPJHBJ_MCMNFKBLEEH;

#define DNGMCNPJHBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1194ED70)
#define DNGMCNPJHBJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1194ED80)

inline static constexpr unsigned int DNGMCNPJHBJ_TypeDefinitionIndex = 65310;

	class DNGMCNPJHBJ : public ::System::Object
	{
	public:
		::DNGMCNPJHBJ_MCMNFKBLEEH* PKJLGKGIAGN; // 0x10
		::System::Int32 AHELPPOMLOE; // 0x18
		::System::Void _ctor(::DNGMCNPJHBJ_MCMNFKBLEEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNGMCNPJHBJ_MCMNFKBLEEH*))((::PBYTE)hIl2Cpp + DNGMCNPJHBJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGMCNPJHBJ_KHGIKBFDLFB_OFFSET))(this);
		}

	};
