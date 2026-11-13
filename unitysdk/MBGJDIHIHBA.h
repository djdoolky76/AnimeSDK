#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;

#define MBGJDIHIHBA_AMGNJMKPJEC_OFFSET UNITYSDK_OFFSET(0x1B820860)
#define MBGJDIHIHBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B820850)

inline static constexpr unsigned int MBGJDIHIHBA_TypeDefinitionIndex = 79784;

	class MBGJDIHIHBA : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + MBGJDIHIHBA_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 AMGNJMKPJEC(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MBGJDIHIHBA_AMGNJMKPJEC_OFFSET))(this, a1, a2, a3);
		}

	};
