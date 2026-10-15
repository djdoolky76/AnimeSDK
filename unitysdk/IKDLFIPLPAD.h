#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMKLCCOJMOF_InnerPauseReason.h"
#include "unitysdk/System/Object.h"
class ODCELNBAEIB;

#define IKDLFIPLPAD_CTOR_OFFSET UNITYSDK_OFFSET(0x164848D0)
#define IKDLFIPLPAD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16484A40)
#define IKDLFIPLPAD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x164849A0)
#define IKDLFIPLPAD_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x16484A00)
#define IKDLFIPLPAD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x164848E0)

inline static constexpr unsigned int IKDLFIPLPAD_TypeDefinitionIndex = 79089;

	class IKDLFIPLPAD : public ::System::Object
	{
	public:
		::System::UInt32 BOHKGIMLCNH; // 0x10
		::System::Boolean MCAPIAKDMAA; // 0x14
		::BMKLCCOJMOF_InnerPauseReason HBOPBCMODIE; // 0x15
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::BMKLCCOJMOF_InnerPauseReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::BMKLCCOJMOF_InnerPauseReason))((::PBYTE)hIl2Cpp + IKDLFIPLPAD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + IKDLFIPLPAD_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKDLFIPLPAD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDLFIPLPAD_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDLFIPLPAD_HADOHLNHHGB_OFFSET))(this);
		}

	};
