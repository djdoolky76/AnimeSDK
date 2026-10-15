#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AJHEPIMIGBG___c__DisplayClass3_0.h"
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define AJHEPIMIGBG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBD380)
#define AJHEPIMIGBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CBE200)
#define AJHEPIMIGBG_HJLENPKNLAM_OFFSET UNITYSDK_OFFSET(0x12CBD400)
#define AJHEPIMIGBG__PERSISTDATA_G___PERSISTDYNAMICFLOAT_3_0_OFFSET UNITYSDK_OFFSET(0x12CBE120)

	class AJHEPIMIGBG : public ::System::Object
	{
	public:
		::RPG::GameCore::DamageByAttackProperty* AIGCLKPMGCD; // 0x10
		::System::Boolean GNOECGAMPGD; // 0x18
		::System::Void _ctor(::RPG::GameCore::DamageByAttackProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + AJHEPIMIGBG_CTOR_OFFSET))(this, a1);
		}

		::System::Void HJLENPKNLAM(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + AJHEPIMIGBG_HJLENPKNLAM_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHEPIMIGBG_DISPOSE_OFFSET))(this);
		}

		static ::RPG::GameCore::DynamicFloat* _PersistData_g___PersistDynamicFloat_3_0(::RPG::GameCore::DynamicFloat* a1, ::AJHEPIMIGBG___c__DisplayClass3_0 a2)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::DynamicFloat*, ::AJHEPIMIGBG___c__DisplayClass3_0))((::PBYTE)hIl2Cpp + AJHEPIMIGBG__PERSISTDATA_G___PERSISTDYNAMICFLOAT_3_0_OFFSET))(a1, a2);
		}

	};
