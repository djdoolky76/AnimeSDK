#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCMJBMIKIFO;
class KKGMHJNMOID;

#define DPDHMOALAFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C51B380)
#define DPDHMOALAFG_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C520EE0)
#define DPDHMOALAFG_GET_DISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0x1C520EF0)
#define DPDHMOALAFG_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C520ED0)

inline static constexpr unsigned int DPDHMOALAFG_TypeDefinitionIndex = 41745;

	class DPDHMOALAFG : public ::System::Object
	{
	public:
		::KKGMHJNMOID* _Config_k__BackingField; // 0x10
		::JCMJBMIKIFO* _DisplayConfig_k__BackingField; // 0x18
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
