#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMBCBBKEHJ;

#define EGNBLHHKMFB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1451EBF0)
#define EGNBLHHKMFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1451ECC0)

inline static constexpr unsigned int EGNBLHHKMFB_TypeDefinitionIndex = 62694;

	class EGNBLHHKMFB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNBLHHKMFB_CTOR_OFFSET))(this);
		}

		::EBMBCBBKEHJ* BPLPBPMEODA()
		{
			return ((::EBMBCBBKEHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNBLHHKMFB_BPLPBPMEODA_OFFSET))(this);
		}

	};
