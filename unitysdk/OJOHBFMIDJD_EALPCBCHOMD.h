#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;

#define OJOHBFMIDJD_EALPCBCHOMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBECD560)
#define OJOHBFMIDJD_EALPCBCHOMD_GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0xBECD610)
#define OJOHBFMIDJD_EALPCBCHOMD_GET_ISTARGET_OFFSET UNITYSDK_OFFSET(0xBECD5F0)
#define OJOHBFMIDJD_EALPCBCHOMD_SET_DISPLAY_OFFSET UNITYSDK_OFFSET(0xBECD620)
#define OJOHBFMIDJD_EALPCBCHOMD_SET_ISTARGET_OFFSET UNITYSDK_OFFSET(0xBECD600)

inline static constexpr unsigned int OJOHBFMIDJD_EALPCBCHOMD_TypeDefinitionIndex = 79559;

	class OJOHBFMIDJD_EALPCBCHOMD : public ::System::Object
	{
	public:
		::FKLECLLJCEH* _Display_k__BackingField; // 0x10
		::System::Boolean _IsTarget_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_EALPCBCHOMD_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_EALPCBCHOMD_GET_ISTARGET_OFFSET))(this);
		}

		::System::Void set_IsTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_EALPCBCHOMD_SET_ISTARGET_OFFSET))(this, a1);
		}

		::FKLECLLJCEH* get_Display()
		{
			return ((::FKLECLLJCEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_EALPCBCHOMD_GET_DISPLAY_OFFSET))(this);
		}

		::System::Void set_Display(::FKLECLLJCEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLECLLJCEH*))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_EALPCBCHOMD_SET_DISPLAY_OFFSET))(this, a1);
		}

	};
