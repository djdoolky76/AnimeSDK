#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { class Action; }

#define LDJMJMJLBGG_BNDOMMOJHHL_GIECMDPFNHL_OFFSET UNITYSDK_OFFSET(0x126CF3A0)
#define LDJMJMJLBGG_BNDOMMOJHHL__CTOR_OFFSET UNITYSDK_OFFSET(0x126CF390)

inline static constexpr unsigned int LDJMJMJLBGG_BNDOMMOJHHL_TypeDefinitionIndex = 90527;

class LDJMJMJLBGG_BNDOMMOJHHL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJMJMJLBGG_BNDOMMOJHHL__CTOR_OFFSET))(this);
	}

	::System::Void GIECMDPFNHL(::MoleMole::Config::ConfigHollowChessboardCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*))((::PBYTE)hIl2Cpp + LDJMJMJLBGG_BNDOMMOJHHL_GIECMDPFNHL_OFFSET))(this, DFMKILICPFB);
	}
};
