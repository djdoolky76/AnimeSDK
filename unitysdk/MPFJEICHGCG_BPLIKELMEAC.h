#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSplineTag; }
namespace System { class Action; }

#define MPFJEICHGCG_BPLIKELMEAC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1C5A0F40)
#define MPFJEICHGCG_BPLIKELMEAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A0F30)

inline static constexpr unsigned int MPFJEICHGCG_BPLIKELMEAC_TypeDefinitionIndex = 88122;

class MPFJEICHGCG_BPLIKELMEAC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFJEICHGCG_BPLIKELMEAC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigSplineTag* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSplineTag*))((::PBYTE)hIl2Cpp + MPFJEICHGCG_BPLIKELMEAC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
