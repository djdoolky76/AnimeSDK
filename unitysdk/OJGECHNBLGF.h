#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/OJGECHNBLGF_AnimTriggerType.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureTriggerAnimStateWithMove; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }

#define OJGECHNBLGF_CCTOR_OFFSET UNITYSDK_OFFSET(0xC7AD110)
#define OJGECHNBLGF_CTOR_OFFSET UNITYSDK_OFFSET(0xC7AB450)
#define OJGECHNBLGF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7AB510)
#define OJGECHNBLGF_DMGGMEFIALG_OFFSET UNITYSDK_OFFSET(0xC7AB8A0)
#define OJGECHNBLGF_FAELOPANPPM_OFFSET UNITYSDK_OFFSET(0xC7ABB30)
#define OJGECHNBLGF_KMLOAHAALJJ_OFFSET UNITYSDK_OFFSET(0xC7ABF10)
#define OJGECHNBLGF_ONEIGKAKCPB_OFFSET UNITYSDK_OFFSET(0xC7AB820)
#define OJGECHNBLGF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7AB550)
#define OJGECHNBLGF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC7ABE60)
#define OJGECHNBLGF_PBEDFGILDCE_OFFSET UNITYSDK_OFFSET(0xC7AC830)
#define OJGECHNBLGF_TICK_OFFSET UNITYSDK_OFFSET(0xC7ABEB0)

inline static constexpr unsigned int OJGECHNBLGF_TypeDefinitionIndex = 59154;

	class OJGECHNBLGF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureTriggerAnimStateWithMove* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Int32 APNGJPMPMOB; // 0x28
		::OJGECHNBLGF_AnimTriggerType ALACEJLHIAI; // 0x2C
		static ::System::Int32* StaticGet_AMMDFNIBOKO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJGECHNBLGF")->GetStaticField(0x10840);
		}

		static ::System::Int32* StaticGet_NPNAIPNHBGP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJGECHNBLGF")->GetStaticField(0x10844);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAnimStateWithMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + OJGECHNBLGF_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJGECHNBLGF_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGECHNBLGF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGECHNBLGF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGECHNBLGF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJGECHNBLGF_TICK_OFFSET))(this, a1);
		}

		::System::Void FAELOPANPPM(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + OJGECHNBLGF_FAELOPANPPM_OFFSET))(this, a1);
		}

		::System::Void DMGGMEFIALG(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + OJGECHNBLGF_DMGGMEFIALG_OFFSET))(this, a1);
		}

		::System::Void KMLOAHAALJJ(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + OJGECHNBLGF_KMLOAHAALJJ_OFFSET))(this, a1);
		}

		::System::Void PBEDFGILDCE(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + OJGECHNBLGF_PBEDFGILDCE_OFFSET))(this, a1);
		}

		::System::Boolean ONEIGKAKCPB(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + OJGECHNBLGF_ONEIGKAKCPB_OFFSET))(this, a1);
		}

	};
