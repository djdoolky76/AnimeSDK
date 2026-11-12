#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLKLJKIEEPM;

#define IEOMMCEJKBN_AGHFPPONIEG_OFFSET UNITYSDK_OFFSET(0x1D6D4E70)
#define IEOMMCEJKBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB3A0)

inline static constexpr unsigned int IEOMMCEJKBN_TypeDefinitionIndex = 42860;

	class IEOMMCEJKBN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMMCEJKBN_CTOR_OFFSET))(this);
		}

		::FLKLJKIEEPM* AGHFPPONIEG()
		{
			return ((::FLKLJKIEEPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMMCEJKBN_AGHFPPONIEG_OFFSET))(this);
		}

	};
