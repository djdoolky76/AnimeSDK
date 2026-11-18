#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UILineupSelectPageController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define LKFBOILOCMN_CBCMLIHALEF_IGKGCDIBAJB_OFFSET UNITYSDK_OFFSET(0x16C5F440)
#define LKFBOILOCMN_CBCMLIHALEF_PANEOOFEHLC_OFFSET UNITYSDK_OFFSET(0x16C5F310)
#define LKFBOILOCMN_CBCMLIHALEF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5F300)

inline static constexpr unsigned int LKFBOILOCMN_CBCMLIHALEF_TypeDefinitionIndex = 82629;

class LKFBOILOCMN_CBCMLIHALEF : public ::System::Object
{
public:
	::System::Action_1<::System::Action*>* EPNFLCJMHKM; // 0x10
	::MoleMole::UILineupSelectPageController* JOLDOMEIKEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_CBCMLIHALEF__CTOR_OFFSET))(this);
	}

	::System::Void PANEOOFEHLC(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_CBCMLIHALEF_PANEOOFEHLC_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void IGKGCDIBAJB(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_CBCMLIHALEF_IGKGCDIBAJB_OFFSET))(this, NFFNEFLKPDG);
	}
};
