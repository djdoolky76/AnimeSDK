#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneStoreLight; }
namespace System { class Action; }

#define PKLNLIGIKFF_EALELGDJBEA_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1D9CEFD0)
#define PKLNLIGIKFF_EALELGDJBEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CEFC0)

inline static constexpr unsigned int PKLNLIGIKFF_EALELGDJBEA_TypeDefinitionIndex = 61665;

class PKLNLIGIKFF_EALELGDJBEA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNLIGIKFF_EALELGDJBEA__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigBigSceneStoreLight* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBigSceneStoreLight*))((::PBYTE)hIl2Cpp + PKLNLIGIKFF_EALELGDJBEA_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
