#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScePadTriggerMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BCCBCEMEMHB.h"

namespace MoleMole { class ConfigPinball; }
namespace System { class String; }

#define JPKJPBIHFGB_AACBOCJAGHG_OFFSET UNITYSDK_OFFSET(0x15B76B30)
#define JPKJPBIHFGB_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x15B76890)
#define JPKJPBIHFGB_BNDHAEICINF_OFFSET UNITYSDK_OFFSET(0x15B76C30)
#define JPKJPBIHFGB_HIHABFLDCCC_OFFSET UNITYSDK_OFFSET(0x15B771D0)
#define JPKJPBIHFGB_IGFPFEJGKHH_OFFSET UNITYSDK_OFFSET(0x15B76A60)
#define JPKJPBIHFGB_KNEKDOMFFNM_OFFSET UNITYSDK_OFFSET(0x15B76AD0)
#define JPKJPBIHFGB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B76880)

inline static constexpr unsigned int JPKJPBIHFGB_TypeDefinitionIndex = 72179;

class JPKJPBIHFGB : public ::System::Object
{
public:
	// static const ::System::String* DILLFGOKHBN; // 0x0
	// static const ::System::String* GIBEAOMILOJ; // 0x0
	// static const ::System::Single EPFMDJLNADH; // 0x0
	// static const ::System::Single FKEFBMHOLME; // 0x0
	::System::Single OCLPAMMCBGC; // 0x10
	::System::Single BDNCAMIHJBE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKJPBIHFGB__CTOR_OFFSET))(this);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKJPBIHFGB_AOPGPMDDDDI_OFFSET))(this);
	}

	::System::Void IGFPFEJGKHH(::ScePadTriggerMask BBBMHIMMIFN, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::Single))((::PBYTE)hIl2Cpp + JPKJPBIHFGB_IGFPFEJGKHH_OFFSET))(this, BBBMHIMMIFN, FNIOPKPHDEH);
	}

	::System::Single KNEKDOMFFNM(::ScePadTriggerMask BBBMHIMMIFN)
	{
		return ((::System::Single(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + JPKJPBIHFGB_KNEKDOMFFNM_OFFSET))(this, BBBMHIMMIFN);
	}

	static ::System::Boolean AACBOCJAGHG(::BCCBCEMEMHB JFIAGCBBFAK, ::ScePadTriggerMask& BBBMHIMMIFN)
	{
		return ((::System::Boolean(*)(::BCCBCEMEMHB, ::ScePadTriggerMask&))((::PBYTE)hIl2Cpp + JPKJPBIHFGB_AACBOCJAGHG_OFFSET))(JFIAGCBBFAK, BBBMHIMMIFN);
	}

	::System::Void BNDHAEICINF(::BCCBCEMEMHB JFIAGCBBFAK, ::MoleMole::ConfigPinball* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::BCCBCEMEMHB, ::MoleMole::ConfigPinball*))((::PBYTE)hIl2Cpp + JPKJPBIHFGB_BNDHAEICINF_OFFSET))(this, JFIAGCBBFAK, DFMKILICPFB);
	}

	static ::System::Void HIHABFLDCCC(::ScePadTriggerMask BBBMHIMMIFN, ::System::String* LMDGFDIHPDM, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::ScePadTriggerMask, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + JPKJPBIHFGB_HIHABFLDCCC_OFFSET))(BBBMHIMMIFN, LMDGFDIHPDM, MDPPNMIPDMP);
	}
};
