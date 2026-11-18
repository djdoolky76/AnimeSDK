#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICreateRoleNameDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HMENNFHKEOE_KOONENKMDMD_AOHLCGHMGIJ_OFFSET UNITYSDK_OFFSET(0x16F4F100)
#define HMENNFHKEOE_KOONENKMDMD_FKHGJEPABAE_OFFSET UNITYSDK_OFFSET(0x16F4ED70)
#define HMENNFHKEOE_KOONENKMDMD_GANPOBIHNEE_OFFSET UNITYSDK_OFFSET(0x16F4EEE0)
#define HMENNFHKEOE_KOONENKMDMD_MJPMNENNABG_OFFSET UNITYSDK_OFFSET(0x16F4EFF0)
#define HMENNFHKEOE_KOONENKMDMD_PFCBFNAEIGI_OFFSET UNITYSDK_OFFSET(0x16F4F2D0)
#define HMENNFHKEOE_KOONENKMDMD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4ED60)

inline static constexpr unsigned int HMENNFHKEOE_KOONENKMDMD_TypeDefinitionIndex = 53311;

class HMENNFHKEOE_KOONENKMDMD : public ::System::Object
{
public:
	::System::Action* MNMDKBDFAFE; // 0x10
	::System::Action_1<::System::Boolean>* OLDCEOGKOAE; // 0x18
	::MoleMole::UICreateRoleNameDialogPopWindowController* CAGFEMEINKF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_KOONENKMDMD__CTOR_OFFSET))(this);
	}

	::System::Void FKHGJEPABAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_KOONENKMDMD_FKHGJEPABAE_OFFSET))(this);
	}

	::System::Void GANPOBIHNEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_KOONENKMDMD_GANPOBIHNEE_OFFSET))(this);
	}

	::System::Void MJPMNENNABG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_KOONENKMDMD_MJPMNENNABG_OFFSET))(this);
	}

	::System::Void AOHLCGHMGIJ(::System::Boolean CDNMJGCLGCI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMENNFHKEOE_KOONENKMDMD_AOHLCGHMGIJ_OFFSET))(this, CDNMJGCLGCI);
	}

	::System::Void PFCBFNAEIGI(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HMENNFHKEOE_KOONENKMDMD_PFCBFNAEIGI_OFFSET))(this, HIAIKHDFCLN);
	}
};
