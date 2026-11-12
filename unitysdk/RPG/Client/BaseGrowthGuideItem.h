#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBNNKHADPJG;

#define RPG_CLIENT_BASEGROWTHGUIDEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD14A610)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xD14A3B0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_GOGROWTH_OFFSET UNITYSDK_OFFSET(0xD14A3D0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_HASGROWTHCOMMAND_OFFSET UNITYSDK_OFFSET(0xD14A5C0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWABLE_OFFSET UNITYSDK_OFFSET(0xD14A520)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWTHCOMMAND_OFFSET UNITYSDK_OFFSET(0xD14A570)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xD14A3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGrowthGuideItem_TypeDefinitionIndex = 67464;

	class BaseGrowthGuideItem : public ::System::Object
	{
	public:
		::DBNNKHADPJG* _GrowthCommand; // 0x10
		::System::Boolean _IsGrowable_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Void set_IsGrowable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SET_ISGROWABLE_OFFSET))(this, a1);
		}

		::System::Void GoGrowth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_GOGROWTH_OFFSET))(this);
		}

		::System::Void SetGrowable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWABLE_OFFSET))(this, a1);
		}

		::System::Void SetGrowthCommand(::DBNNKHADPJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBNNKHADPJG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWTHCOMMAND_OFFSET))(this, a1);
		}

		::System::Boolean HasGrowthCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_HASGROWTHCOMMAND_OFFSET))(this);
		}

	};
}
