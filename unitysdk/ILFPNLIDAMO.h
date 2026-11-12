#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;

#define ILFPNLIDAMO_CCLOLNJLMNE_OFFSET UNITYSDK_OFFSET(0x17486A60)
#define ILFPNLIDAMO_CTOR_OFFSET UNITYSDK_OFFSET(0x174868B0)
#define ILFPNLIDAMO_LNGGEICKGOD_OFFSET UNITYSDK_OFFSET(0x174868D0)

inline static constexpr unsigned int ILFPNLIDAMO_TypeDefinitionIndex = 79936;

	class ILFPNLIDAMO : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::MJAOHLLPLGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::MJAOHLLPLGK*))((::PBYTE)hIl2Cpp + ILFPNLIDAMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean LNGGEICKGOD(::LPHINGPIEAJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + ILFPNLIDAMO_LNGGEICKGOD_OFFSET))(this, a1, a2);
		}

		::System::Boolean CCLOLNJLMNE(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILFPNLIDAMO_CCLOLNJLMNE_OFFSET))(this, a1, a2, a3);
		}

	};
