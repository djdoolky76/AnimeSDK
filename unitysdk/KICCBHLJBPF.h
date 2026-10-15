#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLHEACONEGF;
class DGEPFHILKPM;
class KKGMHJNMOID;

#define KICCBHLJBPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB412EB0)
#define KICCBHLJBPF_LNFHELMBBHB_OFFSET UNITYSDK_OFFSET(0xB412EC0)

inline static constexpr unsigned int KICCBHLJBPF_TypeDefinitionIndex = 80097;

	class KICCBHLJBPF : public ::System::Object
	{
	public:
		::DGEPFHILKPM* OMLAHOMDEID; // 0x10
		::BLHEACONEGF* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::DGEPFHILKPM* a1, ::BLHEACONEGF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::BLHEACONEGF*))((::PBYTE)hIl2Cpp + KICCBHLJBPF_CTOR_OFFSET))(this, a1, a2);
		}

		::KKGMHJNMOID* LNFHELMBBHB(::System::UInt32 a1)
		{
			return ((::KKGMHJNMOID*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KICCBHLJBPF_LNFHELMBBHB_OFFSET))(this, a1);
		}

	};
