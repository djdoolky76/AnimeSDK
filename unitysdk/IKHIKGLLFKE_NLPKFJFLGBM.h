#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowCampTypeConfig; }
namespace System { class Action; }

#define IKHIKGLLFKE_NLPKFJFLGBM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xF87D460)
#define IKHIKGLLFKE_NLPKFJFLGBM__CTOR_OFFSET UNITYSDK_OFFSET(0xF87D450)

inline static constexpr unsigned int IKHIKGLLFKE_NLPKFJFLGBM_TypeDefinitionIndex = 60342;

class IKHIKGLLFKE_NLPKFJFLGBM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHIKGLLFKE_NLPKFJFLGBM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::HollowCampTypeConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HollowCampTypeConfig*))((::PBYTE)hIl2Cpp + IKHIKGLLFKE_NLPKFJFLGBM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
