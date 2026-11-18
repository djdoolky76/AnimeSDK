#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define PCMENEMPLGF_LEMMFMICDFD_MJCKAKLDJMP_OFFSET UNITYSDK_OFFSET(0x178B4FC0)
#define PCMENEMPLGF_LEMMFMICDFD__CTOR_OFFSET UNITYSDK_OFFSET(0x178B4FB0)

inline static constexpr unsigned int PCMENEMPLGF_LEMMFMICDFD_TypeDefinitionIndex = 62855;

class PCMENEMPLGF_LEMMFMICDFD : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction_1<::System::Int32>* AMHGBGMOMLL; // 0x10
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x18
	::System::Int32 PLAELLPAJCJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_LEMMFMICDFD__CTOR_OFFSET))(this);
	}

	::System::Void MJCKAKLDJMP(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCMENEMPLGF_LEMMFMICDFD_MJCKAKLDJMP_OFFSET))(this, PIIPCLCCOIG);
	}
};
