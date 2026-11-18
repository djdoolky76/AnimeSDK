#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MONONPCINDICATOR_ICLNEIGEJHL_PNJFPDDLKPD_OFFSET UNITYSDK_OFFSET(0x131082A0)
#define MOLEMOLE_MONONPCINDICATOR_ICLNEIGEJHL__CTOR_OFFSET UNITYSDK_OFFSET(0x13108290)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNPCIndicator_ICLNEIGEJHL_TypeDefinitionIndex = 68090;

	class MonoNPCIndicator_ICLNEIGEJHL : public ::System::Object
	{
	public:
		::System::UInt32 HHEKCPMGKAH; // 0x10
		::System::UInt32 FAPEIDKDEHO; // 0x14
		::System::UInt32 CAMKPJIEJDE; // 0x18
		::System::UInt32 MBANIDEDNCD; // 0x1C
		::System::UInt32 GJIKAPPAFOO; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_ICLNEIGEJHL__CTOR_OFFSET))(this);
		}

		::System::Void PNJFPDDLKPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_ICLNEIGEJHL_PNJFPDDLKPD_OFFSET))(this);
		}
	};
}
