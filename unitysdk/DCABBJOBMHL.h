#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APJDGABPDGH;
class DGEPFHILKPM;
class MIACNOIDADL;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DCABBJOBMHL_BLCCOJJNBHD_OFFSET UNITYSDK_OFFSET(0xE2355D0)
#define DCABBJOBMHL_CTOR_OFFSET UNITYSDK_OFFSET(0xE2354F0)
#define DCABBJOBMHL_KOKCIONMPDI_OFFSET UNITYSDK_OFFSET(0xE235500)

	class DCABBJOBMHL : public ::System::Object
	{
	public:
		::DGEPFHILKPM* OMLAHOMDEID; // 0x10
		::MIACNOIDADL* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::DGEPFHILKPM* a1, ::MIACNOIDADL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::MIACNOIDADL*))((::PBYTE)hIl2Cpp + DCABBJOBMHL_CTOR_OFFSET))(this, a1, a2);
		}

		::APJDGABPDGH* KOKCIONMPDI(::System::UInt32 a1)
		{
			return ((::APJDGABPDGH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCABBJOBMHL_KOKCIONMPDI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* BLCCOJJNBHD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABBJOBMHL_BLCCOJJNBHD_OFFSET))(this);
		}

	};
