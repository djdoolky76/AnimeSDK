#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDigibooNewbie; }
namespace System { class Action; }

#define MMJIJHMPCOI_IAPCFJJPGAN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1302B370)
#define MMJIJHMPCOI_IAPCFJJPGAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1302B360)

inline static constexpr unsigned int MMJIJHMPCOI_IAPCFJJPGAN_TypeDefinitionIndex = 57954;

class MMJIJHMPCOI_IAPCFJJPGAN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJIJHMPCOI_IAPCFJJPGAN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigDigibooNewbie* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDigibooNewbie*))((::PBYTE)hIl2Cpp + MMJIJHMPCOI_IAPCFJJPGAN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
