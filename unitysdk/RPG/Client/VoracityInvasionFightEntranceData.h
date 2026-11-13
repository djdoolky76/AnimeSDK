#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC80B30)
#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x1BC80AF0)
#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1BC80B10)
#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_SET_GOTOID_OFFSET UNITYSDK_OFFSET(0x1BC80B00)
#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1BC80B20)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionFightEntranceData_TypeDefinitionIndex = 70207;

	class VoracityInvasionFightEntranceData : public ::System::Object
	{
	public:
		::System::Boolean _IsOpen_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _GotoID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_GET_GOTOID_OFFSET))(this);
		}

		::System::Void set_GotoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_SET_GOTOID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_GET_ISOPEN_OFFSET))(this);
		}

		::System::Void set_IsOpen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_SET_ISOPEN_OFFSET))(this, a1);
		}

	};
}
