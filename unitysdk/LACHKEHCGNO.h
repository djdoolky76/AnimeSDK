#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LACHKEHCGNO_FFHKEKILALH.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/AI/ObstacleAvoidanceType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::AI { class NavMeshAgent; }
namespace UnityEngine::AI { class NavMeshPath; }

#define LACHKEHCGNO_BKIIMBODION_OFFSET UNITYSDK_OFFSET(0x15DD6B80)
#define LACHKEHCGNO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15DD6880)
#define LACHKEHCGNO_JDGBLIOODJC_OFFSET UNITYSDK_OFFSET(0x15DD6BD0)
#define LACHKEHCGNO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15DD69E0)
#define LACHKEHCGNO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15DD6AF0)
#define LACHKEHCGNO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15DD66E0)
#define LACHKEHCGNO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DD68D0)
#define LACHKEHCGNO__CTOR_OFFSET UNITYSDK_OFFSET(0x15DD6950)

inline static constexpr unsigned int LACHKEHCGNO_TypeDefinitionIndex = 75372;

class LACHKEHCGNO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x25; // 0x0
	::UnityEngine::AI::NavMeshAgent* GBMLHHANFFN; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* GHKFFCOHHKE; // 0x50
	::UnityEngine::AI::NavMeshPath* PEECGLCOPIC; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LADDOGHBJKA; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* LKILLEMPIIE; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* CLONCCEPNEA; // 0x70
	::LACHKEHCGNO_FFHKEKILALH BPOEMPBAAAI; // 0x78
	::System::Single AMDGNAMFBGF; // 0x7C
	::System::Int32 LIMNECOMDOM; // 0x80
	::UnityEngine::AI::ObstacleAvoidanceType MCLHHLLNKMJ; // 0x84
	::System::Boolean DAMCALFBHAL; // 0x88
	::System::Boolean CPFPEBIMHBG; // 0x89
	::System::Boolean IEMPEKDGDFA; // 0x8A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACHKEHCGNO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACHKEHCGNO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACHKEHCGNO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACHKEHCGNO_GETCLASSID_OFFSET))(this);
	}

	static ::LACHKEHCGNO* JFDOOELFAOA()
	{
		return ((::LACHKEHCGNO*(*)())((::PBYTE)hIl2Cpp + LACHKEHCGNO_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACHKEHCGNO_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean BKIIMBODION()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LACHKEHCGNO_BKIIMBODION_OFFSET))(this);
	}

	::System::Boolean JDGBLIOODJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LACHKEHCGNO_JDGBLIOODJC_OFFSET))(this);
	}
};
