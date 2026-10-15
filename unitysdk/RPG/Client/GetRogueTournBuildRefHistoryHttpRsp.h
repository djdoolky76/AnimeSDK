#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_GETROGUETOURNBUILDREFHISTORYHTTPRSP_CTOR_OFFSET UNITYSDK_OFFSET(0xD0AE910)

namespace RPG::Client
{
	inline static constexpr unsigned int GetRogueTournBuildRefHistoryHttpRsp_TypeDefinitionIndex = 67792;

	class GetRogueTournBuildRefHistoryHttpRsp : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* HistoryList; // 0x10
		::System::UInt32 Version; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GETROGUETOURNBUILDREFHISTORYHTTPRSP_CTOR_OFFSET))(this);
		}

	};
}
