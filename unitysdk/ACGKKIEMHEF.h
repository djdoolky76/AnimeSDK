#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ACGKKIEMHEF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }

#define ACGKKIEMHEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA5BA0)
#define ACGKKIEMHEF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCA5BB0)
#define ACGKKIEMHEF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCA5B70)

	class ACGKKIEMHEF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KKGNDNGNIDI; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* HINABLHELDI; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OFCDELJJMNP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKKIEMHEF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ACGKKIEMHEF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACGKKIEMHEF*))((::PBYTE)hIl2Cpp + ACGKKIEMHEF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ACGKKIEMHEF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACGKKIEMHEF*))((::PBYTE)hIl2Cpp + ACGKKIEMHEF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
