#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHLJJCMEDJ.h"
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroMonsterHitBoomProp; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEGBJAEAFDN_AABHECHJMAN_OFFSET UNITYSDK_OFFSET(0x163175C0)
#define BEGBJAEAFDN_BJNGJAIFMEF_OFFSET UNITYSDK_OFFSET(0x16318220)
#define BEGBJAEAFDN_BNFIGFKDLDP_OFFSET UNITYSDK_OFFSET(0x163186A0)
#define BEGBJAEAFDN_CLADEDPBACG_OFFSET UNITYSDK_OFFSET(0x16318040)
#define BEGBJAEAFDN_CTOR_OFFSET UNITYSDK_OFFSET(0x16316A90)
#define BEGBJAEAFDN_DCBCPEFCBBH_OFFSET UNITYSDK_OFFSET(0x16318180)
#define BEGBJAEAFDN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16316B00)
#define BEGBJAEAFDN_KJPFMNEPMKB_OFFSET UNITYSDK_OFFSET(0x16318A90)
#define BEGBJAEAFDN_MJPKPCOIIOD_OFFSET UNITYSDK_OFFSET(0x16319440)
#define BEGBJAEAFDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16316B50)

inline static constexpr unsigned int BEGBJAEAFDN_TypeDefinitionIndex = 58959;

	class BEGBJAEAFDN
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OAAMJPPKGJP; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ANNNEJPKFMB; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroMonsterHitBoomProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroMonsterHitBoomProp*))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AABHECHJMAN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_AABHECHJMAN_OFFSET))(this, a1);
		}

		static ::System::Boolean DCBCPEFCBBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_DCBCPEFCBBH_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* CLADEDPBACG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_CLADEDPBACG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* BJNGJAIFMEF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_BJNGJAIFMEF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* BNFIGFKDLDP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_BNFIGFKDLDP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* KJPFMNEPMKB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_KJPFMNEPMKB_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean MJPKPCOIIOD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::PDHLJJCMEDJ a3, ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::PDHLJJCMEDJ, ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*))((::PBYTE)hIl2Cpp + BEGBJAEAFDN_MJPKPCOIIOD_OFFSET))(a1, a2, a3, a4);
		}

	};
