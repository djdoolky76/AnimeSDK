#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFPKNIHJJDI.h"
class PIIOAKOEACN;

#define FMMDPHGEHHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5559B0)
#define FMMDPHGEHHO_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C555A70)
#define FMMDPHGEHHO_FIGLOLHCHHL_OFFSET UNITYSDK_OFFSET(0x1C555960)
#define FMMDPHGEHHO_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C5559C0)

inline static constexpr unsigned int FMMDPHGEHHO_TypeDefinitionIndex = 41767;

	class FMMDPHGEHHO : public ::MFPKNIHJJDI
	{
	public:
		::System::Int32 COEMCOBPMKD; // 0x18
		::System::UInt32 PCOAHCFKJLM; // 0x1C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMMDPHGEHHO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean FIGLOLHCHHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMDPHGEHHO_FIGLOLHCHHL_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + FMMDPHGEHHO_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + FMMDPHGEHHO_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
