#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define LPJDPEBKHOF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17CF83D0)
#define LPJDPEBKHOF__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF82F0)

inline static constexpr unsigned int LPJDPEBKHOF_TypeDefinitionIndex = 49655;

class LPJDPEBKHOF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* ACEIHEDBCJH; // 0x10
	::MoleMole::Battle::Entity* DJHFOGHIFEJ; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BHIOMBDAGOD; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* LAABADFAAFJ; // 0x28
	::UnityEngine::Vector3 AHCJGKIPAAB; // 0x30
	::UnityEngine::Vector3 GLPBNHEECLO; // 0x3C
	::System::Single ACHLKALBJLM; // 0x48
	::UnityEngine::Vector3 FOLHIAMAPAC; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDPEBKHOF__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDPEBKHOF_PHOADBJGFBE_OFFSET))(this);
	}
};
