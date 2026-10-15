#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEANOGAFBGK;
class HBGNFKBHDJK;

#define FIPACJNLMIJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x157B1550)
#define FIPACJNLMIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157B15E0)

inline static constexpr unsigned int FIPACJNLMIJ_TypeDefinitionIndex = 81720;

	class FIPACJNLMIJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPACJNLMIJ_CTOR_OFFSET))(this);
		}

		::HBGNFKBHDJK* BPLPBPMEODA(::AEANOGAFBGK* a1, ::System::Boolean a2)
		{
			return ((::HBGNFKBHDJK*(*)(::PVOID, ::AEANOGAFBGK*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIPACJNLMIJ_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
