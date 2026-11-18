#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJHECPGCKPO_EDOJEGGPPJF.h"
#include "unitysdk/System/Object.h"

#define KJHECPGCKPO_PEABAPPBKAD_1_OFFSET UNITYSDK_OFFSET(0x15163170)
#define KJHECPGCKPO_PEABAPPBKAD_OFFSET UNITYSDK_OFFSET(0x151630E0)

inline static constexpr unsigned int KJHECPGCKPO_TypeDefinitionIndex = 52178;

class KJHECPGCKPO : public ::System::Object
{
public:
	static ::System::Boolean PEABAPPBKAD(::System::Int32 JHFKDGBCOBA, ::KJHECPGCKPO_EDOJEGGPPJF IIDKBMFGAOL, ::System::Int32 FGLCGNPDMMN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::KJHECPGCKPO_EDOJEGGPPJF, ::System::Int32))((::PBYTE)hIl2Cpp + KJHECPGCKPO_PEABAPPBKAD_OFFSET))(JHFKDGBCOBA, IIDKBMFGAOL, FGLCGNPDMMN);
	}

	static ::System::Boolean PEABAPPBKAD_1(::System::Int32 JHFKDGBCOBA, ::System::Int32 IIDKBMFGAOL, ::System::Int32 FGLCGNPDMMN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KJHECPGCKPO_PEABAPPBKAD_1_OFFSET))(JHFKDGBCOBA, IIDKBMFGAOL, FGLCGNPDMMN);
	}
};
