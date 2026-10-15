#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MDJICBJCOGE;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }

#define MDJICBJCOGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D14A630)
#define MDJICBJCOGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D14A640)
#define MDJICBJCOGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D14A600)

	class MDJICBJCOGE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BAGFJGCLLCK; // 0x18
		::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OBNDBPAFEOK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJICBJCOGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDJICBJCOGE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDJICBJCOGE*))((::PBYTE)hIl2Cpp + MDJICBJCOGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDJICBJCOGE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDJICBJCOGE*))((::PBYTE)hIl2Cpp + MDJICBJCOGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
