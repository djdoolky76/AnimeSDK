#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class GEIHCPAOKKK;
namespace MoleMole { class FeaturePoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOFEATUREPOINT_GETFEATUREPOINTANGLE_OFFSET UNITYSDK_OFFSET(0x1193AB50)
#define MOLEMOLE_MONOFEATUREPOINT_GETNEARESTFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0x1193A590)
#define MOLEMOLE_MONOFEATUREPOINT_PCBLHEMKGPF_OFFSET UNITYSDK_OFFSET(0x1193A8F0)
#define MOLEMOLE_MONOFEATUREPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1193ADF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFeaturePoint_TypeDefinitionIndex = 85332;

	class MonoFeaturePoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FeaturePoint*>* featurePointList; // 0x18
		::GEIHCPAOKKK* MFGLEADNKPI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT__CTOR_OFFSET))(this);
		}

		::MoleMole::FeaturePoint* GetNearestFeaturePoint()
		{
			return ((::MoleMole::FeaturePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT_GETNEARESTFEATUREPOINT_OFFSET))(this);
		}

		::System::Single GetFeaturePointAngle(::MoleMole::FeaturePoint* OPMPKFEHOBM)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::FeaturePoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT_GETFEATUREPOINTANGLE_OFFSET))(this, OPMPKFEHOBM);
		}

		::System::Void PCBLHEMKGPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT_PCBLHEMKGPF_OFFSET))(this);
		}
	};
}
