#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLILAAFLOAL;
class DGEPFHILKPM;
class EKFKFEBANDA;

#define BKBKIEDIEJK_BCGJEJCFCCN_OFFSET UNITYSDK_OFFSET(0xB7ACBE0)
#define BKBKIEDIEJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ACBD0)

inline static constexpr unsigned int BKBKIEDIEJK_TypeDefinitionIndex = 80105;

	class BKBKIEDIEJK : public ::System::Object
	{
	public:
		::DGEPFHILKPM* OMLAHOMDEID; // 0x10
		::CLILAAFLOAL* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::DGEPFHILKPM* a1, ::CLILAAFLOAL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::CLILAAFLOAL*))((::PBYTE)hIl2Cpp + BKBKIEDIEJK_CTOR_OFFSET))(this, a1, a2);
		}

		::EKFKFEBANDA* BCGJEJCFCCN(::System::UInt32 a1)
		{
			return ((::EKFKFEBANDA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKBKIEDIEJK_BCGJEJCFCCN_OFFSET))(this, a1);
		}

	};
