#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigScaleCameraZ; }
namespace System { class Action; }

#define DHDENPAGNCL_GEFDMJLFKLJ_ELEEDAAFBGC_OFFSET UNITYSDK_OFFSET(0x194120E0)
#define DHDENPAGNCL_GEFDMJLFKLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x194120D0)

inline static constexpr unsigned int DHDENPAGNCL_GEFDMJLFKLJ_TypeDefinitionIndex = 74548;

class DHDENPAGNCL_GEFDMJLFKLJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDENPAGNCL_GEFDMJLFKLJ__CTOR_OFFSET))(this);
	}

	::System::Void ELEEDAAFBGC(::MoleMole::Config::ConfigScaleCameraZ* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigScaleCameraZ*))((::PBYTE)hIl2Cpp + DHDENPAGNCL_GEFDMJLFKLJ_ELEEDAAFBGC_OFFSET))(this, DFMKILICPFB);
	}
};
