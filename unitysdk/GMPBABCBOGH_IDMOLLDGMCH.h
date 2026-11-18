#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLogicMovementRegistry; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMPBABCBOGH_IDMOLLDGMCH_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13D6B630)
#define GMPBABCBOGH_IDMOLLDGMCH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6B620)

inline static constexpr unsigned int GMPBABCBOGH_IDMOLLDGMCH_TypeDefinitionIndex = 60725;

class GMPBABCBOGH_IDMOLLDGMCH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicMovementRegistry*>* DJGOOALFABM; // 0x18
	::System::Action_1<::MoleMole::Config::ConfigLogicMovementRegistry*>* AMHGBGMOMLL; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPBABCBOGH_IDMOLLDGMCH__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigLogicMovementRegistry* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLogicMovementRegistry*))((::PBYTE)hIl2Cpp + GMPBABCBOGH_IDMOLLDGMCH_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
