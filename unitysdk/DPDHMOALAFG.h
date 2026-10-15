#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCMJBMIKIFO;
class KKGMHJNMOID;

#define DPDHMOALAFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C549840)
#define DPDHMOALAFG_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C54F3A0)
#define DPDHMOALAFG_GET_DISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0x1C54F3B0)
#define DPDHMOALAFG_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C54F390)

	class DPDHMOALAFG : public ::System::Object
	{
	public:
		::JCMJBMIKIFO* _DisplayConfig_k__BackingField; // 0x10
		::KKGMHJNMOID* _Config_k__BackingField; // 0x18
		::System::UInt32 _Identifier_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::KKGMHJNMOID* a2, ::JCMJBMIKIFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KKGMHJNMOID*, ::JCMJBMIKIFO*))((::PBYTE)hIl2Cpp + DPDHMOALAFG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_Identifier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDHMOALAFG_GET_IDENTIFIER_OFFSET))(this);
		}

		::KKGMHJNMOID* get_Config()
		{
			return ((::KKGMHJNMOID*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDHMOALAFG_GET_CONFIG_OFFSET))(this);
		}

		::JCMJBMIKIFO* get_DisplayConfig()
		{
			return ((::JCMJBMIKIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDHMOALAFG_GET_DISPLAYCONFIG_OFFSET))(this);
		}

	};
