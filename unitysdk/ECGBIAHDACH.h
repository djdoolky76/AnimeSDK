#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPCKBAPEJPB.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/System/Object.h"

#define ECGBIAHDACH_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x1062C190)

inline static constexpr unsigned int ECGBIAHDACH_TypeDefinitionIndex = 87775;

class ECGBIAHDACH : public ::System::Object
{
public:
	static ::MoleMole::Level::BangbooPlayType CELHLLIAIKB(::EPCKBAPEJPB MAOCFFFKJCF)
	{
		return ((::MoleMole::Level::BangbooPlayType(*)(::EPCKBAPEJPB))((::PBYTE)hIl2Cpp + ECGBIAHDACH_CELHLLIAIKB_OFFSET))(MAOCFFFKJCF);
	}
};
