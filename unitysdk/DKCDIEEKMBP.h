#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveDestType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define DKCDIEEKMBP_ACMMPLEMBMI_OFFSET UNITYSDK_OFFSET(0xF250E00)
#define DKCDIEEKMBP_CNCEDLPFCCL_OFFSET UNITYSDK_OFFSET(0xF250080)
#define DKCDIEEKMBP_CTOR_OFFSET UNITYSDK_OFFSET(0xF250F20)
#define DKCDIEEKMBP_EGAHFHIONHB_OFFSET UNITYSDK_OFFSET(0xF250EF0)
#define DKCDIEEKMBP_FPKKODCPGOP_OFFSET UNITYSDK_OFFSET(0xF250A30)
#define DKCDIEEKMBP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xF250F00)
#define DKCDIEEKMBP_HBCEGPMECGG_OFFSET UNITYSDK_OFFSET(0xF250860)
#define DKCDIEEKMBP_JKJIOLGDHJP_OFFSET UNITYSDK_OFFSET(0xF250BE0)
#define DKCDIEEKMBP_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xF24FFE0)
#define DKCDIEEKMBP_NJMIKCHOLKE_OFFSET UNITYSDK_OFFSET(0xF250670)
#define DKCDIEEKMBP_NLABHHJHPNL_OFFSET UNITYSDK_OFFSET(0xF250B10)
#define DKCDIEEKMBP_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xF250B70)
#define DKCDIEEKMBP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xF250DB0)
#define DKCDIEEKMBP_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xF250F10)

inline static constexpr unsigned int DKCDIEEKMBP_TypeDefinitionIndex = 57054;

	class DKCDIEEKMBP : public ::System::Object
	{
	public:
		::UnityEngine::Transform* CDHNMGNPODA; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::System::Single JFAGECNFHJL; // 0x20
		::UnityEngine::Vector3 IHPLKKJLPBJ; // 0x24
		::UnityEngine::Vector3 HOFJHLNNGNM; // 0x30
		::RPG::GameCore::AdventureMoveDestType _Type_k__BackingField; // 0x3C
		::System::Single HJLOCBLHNLD; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 KHJNHDOJDDP(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_KHJNHDOJDDP_OFFSET))(this, a1);
		}

		::System::Void HBCEGPMECGG(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_HBCEGPMECGG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FPKKODCPGOP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_FPKKODCPGOP_OFFSET))(this, a1, a2);
		}

		::System::Void NLABHHJHPNL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_NLABHHJHPNL_OFFSET))(this, a1);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CNCEDLPFCCL(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_CNCEDLPFCCL_OFFSET))(this, a1, a2);
		}

		::System::Boolean JKJIOLGDHJP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_JKJIOLGDHJP_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void ACMMPLEMBMI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_ACMMPLEMBMI_OFFSET))(this, a1);
		}

		::System::Void NJMIKCHOLKE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_NJMIKCHOLKE_OFFSET))(this, a1);
		}

		::System::Boolean EGAHFHIONHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_EGAHFHIONHB_OFFSET))(this);
		}

		::RPG::GameCore::AdventureMoveDestType get_Type()
		{
			return ((::RPG::GameCore::AdventureMoveDestType(*)(::PVOID))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::AdventureMoveDestType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureMoveDestType))((::PBYTE)hIl2Cpp + DKCDIEEKMBP_SET_TYPE_OFFSET))(this, a1);
		}

	};
