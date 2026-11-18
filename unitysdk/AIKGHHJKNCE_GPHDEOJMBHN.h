#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;
class MPKBDIJDMAP;
namespace UnityEngine::Events { class UnityAction; }

#define AIKGHHJKNCE_GPHDEOJMBHN_LPFABCAAHOF_OFFSET UNITYSDK_OFFSET(0x17CD3690)
#define AIKGHHJKNCE_GPHDEOJMBHN__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD3680)

inline static constexpr unsigned int AIKGHHJKNCE_GPHDEOJMBHN_TypeDefinitionIndex = 58237;

class AIKGHHJKNCE_GPHDEOJMBHN : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* CLBAEECMNJL; // 0x10
	::AIKGHHJKNCE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_GPHDEOJMBHN__CTOR_OFFSET))(this);
	}

	::System::Void LPFABCAAHOF(::MPKBDIJDMAP* JNDDJMAHNAI, ::MoleMole::HollowPieceBlendMode MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_GPHDEOJMBHN_LPFABCAAHOF_OFFSET))(this, JNDDJMAHNAI, MDLNMDJMMJP);
	}
};
