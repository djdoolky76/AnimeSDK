#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskConfig; }

#define BECGIIJOOJP_CTOR_OFFSET UNITYSDK_OFFSET(0x16300B10)

inline static constexpr unsigned int BECGIIJOOJP_TypeDefinitionIndex = 61073;

	class BECGIIJOOJP : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NEMENNBHAFK; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MGNOHDHNDNB; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AONJGMLJNLC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECGIIJOOJP_CTOR_OFFSET))(this);
		}

	};
