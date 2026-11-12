#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PJMIPHILAGG;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }

#define GDIHOELAPAD_AMCNIGJIPOM_OFFSET UNITYSDK_OFFSET(0x168D4500)
#define GDIHOELAPAD_CTOR_OFFSET UNITYSDK_OFFSET(0x168D3FF0)
#define GDIHOELAPAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168D4000)
#define GDIHOELAPAD_ENOKHLMCGDP_OFFSET UNITYSDK_OFFSET(0x168D49F0)
#define GDIHOELAPAD_EPAMJLIIPEL_OFFSET UNITYSDK_OFFSET(0x168D4390)
#define GDIHOELAPAD_HJNHGNKPKJI_OFFSET UNITYSDK_OFFSET(0x168D4CF0)
#define GDIHOELAPAD_HPFANEEJCBM_OFFSET UNITYSDK_OFFSET(0x168D4B70)
#define GDIHOELAPAD_JLCAGLGJNMJ_OFFSET UNITYSDK_OFFSET(0x168D4050)
#define GDIHOELAPAD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x168D4960)
#define GDIHOELAPAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x168D4120)
#define GDIHOELAPAD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x168D4910)
#define GDIHOELAPAD_TICK_OFFSET UNITYSDK_OFFSET(0x168D4810)

inline static constexpr unsigned int GDIHOELAPAD_TypeDefinitionIndex = 53820;

	class GDIHOELAPAD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::PJMIPHILAGG* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x28
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x30
		::UnityEngine::Vector3 MAJNABOELDH; // 0x38
		::System::Boolean KIIHKAIBHHH; // 0x44
		// static const ::System::String* PJCHLPNPPCH; // 0x0
		// static const ::System::String* ANEGJILFHPG; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PJMIPHILAGG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PJMIPHILAGG*))((::PBYTE)hIl2Cpp + GDIHOELAPAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHOELAPAD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHOELAPAD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDIHOELAPAD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHOELAPAD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDIHOELAPAD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void AMCNIGJIPOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHOELAPAD_AMCNIGJIPOM_OFFSET))(this);
		}

		::UnityEngine::Vector3 EPAMJLIIPEL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GDIHOELAPAD_EPAMJLIIPEL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HJNHGNKPKJI(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + GDIHOELAPAD_HJNHGNKPKJI_OFFSET))(this, a1, a2);
		}

		::System::Int32 HPFANEEJCBM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHOELAPAD_HPFANEEJCBM_OFFSET))(this);
		}

		::System::String* ENOKHLMCGDP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHOELAPAD_ENOKHLMCGDP_OFFSET))(this);
		}

		::System::Void JLCAGLGJNMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHOELAPAD_JLCAGLGJNMJ_OFFSET))(this);
		}

	};
