#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCNIDHLECFE;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GCNIDHLECFE_HGMKCLEOBOB_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x125C47E0)
#define GCNIDHLECFE_HGMKCLEOBOB_LDMKNICFFNB_OFFSET UNITYSDK_OFFSET(0x125C4850)
#define GCNIDHLECFE_HGMKCLEOBOB__CTOR_OFFSET UNITYSDK_OFFSET(0x125C47D0)

inline static constexpr unsigned int GCNIDHLECFE_HGMKCLEOBOB_TypeDefinitionIndex = 72099;

class GCNIDHLECFE_HGMKCLEOBOB : public ::System::Object
{
public:
	::System::Action* BNGMEPEJJHE; // 0x10
	::System::Action_1<::MoleMole::IVideoPlayer*>* JNCGLPCKKFL; // 0x18
	::GCNIDHLECFE* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNIDHLECFE_HGMKCLEOBOB__CTOR_OFFSET))(this);
	}

	::System::Void AACLKPHGMLM(::MoleMole::IVideoPlayer* HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + GCNIDHLECFE_HGMKCLEOBOB_AACLKPHGMLM_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void LDMKNICFFNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNIDHLECFE_HGMKCLEOBOB_LDMKNICFFNB_OFFSET))(this);
	}
};
