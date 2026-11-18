#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class MonoTweenAnimation; }
namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define KLDMNFJNOEO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xD400A90)
#define KLDMNFJNOEO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xD400770)
#define KLDMNFJNOEO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xD400970)
#define KLDMNFJNOEO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xD4008E0)
#define KLDMNFJNOEO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xD400670)
#define KLDMNFJNOEO__CCTOR_OFFSET UNITYSDK_OFFSET(0xD4007C0)
#define KLDMNFJNOEO__CTOR_OFFSET UNITYSDK_OFFSET(0xD400840)

inline static constexpr unsigned int KLDMNFJNOEO_TypeDefinitionIndex = 86077;

class KLDMNFJNOEO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xBA; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Component*, ::MoleMole::SceneMark::StageTweenAnimData*>* GBBAOPAOJGG; // 0x48
	::MoleMole::MonoTweenAnimation* HHFMPNEGIHG; // 0x50
	::System::String* EIHMELMJCME; // 0x58
	::System::Single JOMKKJNGMIH; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLDMNFJNOEO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMNFJNOEO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMNFJNOEO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMNFJNOEO_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMNFJNOEO_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::KLDMNFJNOEO* JFDOOELFAOA()
	{
		return ((::KLDMNFJNOEO*(*)())((::PBYTE)hIl2Cpp + KLDMNFJNOEO_JFDOOELFAOA_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::MoleMole::MonoTweenAnimation* HHFMPNEGIHG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTweenAnimation*))((::PBYTE)hIl2Cpp + KLDMNFJNOEO_BBOMJDBNHIC_OFFSET))(this, HHFMPNEGIHG);
	}
};
