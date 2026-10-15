#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOHAPENNHF.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MHHBDDMJOII;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionEscalatorInfo; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define AKMKHFACFCE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD8140)
#define AKMKHFACFCE_FCMKHIPNDPG_OFFSET UNITYSDK_OFFSET(0x12CD8130)
#define AKMKHFACFCE_FJOCLMDBABC_OFFSET UNITYSDK_OFFSET(0x12CD8470)
#define AKMKHFACFCE_FPPEKOPFAMO_OFFSET UNITYSDK_OFFSET(0x12CD8A50)
#define AKMKHFACFCE_GET_BINDPROPGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0x12CD8120)
#define AKMKHFACFCE_GET_BINDPROPGROUPID_OFFSET UNITYSDK_OFFSET(0x12CD8110)
#define AKMKHFACFCE_GET_WORLDUP_OFFSET UNITYSDK_OFFSET(0x12CD8B50)
#define AKMKHFACFCE_KKHAEKMFIOC_OFFSET UNITYSDK_OFFSET(0x12CD8920)
#define AKMKHFACFCE_LEAKKKGGIMF_OFFSET UNITYSDK_OFFSET(0x12CD8B40)
#define AKMKHFACFCE_LOHIFEMCGMP_OFFSET UNITYSDK_OFFSET(0x12CD89C0)
#define AKMKHFACFCE_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x12CD87C0)

	class AKMKHFACFCE : public ::ICOHAPENNHF
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::System::Boolean EGGNNPNDIDD; // 0x88
		::System::Byte _padding0[0x3];
		::System::UInt32 _BindPropGroupEntityID_k__BackingField; // 0x8C
		::UnityEngine::Vector3 _WorldUp_k__BackingField; // 0x90
		::System::UInt32 _BindPropGroupID_k__BackingField; // 0x9C
		::System::Void _ctor(::MHHBDDMJOII* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MHHBDDMJOII*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AKMKHFACFCE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_BindPropGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKHFACFCE_GET_BINDPROPGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_BindPropGroupEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKHFACFCE_GET_BINDPROPGROUPENTITYID_OFFSET))(this);
		}

		::RPG::Client::EPedestrianV2MotionState FCMKHIPNDPG()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKHFACFCE_FCMKHIPNDPG_OFFSET))(this);
		}

		::System::Void FJOCLMDBABC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKHFACFCE_FJOCLMDBABC_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKHFACFCE_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void KKHAEKMFIOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKMKHFACFCE_KKHAEKMFIOC_OFFSET))(this, a1);
		}

		::System::Void LOHIFEMCGMP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKMKHFACFCE_LOHIFEMCGMP_OFFSET))(this, a1);
		}

		::System::Void FPPEKOPFAMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKHFACFCE_FPPEKOPFAMO_OFFSET))(this);
		}

		::System::Boolean LEAKKKGGIMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKHFACFCE_LEAKKKGGIMF_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_WorldUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKHFACFCE_GET_WORLDUP_OFFSET))(this);
		}

	};
