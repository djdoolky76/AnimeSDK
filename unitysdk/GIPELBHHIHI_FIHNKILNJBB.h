#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define GIPELBHHIHI_FIHNKILNJBB_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x15A45010)
#define GIPELBHHIHI_FIHNKILNJBB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A44F10)
#define GIPELBHHIHI_FIHNKILNJBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A44FC0)
#define GIPELBHHIHI_FIHNKILNJBB_GET_POSE0_OFFSET UNITYSDK_OFFSET(0x15A45020)
#define GIPELBHHIHI_FIHNKILNJBB_GET_POSE1_OFFSET UNITYSDK_OFFSET(0x15A45030)
#define GIPELBHHIHI_FIHNKILNJBB_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x15A44B70)
#define GIPELBHHIHI_FIHNKILNJBB_JKDOMIHBCCK_OFFSET UNITYSDK_OFFSET(0x15A45040)
#define GIPELBHHIHI_FIHNKILNJBB_MJMDNAFOCHC_OFFSET UNITYSDK_OFFSET(0x15A440A0)
#define GIPELBHHIHI_FIHNKILNJBB_PIIJDCEDGOD_OFFSET UNITYSDK_OFFSET(0x15A43CD0)

inline static constexpr unsigned int GIPELBHHIHI_FIHNKILNJBB_TypeDefinitionIndex = 60628;

	class GIPELBHHIHI_FIHNKILNJBB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* IMGJFJKONLK; // 0x10
		::RPG::GameCore::GameEntity* OFCDMJAICDI; // 0x18
		::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* HGOJNFKDIMA; // 0x20
		::RPG::GameCore::MapRotationVolumeState DLNIGFGLPLJ; // 0x28
		::System::UInt32 _Pose1_k__BackingField; // 0x2C
		::System::UInt32 _Pose0_k__BackingField; // 0x30
		::System::UInt32 JGGDKOCIEGH; // 0x34
		::System::UInt32 PEEFHNHDBMF; // 0x38
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FIHNKILNJBB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PIIJDCEDGOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FIHNKILNJBB_PIIJDCEDGOD_OFFSET))(this);
		}

		::System::Void MJMDNAFOCHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FIHNKILNJBB_MJMDNAFOCHC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FIHNKILNJBB_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::MapRotationVolumeState BGDKFHEBDFJ()
		{
			return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FIHNKILNJBB_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::RPG::GameCore::MapRotationVolumeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationVolumeState))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FIHNKILNJBB_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::UInt32 get_Pose0()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FIHNKILNJBB_GET_POSE0_OFFSET))(this);
		}

		::System::UInt32 get_Pose1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FIHNKILNJBB_GET_POSE1_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* JKDOMIHBCCK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FIHNKILNJBB_JKDOMIHBCCK_OFFSET))(this);
		}

	};
