#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIScripts; }
namespace System { class Action; }

#define KOLCKBMFJMJ_OJEGDFLNMIC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1791A7C0)
#define KOLCKBMFJMJ_OJEGDFLNMIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A7B0)

inline static constexpr unsigned int KOLCKBMFJMJ_OJEGDFLNMIC_TypeDefinitionIndex = 61748;

class KOLCKBMFJMJ_OJEGDFLNMIC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCKBMFJMJ_OJEGDFLNMIC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUIScripts* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIScripts*))((::PBYTE)hIl2Cpp + KOLCKBMFJMJ_OJEGDFLNMIC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
