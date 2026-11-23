#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class KnotLinkGroup;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPLINELINKSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x3DCCA00)

inline static constexpr unsigned int SplineLinksManager_TypeDefinitionIndex = 21609;

class SplineLinksManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::KnotLinkGroup*>* LinkGroups; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPLINELINKSMANAGER__CTOR_OFFSET))(this);
	}
};
