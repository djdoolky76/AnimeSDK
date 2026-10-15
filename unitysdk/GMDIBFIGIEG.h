#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFJMOFNDDEH;

#define GMDIBFIGIEG_BPNMABIFCAC_OFFSET UNITYSDK_OFFSET(0x1C5114D0)
#define GMDIBFIGIEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5293B0)
#define GMDIBFIGIEG_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C529320)
#define GMDIBFIGIEG_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C529310)
#define GMDIBFIGIEG_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C529390)
#define GMDIBFIGIEG_IAAGHEIDABL_OFFSET UNITYSDK_OFFSET(0x1C529330)
#define GMDIBFIGIEG_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C5293A0)

inline static constexpr unsigned int GMDIBFIGIEG_TypeDefinitionIndex = 41877;

	class GMDIBFIGIEG : public ::System::Object
	{
	public:
		::FFJMOFNDDEH* _Config_k__BackingField; // 0x10
		::System::Boolean _IsActive_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _Identifier_k__BackingField; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::FFJMOFNDDEH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::FFJMOFNDDEH*))((::PBYTE)hIl2Cpp + GMDIBFIGIEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Identifier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDIBFIGIEG_GET_IDENTIFIER_OFFSET))(this);
		}

		::FFJMOFNDDEH* get_Config()
		{
			return ((::FFJMOFNDDEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDIBFIGIEG_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean IAAGHEIDABL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDIBFIGIEG_IAAGHEIDABL_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDIBFIGIEG_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMDIBFIGIEG_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Void BPNMABIFCAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDIBFIGIEG_BPNMABIFCAC_OFFSET))(this);
		}

	};
