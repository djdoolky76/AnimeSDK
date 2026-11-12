#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvOverridePropButtonConfig; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define DOMEMICAJCC_CCIMOPLACCO_OFFSET UNITYSDK_OFFSET(0x12DEA780)
#define DOMEMICAJCC_CMMJFAELBKE_OFFSET UNITYSDK_OFFSET(0x12DEA5E0)
#define DOMEMICAJCC_CTOR_OFFSET UNITYSDK_OFFSET(0x12DEA5B0)
#define DOMEMICAJCC_FOBPJDKPEBP_OFFSET UNITYSDK_OFFSET(0x12DEA900)
#define DOMEMICAJCC_MMCEJGGJANG_OFFSET UNITYSDK_OFFSET(0x12DEAD50)
#define DOMEMICAJCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12DEADD0)

inline static constexpr unsigned int DOMEMICAJCC_TypeDefinitionIndex = 53568;

	class DOMEMICAJCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOverridePropButtonConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOverridePropButtonConfig*))((::PBYTE)hIl2Cpp + DOMEMICAJCC_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* CMMJFAELBKE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMEMICAJCC_CMMJFAELBKE_OFFSET))(this);
		}

		::System::Void CCIMOPLACCO(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + DOMEMICAJCC_CCIMOPLACCO_OFFSET))(this, a1);
		}

		::System::Void FOBPJDKPEBP(::RPG::GameCore::ColliderTriggerComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderTriggerComponent*))((::PBYTE)hIl2Cpp + DOMEMICAJCC_FOBPJDKPEBP_OFFSET))(this, a1);
		}

		::System::String* MMCEJGGJANG(::RPG::GameCore::PropButtonConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::PropButtonConfig*))((::PBYTE)hIl2Cpp + DOMEMICAJCC_MMCEJGGJANG_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMEMICAJCC_ONTASKBEGIN_OFFSET))(this);
		}

	};
