#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBEHAPAJCBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F39F0)
#define LBEHAPAJCBI_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB5F39B0)

inline static constexpr unsigned int LBEHAPAJCBI_TypeDefinitionIndex = 67445;

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
