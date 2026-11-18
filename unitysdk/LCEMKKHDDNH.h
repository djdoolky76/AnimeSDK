#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }

#define LCEMKKHDDNH_PICICPFJFID_OFFSET UNITYSDK_OFFSET(0x15DE03D0)

inline static constexpr unsigned int LCEMKKHDDNH_TypeDefinitionIndex = 47443;

class LCEMKKHDDNH : public ::System::Object
{
public:
	static ::MoleMole::UIBaseController* PICICPFJFID(::MoleMole::UIBaseController* NCIMBHDKIJM)
	{
		return ((::MoleMole::UIBaseController*(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + LCEMKKHDDNH_PICICPFJFID_OFFSET))(NCIMBHDKIJM);
	}
};
