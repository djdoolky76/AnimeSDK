#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFGGDNIGKGG;

#define OJOHBFMIDJD_GFLKBJPGIKK_CTOR_OFFSET UNITYSDK_OFFSET(0xBEC5ED0)
#define OJOHBFMIDJD_GFLKBJPGIKK_GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0xBEC6170)
#define OJOHBFMIDJD_GFLKBJPGIKK_GET_ISTARGET_OFFSET UNITYSDK_OFFSET(0xBEC6150)
#define OJOHBFMIDJD_GFLKBJPGIKK_SET_DISPLAY_OFFSET UNITYSDK_OFFSET(0xBEC6180)
#define OJOHBFMIDJD_GFLKBJPGIKK_SET_ISTARGET_OFFSET UNITYSDK_OFFSET(0xBEC6160)

inline static constexpr unsigned int OJOHBFMIDJD_GFLKBJPGIKK_TypeDefinitionIndex = 79557;

	class OJOHBFMIDJD_GFLKBJPGIKK : public ::System::Object
	{
	public:
		::KFGGDNIGKGG* _Display_k__BackingField; // 0x10
		::System::Boolean _IsTarget_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_GFLKBJPGIKK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_GFLKBJPGIKK_GET_ISTARGET_OFFSET))(this);
		}

		::System::Void set_IsTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_GFLKBJPGIKK_SET_ISTARGET_OFFSET))(this, a1);
		}

		::KFGGDNIGKGG* get_Display()
		{
			return ((::KFGGDNIGKGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_GFLKBJPGIKK_GET_DISPLAY_OFFSET))(this);
		}

		::System::Void set_Display(::KFGGDNIGKGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGGDNIGKGG*))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_GFLKBJPGIKK_SET_DISPLAY_OFFSET))(this, a1);
		}

	};
