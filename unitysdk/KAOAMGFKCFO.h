#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace UnityEngine { class Transform; }

#define KAOAMGFKCFO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x17B637A0)
#define KAOAMGFKCFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17B636E0)

inline static constexpr unsigned int KAOAMGFKCFO_TypeDefinitionIndex = 55695;

class KAOAMGFKCFO : public ::System::Object
{
public:
	::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* IBCPOEAELBO; // 0x10
	::UnityEngine::Transform* GOOPHBNDGEC; // 0x18
	::UnityEngine::Vector3 LAELNOAEOOB; // 0x20
	::System::UInt32 LKIDJLBABAM; // 0x2C

	::System::Void _ctor(::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* POJEDACFDOF, ::System::UInt32 FBBLGDICHOE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*, ::System::UInt32))((::PBYTE)hIl2Cpp + KAOAMGFKCFO__CTOR_OFFSET))(this, POJEDACFDOF, FBBLGDICHOE);
	}

	::System::Boolean OKJCHFGIKBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOAMGFKCFO_OKJCHFGIKBH_OFFSET))(this);
	}
};
