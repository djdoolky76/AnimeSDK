#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMKKKHJMOCE;
class LCJPDOOLBEC;
namespace RPG::Client { class BattleElationStartToastData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC813660)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC8137D0)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0xC813B30)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC8138F0)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GET_POINTNUM_OFFSET UNITYSDK_OFFSET(0xC813A00)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationStartToastData_TypeDefinitionIndex = 72154;

	class BattleElationStartToastData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _PrefabPaths; // 0x10
		::Il2CppArray<::System::String*>* _FastAudioEventNames; // 0x18
		::LCJPDOOLBEC* _ElationPointManager; // 0x20
		::GMKKKHJMOCE* _LevelSetting; // 0x28
		::Il2CppArray<::System::String*>* _AudioEventNames; // 0x30
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

		::System::Int32 get_PointNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GET_POINTNUM_OFFSET))(this);
		}

	};
}
