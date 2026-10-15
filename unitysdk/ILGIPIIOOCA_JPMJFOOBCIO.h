#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILGIPIIOOCA_NOOMLMKOKGD.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PropCurveMoveStartMode_Circle; }
namespace RPG::GameCore { class TaskContext; }

#define ILGIPIIOOCA_JPMJFOOBCIO_CTOR_OFFSET UNITYSDK_OFFSET(0x164A43E0)
#define ILGIPIIOOCA_JPMJFOOBCIO_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x164A3730)
#define ILGIPIIOOCA_JPMJFOOBCIO_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x164A3FC0)
#define ILGIPIIOOCA_JPMJFOOBCIO_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x164A3F70)
#define ILGIPIIOOCA_JPMJFOOBCIO_MKOKGDHCGBD_OFFSET UNITYSDK_OFFSET(0x164A3F20)

inline static constexpr unsigned int ILGIPIIOOCA_JPMJFOOBCIO_TypeDefinitionIndex = 58313;

	class ILGIPIIOOCA_JPMJFOOBCIO : public ::ILGIPIIOOCA_NOOMLMKOKGD
	{
	public:
		::RPG::GameCore::PropCurveMoveStartMode_Circle* IGHAHBNLIJA; // 0x68
		::System::Single DCPHLKFNJFN; // 0x70
		::System::Single NFFPOFLMIDN; // 0x74
		::System::Single KLJCDDBJHNE; // 0x78
		::System::Single HPCHCEFOKJB; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_JPMJFOOBCIO_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStartMode_Circle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStartMode_Circle*))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_JPMJFOOBCIO_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Single MKOKGDHCGBD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_JPMJFOOBCIO_MKOKGDHCGBD_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_JPMJFOOBCIO_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Boolean LJOLGCNKIEH(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_JPMJFOOBCIO_LJOLGCNKIEH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
