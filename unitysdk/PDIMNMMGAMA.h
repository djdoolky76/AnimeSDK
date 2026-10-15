#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOHAPENNHF.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DIBNMFGJFEH;
class LAJCPEFEOPN;
class MHHBDDMJOII;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionMechaWarehouseInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PDIMNMMGAMA_CTOR_OFFSET UNITYSDK_OFFSET(0xC014570)
#define PDIMNMMGAMA_FCLAMHGAAAC_OFFSET UNITYSDK_OFFSET(0xC015440)
#define PDIMNMMGAMA_FCMKHIPNDPG_OFFSET UNITYSDK_OFFSET(0xC014560)
#define PDIMNMMGAMA_FDBCBEBLBPF_OFFSET UNITYSDK_OFFSET(0xC014F00)
#define PDIMNMMGAMA_FLCNIHINHCK_OFFSET UNITYSDK_OFFSET(0xC0149E0)
#define PDIMNMMGAMA_GET_INMECHAWAREHOUSEROADENTRY_OFFSET UNITYSDK_OFFSET(0xC0144E0)
#define PDIMNMMGAMA_GET_MECHAWAREHOUSECONTROLLER_OFFSET UNITYSDK_OFFSET(0xC014540)
#define PDIMNMMGAMA_GET_OTHERROADENTRY_OFFSET UNITYSDK_OFFSET(0xC014520)
#define PDIMNMMGAMA_GET_OUTMECHAWAREHOUSEROADENTRY_OFFSET UNITYSDK_OFFSET(0xC014500)
#define PDIMNMMGAMA_HFJONIGFLKL_OFFSET UNITYSDK_OFFSET(0xC0148E0)
#define PDIMNMMGAMA_HPGBGGAGCFM_OFFSET UNITYSDK_OFFSET(0xC014880)
#define PDIMNMMGAMA_IACNPENFBMJ_OFFSET UNITYSDK_OFFSET(0xC015120)
#define PDIMNMMGAMA_IHCHKLECODA_OFFSET UNITYSDK_OFFSET(0xC014E80)
#define PDIMNMMGAMA_IIBMGPMMDOC_OFFSET UNITYSDK_OFFSET(0xC014640)
#define PDIMNMMGAMA_JLEFCOKBJDO_OFFSET UNITYSDK_OFFSET(0xC015190)
#define PDIMNMMGAMA_LOLJLKPAGEN_OFFSET UNITYSDK_OFFSET(0xC014950)
#define PDIMNMMGAMA_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xC014790)
#define PDIMNMMGAMA_NKJJNFGGIIA_OFFSET UNITYSDK_OFFSET(0xC0150B0)
#define PDIMNMMGAMA_OELCGEJKKLC_OFFSET UNITYSDK_OFFSET(0xC0148D0)
#define PDIMNMMGAMA_SET_INMECHAWAREHOUSEROADENTRY_OFFSET UNITYSDK_OFFSET(0xC0144F0)
#define PDIMNMMGAMA_SET_MECHAWAREHOUSECONTROLLER_OFFSET UNITYSDK_OFFSET(0xC014550)
#define PDIMNMMGAMA_SET_OTHERROADENTRY_OFFSET UNITYSDK_OFFSET(0xC014530)
#define PDIMNMMGAMA_SET_OUTMECHAWAREHOUSEROADENTRY_OFFSET UNITYSDK_OFFSET(0xC014510)

inline static constexpr unsigned int PDIMNMMGAMA_TypeDefinitionIndex = 69188;

	class PDIMNMMGAMA : public ::ICOHAPENNHF
	{
	public:
		::DIBNMFGJFEH* _MechaWarehouseController_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::LAJCPEFEOPN*>* IEAILLFIFLF; // 0x88
		::UnityEngine::Transform* OFEPOFHLJOA; // 0x90
		::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo* BABNEBFDLBC; // 0x98
		::JOGBIBJLPJB _InMechaWarehouseRoadEntry_k__BackingField; // 0xA0
		::JOGBIBJLPJB _OutMechaWarehouseRoadEntry_k__BackingField; // 0xA8
		::JOGBIBJLPJB _OtherRoadEntry_k__BackingField; // 0xB0
		::System::Void _ctor(::MHHBDDMJOII* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MHHBDDMJOII*, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::JOGBIBJLPJB get_InMechaWarehouseRoadEntry()
		{
			return ((::JOGBIBJLPJB(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_GET_INMECHAWAREHOUSEROADENTRY_OFFSET))(this);
		}

		::System::Void set_InMechaWarehouseRoadEntry(::JOGBIBJLPJB a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_SET_INMECHAWAREHOUSEROADENTRY_OFFSET))(this, a1);
		}

		::JOGBIBJLPJB get_OutMechaWarehouseRoadEntry()
		{
			return ((::JOGBIBJLPJB(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_GET_OUTMECHAWAREHOUSEROADENTRY_OFFSET))(this);
		}

		::System::Void set_OutMechaWarehouseRoadEntry(::JOGBIBJLPJB a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_SET_OUTMECHAWAREHOUSEROADENTRY_OFFSET))(this, a1);
		}

		::JOGBIBJLPJB get_OtherRoadEntry()
		{
			return ((::JOGBIBJLPJB(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_GET_OTHERROADENTRY_OFFSET))(this);
		}

		::System::Void set_OtherRoadEntry(::JOGBIBJLPJB a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_SET_OTHERROADENTRY_OFFSET))(this, a1);
		}

		::DIBNMFGJFEH* get_MechaWarehouseController()
		{
			return ((::DIBNMFGJFEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_GET_MECHAWAREHOUSECONTROLLER_OFFSET))(this);
		}

		::System::Void set_MechaWarehouseController(::DIBNMFGJFEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNMFGJFEH*))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_SET_MECHAWAREHOUSECONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::EPedestrianV2MotionState FCMKHIPNDPG()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_FCMKHIPNDPG_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_MHFNJCLKNMG_OFFSET))(this);
		}

		::JOGBIBJLPJB HPGBGGAGCFM(::JOGBIBJLPJB a1)
		{
			return ((::JOGBIBJLPJB(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_HPGBGGAGCFM_OFFSET))(this, a1);
		}

		::System::Void IIBMGPMMDOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_IIBMGPMMDOC_OFFSET))(this);
		}

		::System::Boolean OELCGEJKKLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_OELCGEJKKLC_OFFSET))(this);
		}

		::System::Boolean HFJONIGFLKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_HFJONIGFLKL_OFFSET))(this);
		}

		::System::Boolean LOLJLKPAGEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_LOLJLKPAGEN_OFFSET))(this);
		}

		::LAJCPEFEOPN* FLCNIHINHCK(::System::Single a1)
		{
			return ((::LAJCPEFEOPN*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_FLCNIHINHCK_OFFSET))(this, a1);
		}

		::System::Single FDBCBEBLBPF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_FDBCBEBLBPF_OFFSET))(this);
		}

		::System::Single NKJJNFGGIIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_NKJJNFGGIIA_OFFSET))(this);
		}

		::System::Void IHCHKLECODA(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_IHCHKLECODA_OFFSET))(this, a1);
		}

		::System::Void IACNPENFBMJ(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_IACNPENFBMJ_OFFSET))(this, a1);
		}

		::System::Void JLEFCOKBJDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_JLEFCOKBJDO_OFFSET))(this);
		}

		::System::Boolean FCLAMHGAAAC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PDIMNMMGAMA_FCLAMHGAAAC_OFFSET))(this, a1, a2);
		}

	};
