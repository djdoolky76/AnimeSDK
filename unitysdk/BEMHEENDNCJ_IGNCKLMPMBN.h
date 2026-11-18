#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigRabGame; }
namespace System { class Action; }

#define BEMHEENDNCJ_IGNCKLMPMBN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1854DEC0)
#define BEMHEENDNCJ_IGNCKLMPMBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1854DEB0)

inline static constexpr unsigned int BEMHEENDNCJ_IGNCKLMPMBN_TypeDefinitionIndex = 42538;

class BEMHEENDNCJ_IGNCKLMPMBN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMHEENDNCJ_IGNCKLMPMBN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigRabGame* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRabGame*))((::PBYTE)hIl2Cpp + BEMHEENDNCJ_IGNCKLMPMBN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
