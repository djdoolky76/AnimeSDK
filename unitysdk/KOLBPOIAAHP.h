#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoStageEnv; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define KOLBPOIAAHP_DLABNAMLENL_OFFSET UNITYSDK_OFFSET(0x151729E0)
#define KOLBPOIAAHP_GJMEHLDNKLO_OFFSET UNITYSDK_OFFSET(0x151735B0)
#define KOLBPOIAAHP_LFNHDOEDKGC_OFFSET UNITYSDK_OFFSET(0x15173080)
#define KOLBPOIAAHP_NPHAICBEAFN_OFFSET UNITYSDK_OFFSET(0x15172E40)
#define KOLBPOIAAHP_PGJFMEOJGPD_OFFSET UNITYSDK_OFFSET(0x151733C0)
#define KOLBPOIAAHP__CTOR_OFFSET UNITYSDK_OFFSET(0x15172990)

inline static constexpr unsigned int KOLBPOIAAHP_TypeDefinitionIndex = 87949;

class KOLBPOIAAHP : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshData* NPLGBEEPGAD; // 0x10
	::UnityEngine::AI::NavMeshSurface* LMPGCNOOEOO; // 0x18
	::UnityEngine::AI::NavMeshPath* KCKFIPCMIMI; // 0x20
	::UnityEngine::AI::NavMeshDataInstance JOPLFNEJPHL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLBPOIAAHP__CTOR_OFFSET))(this);
	}

	::System::Boolean DLABNAMLENL(::UnityEngine::Vector3 LPPDJGEPCCJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& CJBJONJDOLI, ::Il2CppArray<::UnityEngine::Vector3>*& GHKFFCOHHKE)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + KOLBPOIAAHP_DLABNAMLENL_OFFSET))(this, LPPDJGEPCCJ, OIKMICDBAPP, CJBJONJDOLI, GHKFFCOHHKE);
	}

	::System::Boolean NPHAICBEAFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLBPOIAAHP_NPHAICBEAFN_OFFSET))(this);
	}

	::System::Void LFNHDOEDKGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLBPOIAAHP_LFNHDOEDKGC_OFFSET))(this);
	}

	::System::Void PGJFMEOJGPD(::UnityEngine::AI::NavMeshSurface* FDCGJNLIJMH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshSurface*))((::PBYTE)hIl2Cpp + KOLBPOIAAHP_PGJFMEOJGPD_OFFSET))(this, FDCGJNLIJMH);
	}

	::System::Void GJMEHLDNKLO(::MoleMole::MonoStageEnv* JALEGMIJCCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoStageEnv*))((::PBYTE)hIl2Cpp + KOLBPOIAAHP_GJMEHLDNKLO_OFFSET))(this, JALEGMIJCCP);
	}
};
