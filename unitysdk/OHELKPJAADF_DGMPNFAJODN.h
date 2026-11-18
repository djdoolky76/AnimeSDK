#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CinemaSingleBeatMapConfig; }
namespace System { class Action; }

#define OHELKPJAADF_DGMPNFAJODN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16F7D9A0)
#define OHELKPJAADF_DGMPNFAJODN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7D990)

inline static constexpr unsigned int OHELKPJAADF_DGMPNFAJODN_TypeDefinitionIndex = 53800;

class OHELKPJAADF_DGMPNFAJODN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHELKPJAADF_DGMPNFAJODN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::CinemaSingleBeatMapConfig* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaSingleBeatMapConfig*))((::PBYTE)hIl2Cpp + OHELKPJAADF_DGMPNFAJODN_OKKMJKOAIKG_OFFSET))(this, NGLKIKLLLFL);
	}
};
