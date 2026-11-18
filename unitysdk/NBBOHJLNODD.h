#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace UnityEngine { class GameObject; }

#define NBBOHJLNODD_GDHCPAHDEGL_OFFSET UNITYSDK_OFFSET(0x128859E0)
#define NBBOHJLNODD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12885880)
#define NBBOHJLNODD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12885960)
#define NBBOHJLNODD_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12885A00)
#define NBBOHJLNODD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12885830)
#define NBBOHJLNODD_PMINFMIHOOB_OFFSET UNITYSDK_OFFSET(0x128859F0)
#define NBBOHJLNODD__CCTOR_OFFSET UNITYSDK_OFFSET(0x128858D0)
#define NBBOHJLNODD__CTOR_OFFSET UNITYSDK_OFFSET(0x12885950)

inline static constexpr unsigned int NBBOHJLNODD_TypeDefinitionIndex = 60772;

class NBBOHJLNODD : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x56; // 0x0
	::UnityEngine::GameObject* MCMGNHAPPBH; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBBOHJLNODD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBOHJLNODD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBOHJLNODD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBOHJLNODD_GETCLASSID_OFFSET))(this);
	}

	static ::NBBOHJLNODD* JFDOOELFAOA()
	{
		return ((::NBBOHJLNODD*(*)())((::PBYTE)hIl2Cpp + NBBOHJLNODD_JFDOOELFAOA_OFFSET))();
	}

	::UnityEngine::GameObject* GDHCPAHDEGL()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBOHJLNODD_GDHCPAHDEGL_OFFSET))(this);
	}

	::System::Void PMINFMIHOOB(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NBBOHJLNODD_PMINFMIHOOB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBOHJLNODD_MEFBHFEOKGH_OFFSET))(this);
	}
};
