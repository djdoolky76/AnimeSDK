#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigControllableObject; }
namespace System { class Action; }

#define IGOLNCFNPDB_DBIOGIMDOMH_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1A466710)
#define IGOLNCFNPDB_DBIOGIMDOMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A466700)

inline static constexpr unsigned int IGOLNCFNPDB_DBIOGIMDOMH_TypeDefinitionIndex = 70517;

class IGOLNCFNPDB_DBIOGIMDOMH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOLNCFNPDB_DBIOGIMDOMH__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigControllableObject* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigControllableObject*))((::PBYTE)hIl2Cpp + IGOLNCFNPDB_DBIOGIMDOMH_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
