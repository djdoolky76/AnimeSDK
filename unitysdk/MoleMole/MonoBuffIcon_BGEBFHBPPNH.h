#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoBuffIcon; }

#define MOLEMOLE_MONOBUFFICON_BGEBFHBPPNH_DNKHHOGHHEF_OFFSET UNITYSDK_OFFSET(0x15ABA200)
#define MOLEMOLE_MONOBUFFICON_BGEBFHBPPNH__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABA1F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuffIcon_BGEBFHBPPNH_TypeDefinitionIndex = 65086;

	class MonoBuffIcon_BGEBFHBPPNH : public ::System::Object
	{
	public:
		::MoleMole::MonoBuffIcon* KLHPEBKNIFB; // 0x10
		::System::Int32 BOBBHFPEPHC; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_BGEBFHBPPNH__CTOR_OFFSET))(this);
		}

		::System::Void DNKHHOGHHEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_BGEBFHBPPNH_DNKHHOGHHEF_OFFSET))(this);
		}
	};
}
