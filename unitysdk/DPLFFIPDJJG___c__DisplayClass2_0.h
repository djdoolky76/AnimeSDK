#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace RPG::GameCore { class MunicipalChatNPCInfo; }

#define DPLFFIPDJJG___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x126596C0)
#define DPLFFIPDJJG___C__DISPLAYCLASS2_0__LOADCHATCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x1265A4D0)

	class DPLFFIPDJJG___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::MunicipalChatNPCInfo* npcInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _LoadChatConfig_b__0(::RPG::GameCore::MunicipalChatEntityInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MunicipalChatEntityInfo*))((::PBYTE)hIl2Cpp + DPLFFIPDJJG___C__DISPLAYCLASS2_0__LOADCHATCONFIG_B__0_OFFSET))(this, a1);
		}

	};
