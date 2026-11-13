#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMKKKHJMOCE;
class LCJPDOOLBEC;
class MLLHPMHAAPL;
namespace RPG::Client { class BattleElationStartToastData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B1B94C0)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B9790)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1B1B9BC0)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B1B9A00)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B1B98D0)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GET_POINTNUM_OFFSET UNITYSDK_OFFSET(0x1B1B97A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationStartToastData_TypeDefinitionIndex = 74207;

	class BattleElationStartToastData : public ::System::Object
	{
	public:
		::GMKKKHJMOCE* _LevelSetting; // 0x10
		::MLLHPMHAAPL* _Strategy; // 0x18
		::LCJPDOOLBEC* _ElationPointManager; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleElationStartToastData* Create()
		{
			return ((::RPG::Client::BattleElationStartToastData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CREATE_OFFSET))();
		}

		::System::String* GetPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETPREFABPATH_OFFSET))(this);
		}

		::System::String* GetAudioEventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETAUDIOEVENTNAME_OFFSET))(this);
		}

		::System::String* GetAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETANIMATIONNAME_OFFSET))(this);
		}

		::System::Int32 get_PointNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GET_POINTNUM_OFFSET))(this);
		}

	};
}
