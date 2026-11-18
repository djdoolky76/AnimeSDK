#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InitCharacterPerform; }
namespace System { class Action; }

#define HFMFPBOFCHN_IJFMOJIDOIL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14D24090)
#define HFMFPBOFCHN_IJFMOJIDOIL__CTOR_OFFSET UNITYSDK_OFFSET(0x14D24080)

inline static constexpr unsigned int HFMFPBOFCHN_IJFMOJIDOIL_TypeDefinitionIndex = 66797;

class HFMFPBOFCHN_IJFMOJIDOIL : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMFPBOFCHN_IJFMOJIDOIL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::InitCharacterPerform* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InitCharacterPerform*))((::PBYTE)hIl2Cpp + HFMFPBOFCHN_IJFMOJIDOIL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
