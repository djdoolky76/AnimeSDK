#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OrbitTargetPosType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BHELCIBGKGA;
class CruiseOrbitBGCurvePlugin;
class IHKLFDPCFDB;
class OEPOKOJHKEL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define NAFGDKPCCOA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA534B0)
#define NAFGDKPCCOA_GET_HARDDEATHAREARATIO_OFFSET UNITYSDK_OFFSET(0xBA91A20)
#define NAFGDKPCCOA_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xBA53C90)
#define NAFGDKPCCOA_GET_INITANGLE_OFFSET UNITYSDK_OFFSET(0xBA91940)
#define NAFGDKPCCOA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xBA91920)
#define NAFGDKPCCOA_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xBA919E0)
#define NAFGDKPCCOA_GET_SOFTDEATHAREARATIO_OFFSET UNITYSDK_OFFSET(0xBA91A00)
#define NAFGDKPCCOA_GET_TARGETPOSTYPE_OFFSET UNITYSDK_OFFSET(0xBA91A40)
#define NAFGDKPCCOA_HMOJPBBEMMD_OFFSET UNITYSDK_OFFSET(0xBA91A60)
#define NAFGDKPCCOA_HNPDGCJCBFO_OFFSET UNITYSDK_OFFSET(0xBA91960)
#define NAFGDKPCCOA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBA53BB0)
#define NAFGDKPCCOA_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xBA91A70)
#define NAFGDKPCCOA_LGCBDNDLFCO_OFFSET UNITYSDK_OFFSET(0xBA53A40)
#define NAFGDKPCCOA_PLANOOIMMJD_OFFSET UNITYSDK_OFFSET(0xBA91AF0)
#define NAFGDKPCCOA_SET_HARDDEATHAREARATIO_OFFSET UNITYSDK_OFFSET(0xBA91A30)
#define NAFGDKPCCOA_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xBA91910)
#define NAFGDKPCCOA_SET_INITANGLE_OFFSET UNITYSDK_OFFSET(0xBA91950)
#define NAFGDKPCCOA_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xBA91930)
#define NAFGDKPCCOA_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xBA919F0)
#define NAFGDKPCCOA_SET_SOFTDEATHAREARATIO_OFFSET UNITYSDK_OFFSET(0xBA91A10)
#define NAFGDKPCCOA_SET_TARGETPOSTYPE_OFFSET UNITYSDK_OFFSET(0xBA91A50)

inline static constexpr unsigned int NAFGDKPCCOA_TypeDefinitionIndex = 57645;

	class NAFGDKPCCOA : public ::System::Object
	{
	public:
		::CruiseOrbitBGCurvePlugin* CLGHHEFMONA; // 0x10
		::IHKLFDPCFDB* BBNMHJBAFDD; // 0x18
		::UnityEngine::Vector3 AMPJHFODIFL; // 0x20
		::System::Single _Height_k__BackingField; // 0x2C
		::RPG::GameCore::OrbitTargetPosType _TargetPosType_k__BackingField; // 0x30
		::System::Single _Radius_k__BackingField; // 0x34
		::System::Single _SoftDeathAreaRatio_k__BackingField; // 0x38
		::System::Single _InitAngle_k__BackingField; // 0x3C
		::System::Single _Scale_k__BackingField; // 0x40
		::UnityEngine::Vector3 BIFIAIHOFGJ; // 0x44
		::System::Single _HardDeathAreaRatio_k__BackingField; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BHELCIBGKGA* a2, ::UnityEngine::Transform* a3, ::CruiseOrbitBGCurvePlugin* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BHELCIBGKGA*, ::UnityEngine::Transform*, ::CruiseOrbitBGCurvePlugin*))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LGCBDNDLFCO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::TaskContext* a3, ::OEPOKOJHKEL* a4, ::RPG::GameCore::GameEntity* a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::TaskContext*, ::OEPOKOJHKEL*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_LGCBDNDLFCO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Single get_InitAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_GET_INITANGLE_OFFSET))(this);
		}

		::System::Void set_InitAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_SET_INITANGLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HNPDGCJCBFO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_HNPDGCJCBFO_OFFSET))(this);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_SET_SCALE_OFFSET))(this, a1);
		}

		::System::Single get_SoftDeathAreaRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_GET_SOFTDEATHAREARATIO_OFFSET))(this);
		}

		::System::Void set_SoftDeathAreaRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_SET_SOFTDEATHAREARATIO_OFFSET))(this, a1);
		}

		::System::Single get_HardDeathAreaRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_GET_HARDDEATHAREARATIO_OFFSET))(this);
		}

		::System::Void set_HardDeathAreaRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_SET_HARDDEATHAREARATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::OrbitTargetPosType get_TargetPosType()
		{
			return ((::RPG::GameCore::OrbitTargetPosType(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_GET_TARGETPOSTYPE_OFFSET))(this);
		}

		::System::Void set_TargetPosType(::RPG::GameCore::OrbitTargetPosType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OrbitTargetPosType))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_SET_TARGETPOSTYPE_OFFSET))(this, a1);
		}

		::CruiseOrbitBGCurvePlugin* HMOJPBBEMMD()
		{
			return ((::CruiseOrbitBGCurvePlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_HMOJPBBEMMD_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_LDKMIKEMHFO_OFFSET))(this);
		}

		::UnityEngine::Vector3 PLANOOIMMJD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFGDKPCCOA_PLANOOIMMJD_OFFSET))(this);
		}

	};
