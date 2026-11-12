#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define JBIGEIHIFDN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A9DD0)

inline static constexpr unsigned int JBIGEIHIFDN_TypeDefinitionIndex = 63496;

	class JBIGEIHIFDN : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x10
		::System::String* DDLNOGGPKJF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIGEIHIFDN_CTOR_OFFSET))(this);
		}

	};
