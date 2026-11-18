#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuffMisc; }
namespace System { class Action; }

#define KCCHNBPIIFO_HDOAAONGFIC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1A49AF20)
#define KCCHNBPIIFO_HDOAAONGFIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49AF10)

inline static constexpr unsigned int KCCHNBPIIFO_HDOAAONGFIC_TypeDefinitionIndex = 51637;

class KCCHNBPIIFO_HDOAAONGFIC : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHNBPIIFO_HDOAAONGFIC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigBuffMisc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuffMisc*))((::PBYTE)hIl2Cpp + KCCHNBPIIFO_HDOAAONGFIC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
