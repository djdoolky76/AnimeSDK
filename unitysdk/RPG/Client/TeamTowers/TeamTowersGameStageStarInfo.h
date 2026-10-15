#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class OJNEALELKJB;

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE1E6D70)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE1E6E00)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_INITIALHIDE_OFFSET UNITYSDK_OFFSET(0xE1E6EC0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE1E6F10)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xE1E6E70)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_STARID_OFFSET UNITYSDK_OFFSET(0xE1E6DB0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE1E6F20)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersGameStageStarInfo_TypeDefinitionIndex = 79060;

	class TeamTowersGameStageStarInfo : public ::System::Object
	{
	public:
		::OJNEALELKJB* _StarRow; // 0x10
		::System::Boolean _IsActive_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_STARID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Boolean get_InitialHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_INITIALHIDE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTAGESTARINFO_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
}
