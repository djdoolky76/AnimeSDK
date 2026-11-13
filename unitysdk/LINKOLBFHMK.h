#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFJMOFNDDEH;

#define LINKOLBFHMK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x172F12E0)
#define LINKOLBFHMK_CTOR_OFFSET UNITYSDK_OFFSET(0x172F13B0)

inline static constexpr unsigned int LINKOLBFHMK_TypeDefinitionIndex = 82931;

	class LINKOLBFHMK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINKOLBFHMK_CTOR_OFFSET))(this);
		}

		::FFJMOFNDDEH* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::FFJMOFNDDEH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LINKOLBFHMK_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
