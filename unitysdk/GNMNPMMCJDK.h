#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraAbilityPassive; }

#define GNMNPMMCJDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB4EA0)

	class GNMNPMMCJDK : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraAbilityPassive*>* PIMNOEDFJGM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMNPMMCJDK_CTOR_OFFSET))(this);
		}

	};
