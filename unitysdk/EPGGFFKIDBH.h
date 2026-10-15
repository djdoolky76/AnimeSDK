#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
class BGMKDGACBNI;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class RtAddStageAbilityByName; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EPGGFFKIDBH_CTOR_OFFSET UNITYSDK_OFFSET(0x155C88C0)
#define EPGGFFKIDBH_DJFNGICIECG_OFFSET UNITYSDK_OFFSET(0x155C8AE0)
#define EPGGFFKIDBH_GGOBOBEOKME_OFFSET UNITYSDK_OFFSET(0x155C8A10)
#define EPGGFFKIDBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C88F0)

inline static constexpr unsigned int EPGGFFKIDBH_TypeDefinitionIndex = 53817;

	class EPGGFFKIDBH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtAddStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtAddStageAbilityByName*))((::PBYTE)hIl2Cpp + EPGGFFKIDBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGGFFKIDBH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GGOBOBEOKME(::BGMKDGACBNI* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGMKDGACBNI*, ::System::String*))((::PBYTE)hIl2Cpp + EPGGFFKIDBH_GGOBOBEOKME_OFFSET))(this, a1, a2);
		}

		::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* DJFNGICIECG()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGGFFKIDBH_DJFNGICIECG_OFFSET))(this);
		}

	};
