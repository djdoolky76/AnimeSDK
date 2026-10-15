#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraData.h"
class GADFFIFFNHM;
class GBBPAALDNBG;

#define RPG_CLIENT_CHIMERAENDLESSDATA_CLEARENDLESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xCB44E40)
#define RPG_CLIENT_CHIMERAENDLESSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCB44C80)
#define RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0xCB44F50)
#define RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xCB44E90)
#define RPG_CLIENT_CHIMERAENDLESSDATA_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0xCB45010)
#define RPG_CLIENT_CHIMERAENDLESSDATA_SYNCENDLESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xCB44D60)
#define RPG_CLIENT_CHIMERAENDLESSDATA_UPDATEAFTERBATTLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xCB44C90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEndlessData_TypeDefinitionIndex = 63420;

	class ChimeraEndlessData : public ::RPG::Client::ChimeraData
	{
	public:
		::GBBPAALDNBG* _EndlessAttribute; // 0x40
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateAfterBattleAttribute(::GBBPAALDNBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBBPAALDNBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_UPDATEAFTERBATTLEATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void SyncEndlessAttribute(::GADFFIFFNHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GADFFIFFNHM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_SYNCENDLESSATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void ClearEndlessAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_CLEARENDLESSATTRIBUTE_OFFSET))(this);
		}

		::System::Int32 get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Int32 get_CurrentAtk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTATK_OFFSET))(this);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_GET_ISDEAD_OFFSET))(this);
		}

	};
}
