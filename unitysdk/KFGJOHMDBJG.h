#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::CityCarFlow { class MonoCityCarConfigure; }
namespace System { class String; }

#define KFGJOHMDBJG_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xB39A1F0)
#define KFGJOHMDBJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB399EE0)
#define KFGJOHMDBJG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB39A030)
#define KFGJOHMDBJG_GET_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xB39A420)
#define KFGJOHMDBJG_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB39A3E0)
#define KFGJOHMDBJG_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB39A3F0)
#define KFGJOHMDBJG_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB39A400)
#define KFGJOHMDBJG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB39A190)
#define KFGJOHMDBJG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB399F00)
#define KFGJOHMDBJG_SET_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xB39A430)
#define KFGJOHMDBJG_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB39A410)

	class KFGJOHMDBJG : public ::System::Object
	{
	public:
		::System::String* _PrefabPath_k__BackingField; // 0x10
		::RPG::Client::CityCarFlow::MonoCityCarConfigure* _Configure_k__BackingField; // 0x18
		::System::Single _TimeScale_k__BackingField; // 0x20
		::System::UInt32 _GroupID_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::RPG::Client::CityCarFlow::MonoCityCarConfigure* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_GET_GROUPID_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::RPG::Client::CityCarFlow::MonoCityCarConfigure* get_Configure()
		{
			return ((::RPG::Client::CityCarFlow::MonoCityCarConfigure*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_GET_CONFIGURE_OFFSET))(this);
		}

		::System::Void set_Configure(::RPG::Client::CityCarFlow::MonoCityCarConfigure* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + KFGJOHMDBJG_SET_CONFIGURE_OFFSET))(this, a1);
		}

	};
