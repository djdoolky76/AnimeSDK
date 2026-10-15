#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILGIPIIOOCA_NOOMLMKOKGD.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PropCurveMoveStartMode_TargetPoint; }
namespace RPG::GameCore { class TaskContext; }

#define ILGIPIIOOCA_MDFDDAOPCAH_CTOR_OFFSET UNITYSDK_OFFSET(0x164A4720)
#define ILGIPIIOOCA_MDFDDAOPCAH_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x164A3520)
#define ILGIPIIOOCA_MDFDDAOPCAH_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x164A44E0)
#define ILGIPIIOOCA_MDFDDAOPCAH_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x164A4490)
#define ILGIPIIOOCA_MDFDDAOPCAH_MKOKGDHCGBD_OFFSET UNITYSDK_OFFSET(0x164A4440)

inline static constexpr unsigned int ILGIPIIOOCA_MDFDDAOPCAH_TypeDefinitionIndex = 58312;

	class ILGIPIIOOCA_MDFDDAOPCAH : public ::ILGIPIIOOCA_NOOMLMKOKGD
	{
	public:
		::RPG::GameCore::PropCurveMoveStartMode_TargetPoint* IGHAHBNLIJA; // 0x68
		::System::Single HPCHCEFOKJB; // 0x70
		::System::Single DCPHLKFNJFN; // 0x74
		::System::Single IEHDPCLAJPD; // 0x78
		::System::Boolean BIOKIICEFDC; // 0x7C
		::System::Byte _padding0[0x3];
		::System::Single KLJCDDBJHNE; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_MDFDDAOPCAH_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint*))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_MDFDDAOPCAH_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Single MKOKGDHCGBD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_MDFDDAOPCAH_MKOKGDHCGBD_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_MDFDDAOPCAH_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Boolean LJOLGCNKIEH(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_MDFDDAOPCAH_LJOLGCNKIEH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
