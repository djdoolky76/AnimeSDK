#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMEFEGGEMIJ;

#define DKAGNAFNKEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEF820)
#define DKAGNAFNKEE_LPOMBDLDBAF_OFFSET UNITYSDK_OFFSET(0x1DBEF780)

inline static constexpr unsigned int DKAGNAFNKEE_TypeDefinitionIndex = 43053;

	class DKAGNAFNKEE : public ::System::Object
	{
	public:
		::IMEFEGGEMIJ* EDIMGKLHMBG; // 0x10
		::System::Int32 BEFKNFBNBGJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAGNAFNKEE_CTOR_OFFSET))(this);
		}

		::System::Void LPOMBDLDBAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAGNAFNKEE_LPOMBDLDBAF_OFFSET))(this);
		}

	};
