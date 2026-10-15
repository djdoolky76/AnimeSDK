#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class ByCompareAngleBetweenVCameraAndDir; }
namespace RPG::GameCore { class TaskContext; }

#define NLHIJNFJAIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBC68220)
#define NLHIJNFJAIF_EOPJDFBBCBB_OFFSET UNITYSDK_OFFSET(0xBC68520)
#define NLHIJNFJAIF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC68250)
#define NLHIJNFJAIF_IKJPHIEFKGO_OFFSET UNITYSDK_OFFSET(0xBC69000)
#define NLHIJNFJAIF_KOPFFNODBOF_OFFSET UNITYSDK_OFFSET(0xBC68BE0)

inline static constexpr unsigned int NLHIJNFJAIF_TypeDefinitionIndex = 54514;

	class NLHIJNFJAIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + NLHIJNFJAIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHIJNFJAIF_EVALUATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 KOPFFNODBOF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHIJNFJAIF_KOPFFNODBOF_OFFSET))(this);
		}

		::UnityEngine::Vector3 EOPJDFBBCBB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHIJNFJAIF_EOPJDFBBCBB_OFFSET))(this);
		}

		::UnityEngine::Vector3 IKJPHIEFKGO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHIJNFJAIF_IKJPHIEFKGO_OFFSET))(this);
		}

	};
