#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRichtapResource; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGJCOEKKMBG_PJDFJLNFJEP_MFOPEICNOCO_OFFSET UNITYSDK_OFFSET(0x169F13D0)
#define BGJCOEKKMBG_PJDFJLNFJEP__CTOR_OFFSET UNITYSDK_OFFSET(0x169F13C0)

inline static constexpr unsigned int BGJCOEKKMBG_PJDFJLNFJEP_TypeDefinitionIndex = 46529;

class BGJCOEKKMBG_PJDFJLNFJEP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* PFBPOFGKCBK; // 0x18
	::System::Action_1<::MoleMole::ConfigRichtapResource*>* AMHGBGMOMLL; // 0x20
	::System::Int32 ILBEGDEJMCP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_PJDFJLNFJEP__CTOR_OFFSET))(this);
	}

	::System::Void MFOPEICNOCO(::MoleMole::ConfigRichtapResource* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRichtapResource*))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_PJDFJLNFJEP_MFOPEICNOCO_OFFSET))(this, DFMKILICPFB);
	}
};
