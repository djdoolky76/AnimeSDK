#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCEMKEPNKEH.h"
#include "unitysdk/System/Exception.h"

#define GBLCODHOIGG_CTOR_OFFSET UNITYSDK_OFFSET(0x16887230)
#define GBLCODHOIGG_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x16887330)
#define GBLCODHOIGG_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x16887340)

inline static constexpr unsigned int GBLCODHOIGG_TypeDefinitionIndex = 68096;

	class GBLCODHOIGG : public ::System::Exception
	{
	public:
		::JCEMKEPNKEH _Retcode_k__BackingField; // 0x88
		::System::UInt32 _MainMissionID_k__BackingField; // 0x8C
		::System::Void _ctor(::System::UInt32 a1, ::JCEMKEPNKEH a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JCEMKEPNKEH))((::PBYTE)hIl2Cpp + GBLCODHOIGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLCODHOIGG_GET_MAINMISSIONID_OFFSET))(this);
		}

		::JCEMKEPNKEH get_Retcode()
		{
			return ((::JCEMKEPNKEH(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLCODHOIGG_GET_RETCODE_OFFSET))(this);
		}

	};
