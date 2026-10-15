#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILGIPIIOOCA_NOOMLMKOKGD.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PropCurveMoveStartMode_PinPong; }
namespace RPG::GameCore { class TaskContext; }

#define ILGIPIIOOCA_PGCEOEAIGGO_CTOR_OFFSET UNITYSDK_OFFSET(0x164A5A90)
#define ILGIPIIOOCA_PGCEOEAIGGO_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x164A3930)
#define ILGIPIIOOCA_PGCEOEAIGGO_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x164A57B0)
#define ILGIPIIOOCA_PGCEOEAIGGO_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x164A5760)
#define ILGIPIIOOCA_PGCEOEAIGGO_MKOKGDHCGBD_OFFSET UNITYSDK_OFFSET(0x164A5710)

inline static constexpr unsigned int ILGIPIIOOCA_PGCEOEAIGGO_TypeDefinitionIndex = 58314;

	class ILGIPIIOOCA_PGCEOEAIGGO : public ::ILGIPIIOOCA_NOOMLMKOKGD
	{
	public:
		::RPG::GameCore::PropCurveMoveStartMode_PinPong* IGHAHBNLIJA; // 0x68
		::System::Single MOCAKIBAGMC; // 0x70
		::System::Single KLJCDDBJHNE; // 0x74
		::System::Boolean BIOKIICEFDC; // 0x78
		::System::Byte _padding0[0x3];
		::System::Single DCPHLKFNJFN; // 0x7C
		::System::Single HPCHCEFOKJB; // 0x80
		::System::Single NFFPOFLMIDN; // 0x84
		::System::Single BGFDCDEOEDP; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_PGCEOEAIGGO_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStartMode_PinPong* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStartMode_PinPong*))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_PGCEOEAIGGO_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Single MKOKGDHCGBD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_PGCEOEAIGGO_MKOKGDHCGBD_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_PGCEOEAIGGO_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Boolean LJOLGCNKIEH(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_PGCEOEAIGGO_LJOLGCNKIEH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
