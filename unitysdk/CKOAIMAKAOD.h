#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdvNpcFaceToPlayer; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }

#define CKOAIMAKAOD_CTOR_OFFSET UNITYSDK_OFFSET(0xD764450)
#define CKOAIMAKAOD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD764470)
#define CKOAIMAKAOD_EJBCJFGEBEF_OFFSET UNITYSDK_OFFSET(0xD7654F0)
#define CKOAIMAKAOD_FMNLLMGPDHI_OFFSET UNITYSDK_OFFSET(0xD7649A0)
#define CKOAIMAKAOD_IHNMHLFAOFO_OFFSET UNITYSDK_OFFSET(0xD765A30)
#define CKOAIMAKAOD_ILMDNHLLBEO_OFFSET UNITYSDK_OFFSET(0xD764FB0)
#define CKOAIMAKAOD_LPFLDLLPLOD_OFFSET UNITYSDK_OFFSET(0xD7647F0)
#define CKOAIMAKAOD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD765BC0)
#define CKOAIMAKAOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7644B0)
#define CKOAIMAKAOD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD764EE0)
#define CKOAIMAKAOD_TICK_OFFSET UNITYSDK_OFFSET(0xD764AD0)
#define CKOAIMAKAOD__ONTASKSUCCESS_B__7_2_OFFSET UNITYSDK_OFFSET(0xD766040)
#define CKOAIMAKAOD__ONTASKSUCCESS_B__7_3_OFFSET UNITYSDK_OFFSET(0xD7660B0)
#define CKOAIMAKAOD__TICK_B__4_0_OFFSET UNITYSDK_OFFSET(0xD765E50)

inline static constexpr unsigned int CKOAIMAKAOD_TypeDefinitionIndex = 52403;

	class CKOAIMAKAOD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* FEECCONDBLP; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::GameEntity* ACJGKBDLCMF; // 0x28
		::RPG::GameCore::AdvNpcFaceToPlayer* OFKGLJOAMLD; // 0x30
		::System::Boolean FPGKLEODJJN; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 CLHMDIBGFHF; // 0x3C
		::System::UInt32 LODFAGHIBCB; // 0x40
		::UnityEngine::Vector3 DJGGGBDMEFJ; // 0x44
		::System::Single LBCKFFGDCFB; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFaceToPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFaceToPlayer*))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_TICK_OFFSET))(this, a1);
		}

		::System::Boolean ILMDNHLLBEO(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_ILMDNHLLBEO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IHNMHLFAOFO(::RPG::GameCore::AdventureCharacterController* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::Single))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_IHNMHLFAOFO_OFFSET))(this, a1, a2);
		}

		::System::Void EJBCJFGEBEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_EJBCJFGEBEF_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LPFLDLLPLOD(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::TargetEvaluator* a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TargetEvaluator*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_LPFLDLLPLOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntity* FMNLLMGPDHI()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_FMNLLMGPDHI_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKOAIMAKAOD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _Tick_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOAIMAKAOD__TICK_B__4_0_OFFSET))(this);
		}

		::System::Boolean _OnTaskSuccess_b__7_2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CKOAIMAKAOD__ONTASKSUCCESS_B__7_2_OFFSET))(this, a1);
		}

		::System::Boolean _OnTaskSuccess_b__7_3(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CKOAIMAKAOD__ONTASKSUCCESS_B__7_3_OFFSET))(this, a1);
		}

	};
