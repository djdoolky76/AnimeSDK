#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace System { class Action; }

#define FADFIFIOFNC_EDNMPJAENJI_NLNGKDPDEFN_OFFSET UNITYSDK_OFFSET(0xBB2F000)
#define FADFIFIOFNC_EDNMPJAENJI__CTOR_OFFSET UNITYSDK_OFFSET(0xBB2EFF0)

inline static constexpr unsigned int FADFIFIOFNC_EDNMPJAENJI_TypeDefinitionIndex = 61620;

class FADFIFIOFNC_EDNMPJAENJI : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADFIFIOFNC_EDNMPJAENJI__CTOR_OFFSET))(this);
	}

	::System::Void NLNGKDPDEFN(::MoleMole::Config::ConfigLevelResultPerforms* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms*))((::PBYTE)hIl2Cpp + FADFIFIOFNC_EDNMPJAENJI_NLNGKDPDEFN_OFFSET))(this, DFMKILICPFB);
	}
};
