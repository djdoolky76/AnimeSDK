#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceHUDTopToastMsgData; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2F9E40)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F9ED0)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_CATDATA_OFFSET UNITYSDK_OFFSET(0x1D2F9F80)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_TEXTSTR_OFFSET UNITYSDK_OFFSET(0x1D2F9FA0)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_CATDATA_OFFSET UNITYSDK_OFFSET(0x1D2F9F90)
#define RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_TEXTSTR_OFFSET UNITYSDK_OFFSET(0x1D2F9FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHUDTopToastMsgData_TypeDefinitionIndex = 64500;

	class CakeRaceHUDTopToastMsgData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceCatDataItem* _CatData_k__BackingField; // 0x10
		::System::String* _TextStr_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::CakeRaceHUDTopToastMsgData* Create(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::RPG::Client::CakeRaceHUDTopToastMsgData*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatData()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_CATDATA_OFFSET))(this);
		}

		::System::Void set_CatData(::RPG::Client::CakeRaceCatDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceCatDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_CATDATA_OFFSET))(this, a1);
		}

		::System::String* get_TextStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_GET_TEXTSTR_OFFSET))(this);
		}

		::System::Void set_TextStr(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDTOPTOASTMSGDATA_SET_TEXTSTR_OFFSET))(this, a1);
		}

	};
}
