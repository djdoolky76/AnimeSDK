#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x142ED8D0)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_FLLIHNCMAFH_OFFSET UNITYSDK_OFFSET(0x142EE430)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_ILEFFMHKNAA_OFFSET UNITYSDK_OFFSET(0x142EDC80)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x142F03B0)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x142ED880)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x142ED780)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x142EDC20)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x142F0340)

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesRibbonGenerator_TypeDefinitionIndex = 63782;

	class EtherEyesRibbonGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* startPoint; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* endPoints; // 0x20
		::System::Single stripWidth; // 0x28
		::System::Single tilePerUnit; // 0x2C
		::System::Single uvOffset; // 0x30
		::System::Single desiredSegmentLength; // 0x34
		::System::Single midAlphaBand; // 0x38
		::System::Single midAlpha; // 0x3C
		::UnityEngine::MeshFilter* AMNGEBLNNCE; // 0x40
		::UnityEngine::Mesh* BEEGIMMGFPF; // 0x48
		::UnityEngine::Vector3 LPMHCCJLHBK; // 0x50
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* JHGGBAHLIFA; // 0x60
		::Il2CppArray<::System::Int32>* EDHOMAEMICB; // 0x68
		::System::Single IDKKBPGBPLN; // 0x70
		::System::Single KLMOBMIEMJB; // 0x74
		::System::Boolean MOJIGDCILEK; // 0x78
		::System::Byte _padding1[0x3];
		::System::Single IHDIFINLOHC; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_UPDATE_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_LOFMNKAMILC_OFFSET))(this);
		}

		::System::Boolean ILEFFMHKNAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_ILEFFMHKNAA_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void FLLIHNCMAFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_FLLIHNCMAFH_OFFSET))(this);
		}
	};
}
