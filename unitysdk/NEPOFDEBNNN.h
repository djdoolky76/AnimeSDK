#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class JIBBBLMGIGD;
namespace UnityEngine { class Animation; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define NEPOFDEBNNN_APKCGBDMKHB_OFFSET UNITYSDK_OFFSET(0x18FB48A0)
#define NEPOFDEBNNN_HHENCAADLOK_OFFSET UNITYSDK_OFFSET(0x18FB4140)
#define NEPOFDEBNNN_LIDBEOCMEKL_OFFSET UNITYSDK_OFFSET(0x18FB46E0)
#define NEPOFDEBNNN_NAKANOLOBEC_OFFSET UNITYSDK_OFFSET(0x18FB3810)
#define NEPOFDEBNNN__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB3800)

inline static constexpr unsigned int NEPOFDEBNNN_TypeDefinitionIndex = 79752;

class NEPOFDEBNNN : public ::System::Object
{
public:
	::JIBBBLMGIGD* EKNLMANHGMJ; // 0x10

	::System::Void _ctor(::JIBBBLMGIGD* IBBNCBLMBNN)
	{
		return ((::System::Void(*)(::PVOID, ::JIBBBLMGIGD*))((::PBYTE)hIl2Cpp + NEPOFDEBNNN__CTOR_OFFSET))(this, IBBNCBLMBNN);
	}

	::System::Void NAKANOLOBEC(::MoleMole::EntityHandle HPADNAEINPK, ::UnityEngine::Animation*& AOKJEGNBALI, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*& GAEIPOICOLD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Animation*&, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*&))((::PBYTE)hIl2Cpp + NEPOFDEBNNN_NAKANOLOBEC_OFFSET))(this, HPADNAEINPK, AOKJEGNBALI, GAEIPOICOLD);
	}

	::System::Void HHENCAADLOK(::MoleMole::UI::FlowerShop::EFinishJudge NIDDHBMNNCJ, ::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::EFinishJudge, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + NEPOFDEBNNN_HHENCAADLOK_OFFSET))(this, NIDDHBMNNCJ, HPADNAEINPK);
	}

	::System::Void LIDBEOCMEKL(::MoleMole::EntityHandle HPADNAEINPK, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NEPOFDEBNNN_LIDBEOCMEKL_OFFSET))(this, HPADNAEINPK, FBILHHBPEHD);
	}

	::System::Void APKCGBDMKHB(::MoleMole::UI::FlowerShop::ESlotType ABOCGLAOJGC, ::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + NEPOFDEBNNN_APKCGBDMKHB_OFFSET))(this, ABOCGLAOJGC, HPADNAEINPK);
	}
};
