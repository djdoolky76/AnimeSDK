#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBPMLFEJPHP_DNGMPDBFHMD.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace UnityEngine::AI { class NavMeshObstacle; }

#define EBPMLFEJPHP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15466FE0)
#define EBPMLFEJPHP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x154670C0)
#define EBPMLFEJPHP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15467140)
#define EBPMLFEJPHP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15466F90)
#define EBPMLFEJPHP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15467030)
#define EBPMLFEJPHP__CTOR_OFFSET UNITYSDK_OFFSET(0x154670B0)

inline static constexpr unsigned int EBPMLFEJPHP_TypeDefinitionIndex = 65724;

class EBPMLFEJPHP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x26; // 0x0
	::UnityEngine::AI::NavMeshObstacle* FEHFMMGMPGN; // 0x48
	::EBPMLFEJPHP_DNGMPDBFHMD OPCKOJPBBHP; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPMLFEJPHP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMLFEJPHP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMLFEJPHP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMLFEJPHP_GETCLASSID_OFFSET))(this);
	}

	static ::EBPMLFEJPHP* JFDOOELFAOA()
	{
		return ((::EBPMLFEJPHP*(*)())((::PBYTE)hIl2Cpp + EBPMLFEJPHP_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMLFEJPHP_MEFBHFEOKGH_OFFSET))(this);
	}
};
