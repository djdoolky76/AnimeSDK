#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject; }
namespace System { class Action; }

#define EBGGHNKPICC_BFFCOKKGCKP_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1062B9F0)
#define EBGGHNKPICC_BFFCOKKGCKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1062B9E0)

inline static constexpr unsigned int EBGGHNKPICC_BFFCOKKGCKP_TypeDefinitionIndex = 84926;

class EBGGHNKPICC_BFFCOKKGCKP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGGHNKPICC_BFFCOKKGCKP__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigFlowerShopActivityScriptableObject* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*))((::PBYTE)hIl2Cpp + EBGGHNKPICC_BFFCOKKGCKP_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
