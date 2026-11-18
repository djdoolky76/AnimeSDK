#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIAdapt; }
namespace System { class Action; }

#define OEHJJEDJGPB_MHMIHCCHJNE_ELEEDAAFBGC_OFFSET UNITYSDK_OFFSET(0x15FD7930)
#define OEHJJEDJGPB_MHMIHCCHJNE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD7920)

inline static constexpr unsigned int OEHJJEDJGPB_MHMIHCCHJNE_TypeDefinitionIndex = 65989;

class OEHJJEDJGPB_MHMIHCCHJNE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_MHMIHCCHJNE__CTOR_OFFSET))(this);
	}

	::System::Void ELEEDAAFBGC(::MoleMole::ConfigUIAdapt* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAdapt*))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_MHMIHCCHJNE_ELEEDAAFBGC_OFFSET))(this, DFMKILICPFB);
	}
};
