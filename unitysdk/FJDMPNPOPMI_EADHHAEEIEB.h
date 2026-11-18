#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJDMPNPOPMI;
class LHKMKCIPOLD;
namespace MoleMole { class UIReportChatPopWindowController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FJDMPNPOPMI_EADHHAEEIEB_CKPBIDJELFA_OFFSET UNITYSDK_OFFSET(0x10EBB4B0)
#define FJDMPNPOPMI_EADHHAEEIEB_EAGOPGFIAAE_OFFSET UNITYSDK_OFFSET(0x10EBB3B0)
#define FJDMPNPOPMI_EADHHAEEIEB_NOPMFJPFLLN_OFFSET UNITYSDK_OFFSET(0x10EBB2B0)
#define FJDMPNPOPMI_EADHHAEEIEB__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBB2A0)

inline static constexpr unsigned int FJDMPNPOPMI_EADHHAEEIEB_TypeDefinitionIndex = 51274;

class FJDMPNPOPMI_EADHHAEEIEB : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* FFMGICPLKFB; // 0x10
	::FJDMPNPOPMI* KLHPEBKNIFB; // 0x18
	::MoleMole::UIReportChatPopWindowController* NDKDIMAMGDE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDMPNPOPMI_EADHHAEEIEB__CTOR_OFFSET))(this);
	}

	::System::Void NOPMFJPFLLN(::System::Int32 AMBIFKIOFLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJDMPNPOPMI_EADHHAEEIEB_NOPMFJPFLLN_OFFSET))(this, AMBIFKIOFLL);
	}

	::System::Void EAGOPGFIAAE(::System::Int32 AMBIFKIOFLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJDMPNPOPMI_EADHHAEEIEB_EAGOPGFIAAE_OFFSET))(this, AMBIFKIOFLL);
	}

	::System::Void CKPBIDJELFA(::System::Collections::Generic::IReadOnlyList_1<::LHKMKCIPOLD*>* EOEJGFDHHDA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::LHKMKCIPOLD*>*))((::PBYTE)hIl2Cpp + FJDMPNPOPMI_EADHHAEEIEB_CKPBIDJELFA_OFFSET))(this, EOEJGFDHHDA);
	}
};
