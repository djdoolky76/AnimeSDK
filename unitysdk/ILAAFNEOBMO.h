#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMMFJHJECA.h"

#define ILAAFNEOBMO_CTOR_OFFSET UNITYSDK_OFFSET(0x164A1700)
#define ILAAFNEOBMO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x164A1580)

inline static constexpr unsigned int ILAAFNEOBMO_TypeDefinitionIndex = 64150;

	class ILAAFNEOBMO : public ::HGMMFJHJECA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAAFNEOBMO_CTOR_OFFSET))(this);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAAFNEOBMO_KFGJEKJHIMB_OFFSET))(this);
		}

	};
