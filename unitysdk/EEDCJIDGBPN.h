#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFDBBCACPOD.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CJAKJJOBKDO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define EEDCJIDGBPN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15898840)
#define EEDCJIDGBPN__CTOR_OFFSET UNITYSDK_OFFSET(0x158987E0)

inline static constexpr unsigned int EEDCJIDGBPN_TypeDefinitionIndex = 79289;

class EEDCJIDGBPN : public ::System::Object
{
public:
	::UnityEngine::Collider* MDGNJHJBDCG; // 0x10
	::MoleMole::EntityHandle FGLLACJKNNP; // 0x18
	::CJAKJJOBKDO* NNCGPAEAHBC; // 0x28
	::MoleMole::EntityHandle PECKCNNCGBI; // 0x30
	::System::Collections::Generic::List_1<::BFDBBCACPOD>* OMPPFCIKEEG; // 0x40
	::UnityEngine::Collider* DBIMFFAIAGP; // 0x48
	::UnityEngine::Vector3 BFDGJMPKGGC; // 0x50
	::System::Boolean DLMPCEEFNIK; // 0x5C
	::System::Byte _padding0[0x3];
	::System::Single JOCIDAIBNGH; // 0x60
	::UnityEngine::Vector3 PHCPPGDFNPI; // 0x64
	::UnityEngine::Vector3 KEBOMLFDOFK; // 0x70
	::UnityEngine::Vector3 NOBHJHNKJDB; // 0x7C
	::UnityEngine::Vector3 LPNIPDBLCNF; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDCJIDGBPN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDCJIDGBPN_PHOADBJGFBE_OFFSET))(this);
	}
};
