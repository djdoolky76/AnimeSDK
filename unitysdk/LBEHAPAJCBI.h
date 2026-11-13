#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBEHAPAJCBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B297850)
#define LBEHAPAJCBI_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1B297810)

inline static constexpr unsigned int LBEHAPAJCBI_TypeDefinitionIndex = 69389;

	class LBEHAPAJCBI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEHAPAJCBI_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEHAPAJCBI_LJBCDJNNBJH_OFFSET))(this);
		}

	};
