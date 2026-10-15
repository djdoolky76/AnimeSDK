#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKHGEDHCPHJ.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALAIBAJCPOO_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0x12CE04F0)
#define ALAIBAJCPOO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CDFE40)
#define ALAIBAJCPOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CE0170)
#define ALAIBAJCPOO_DOONENTER_OFFSET UNITYSDK_OFFSET(0x12CE0060)
#define ALAIBAJCPOO_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x12CE00E0)
#define ALAIBAJCPOO_JPLENOOFHJN_OFFSET UNITYSDK_OFFSET(0x12CE0490)
#define ALAIBAJCPOO_LEGCGKADCBO_OFFSET UNITYSDK_OFFSET(0x12CE0240)

	class ALAIBAJCPOO : public ::FKHGEDHCPHJ
	{
	public:
		::Il2CppArray<::RPG::GameCore::EntityType>* CCILDEPLEFF; // 0xC8
		::System::Action* NMPLHCJKEOI; // 0xD0
		::System::Action* FFKBFPKEPEN; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* DANLMFFLFLH; // 0xE0
		::System::Boolean GFAMGLFOMGI; // 0xE8
		::System::Boolean INNLLCMIDFK; // 0xE9
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ALAIBAJCPOO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ALAIBAJCPOO_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + ALAIBAJCPOO_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAIBAJCPOO_DISPOSE_OFFSET))(this);
		}

		::System::Void LEGCGKADCBO(::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*))((::PBYTE)hIl2Cpp + ALAIBAJCPOO_LEGCGKADCBO_OFFSET))(this, a1);
		}

		::System::Void JPLENOOFHJN(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + ALAIBAJCPOO_JPLENOOFHJN_OFFSET))(this, a1, a2);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALAIBAJCPOO_BKCPMPMKLFI_OFFSET))(this, a1);
		}

	};
