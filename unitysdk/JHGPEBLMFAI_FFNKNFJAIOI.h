#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLogicRotationRegistry; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHGPEBLMFAI_FFNKNFJAIOI_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14FB72B0)
#define JHGPEBLMFAI_FFNKNFJAIOI__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB72A0)

inline static constexpr unsigned int JHGPEBLMFAI_FFNKNFJAIOI_TypeDefinitionIndex = 61194;

class JHGPEBLMFAI_FFNKNFJAIOI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicRotationRegistry*>* DJGOOALFABM; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Action_1<::MoleMole::Config::ConfigLogicRotationRegistry*>* AMHGBGMOMLL; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGPEBLMFAI_FFNKNFJAIOI__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigLogicRotationRegistry* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLogicRotationRegistry*))((::PBYTE)hIl2Cpp + JHGPEBLMFAI_FFNKNFJAIOI_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
