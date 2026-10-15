#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLHAKDMEJHB;
namespace RPG::Client::DiceCombat { class DiceCombatV2RankLevelData; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCCAC190)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCCAC180)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_ICONBGPATH_OFFSET UNITYSDK_OFFSET(0xCCAC2B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCCAC260)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_RANKLEVELID_OFFSET UNITYSDK_OFFSET(0xCCAC210)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2RankLevelData_TypeDefinitionIndex = 76157;

	class DiceCombatV2RankLevelData : public ::System::Object
	{
	public:
		::HLHAKDMEJHB* _Row; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2RankLevelData* Create(::HLHAKDMEJHB* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2RankLevelData*(*)(::HLHAKDMEJHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_RankLevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_RANKLEVELID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_IconBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_ICONBGPATH_OFFSET))(this);
		}

	};
}
