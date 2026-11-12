#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMKKKHJMOCE;
class LCJPDOOLBEC;
class MLLHPMHAAPL;
namespace RPG::Client { class BattleElationStartToastData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD17D0C0)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD17D3D0)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xD17D800)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0xD17D640)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xD17D510)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GET_POINTNUM_OFFSET UNITYSDK_OFFSET(0xD17D3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationStartToastData_TypeDefinitionIndex = 74208;

	class BattleElationStartToastData : public ::System::Object
	{
	public:
		::LCJPDOOLBEC* _ElationPointManager; // 0x10
		::GMKKKHJMOCE* _LevelSetting; // 0x18
		::MLLHPMHAAPL* _Strategy; // 0x20
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
