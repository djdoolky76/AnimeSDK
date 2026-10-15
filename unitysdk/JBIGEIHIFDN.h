#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define JBIGEIHIFDN_CTOR_OFFSET UNITYSDK_OFFSET(0x16570DE0)

	class JBIGEIHIFDN : public ::System::Object
	{
	public:
		::System::String* DDLNOGGPKJF; // 0x10
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIGEIHIFDN_CTOR_OFFSET))(this);
		}

	};
