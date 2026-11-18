#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPFDIBAFAFI;
namespace MoleMole { class UIHardCoreBossBattleDetailPageController_Context; }

#define MBMEGMNFOJM_GJKDPMNMIMA_ILAKLFOICAE_OFFSET UNITYSDK_OFFSET(0x12D4E5D0)
#define MBMEGMNFOJM_GJKDPMNMIMA__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4E5C0)

inline static constexpr unsigned int MBMEGMNFOJM_GJKDPMNMIMA_TypeDefinitionIndex = 54777;

class MBMEGMNFOJM_GJKDPMNMIMA : public ::System::Object
{
public:
	::MoleMole::UIHardCoreBossBattleDetailPageController_Context* NIDHJHPECHN; // 0x10
	::System::Int32 DAOGCKMMPIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMEGMNFOJM_GJKDPMNMIMA__CTOR_OFFSET))(this);
	}

	::System::Void ILAKLFOICAE(::BPFDIBAFAFI* DLCBFFILCCD)
	{
		return ((::System::Void(*)(::PVOID, ::BPFDIBAFAFI*))((::PBYTE)hIl2Cpp + MBMEGMNFOJM_GJKDPMNMIMA_ILAKLFOICAE_OFFSET))(this, DLCBFFILCCD);
	}
};
