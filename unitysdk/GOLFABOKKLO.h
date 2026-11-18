#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOLBPOIAAHP.h"
#include "unitysdk/GOLFABOKKLO_GIAMBAFNKAO.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define GOLFABOKKLO_DLABNAMLENL_OFFSET UNITYSDK_OFFSET(0x18164900)
#define GOLFABOKKLO_KBDDIGBLHCI_OFFSET UNITYSDK_OFFSET(0x18165050)
#define GOLFABOKKLO_OPFJMGIPDDH_OFFSET UNITYSDK_OFFSET(0x18164DF0)
#define GOLFABOKKLO__CTOR_OFFSET UNITYSDK_OFFSET(0x181648B0)

inline static constexpr unsigned int GOLFABOKKLO_TypeDefinitionIndex = 85109;

class GOLFABOKKLO : public ::KOLBPOIAAHP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLFABOKKLO__CTOR_OFFSET))(this);
	}

	::System::Boolean DLABNAMLENL(::UnityEngine::Vector3 LPPDJGEPCCJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI, ::Il2CppArray<::UnityEngine::Vector3>* GHKFFCOHHKE, ::System::Boolean DIPPDAOMOHA, ::System::Single CPGCGMPMLMA, ::UnityEngine::AI::NavMeshAgent* MJCEPLMFBBN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean, ::System::Single, ::UnityEngine::AI::NavMeshAgent*))((::PBYTE)hIl2Cpp + GOLFABOKKLO_DLABNAMLENL_OFFSET))(this, LPPDJGEPCCJ, OIKMICDBAPP, CJBJONJDOLI, GHKFFCOHHKE, DIPPDAOMOHA, CPGCGMPMLMA, MJCEPLMFBBN);
	}

	::System::Boolean OPFJMGIPDDH(::GOLFABOKKLO_GIAMBAFNKAO& param_0)
	{
		return ((::System::Boolean(*)(::PVOID, ::GOLFABOKKLO_GIAMBAFNKAO&))((::PBYTE)hIl2Cpp + GOLFABOKKLO_OPFJMGIPDDH_OFFSET))(this, param_0);
	}

	::System::Void KBDDIGBLHCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLFABOKKLO_KBDDIGBLHCI_OFFSET))(this);
	}
};
