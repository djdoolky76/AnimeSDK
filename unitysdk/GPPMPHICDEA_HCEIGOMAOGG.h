#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMGJHJOEFM.h"
#include "unitysdk/System/Object.h"

class CIAPNCCFHAK;
class KLIOLPDEKLK;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GPPMPHICDEA_HCEIGOMAOGG_BCCOGDDFAMP_OFFSET UNITYSDK_OFFSET(0x15F433B0)
#define GPPMPHICDEA_HCEIGOMAOGG_GCBGHOLJBOL_OFFSET UNITYSDK_OFFSET(0x15F43210)
#define GPPMPHICDEA_HCEIGOMAOGG_MGADNNHPBGJ_OFFSET UNITYSDK_OFFSET(0x15F43060)
#define GPPMPHICDEA_HCEIGOMAOGG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F43050)

inline static constexpr unsigned int GPPMPHICDEA_HCEIGOMAOGG_TypeDefinitionIndex = 42651;

class GPPMPHICDEA_HCEIGOMAOGG : public ::System::Object
{
public:
	::System::Action_1<::KLIOLPDEKLK*>* DFJOBOCFJFA; // 0x10
	::System::Action* CGPHNPBAOFK; // 0x18
	::System::Action* GODDDLDNLMN; // 0x20
	::CIAPNCCFHAK* NPIJKDAPMGM; // 0x28
	::System::Action* JFAFHDDJKOD; // 0x30
	::BAMGJHJOEFM AAOCANGHBDG; // 0x38
	::System::Int32 FEFILJDDDBI; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HCEIGOMAOGG__CTOR_OFFSET))(this);
	}

	::System::Void MGADNNHPBGJ(::BAMGJHJOEFM HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::BAMGJHJOEFM))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HCEIGOMAOGG_MGADNNHPBGJ_OFFSET))(this, HBMGHPEPBNC);
	}

	::System::Void GCBGHOLJBOL(::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF, ::System::Action* MHGPLJJHILJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*, ::System::Action*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HCEIGOMAOGG_GCBGHOLJBOL_OFFSET))(this, JOLDOMEIKEF, MHGPLJJHILJ);
	}

	::System::Void BCCOGDDFAMP(::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HCEIGOMAOGG_BCCOGDDFAMP_OFFSET))(this, JOLDOMEIKEF);
	}
};
