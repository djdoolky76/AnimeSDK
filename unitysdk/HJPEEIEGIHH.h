#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }

#define HJPEEIEGIHH_CLEAR_OFFSET UNITYSDK_OFFSET(0x15D368B0)
#define HJPEEIEGIHH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D36900)

	class HJPEEIEGIHH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* NECENEHPHIG; // 0x10
		::System::Int32 HCDEOKNIGKG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPEEIEGIHH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPEEIEGIHH_CLEAR_OFFSET))(this);
		}

	};
