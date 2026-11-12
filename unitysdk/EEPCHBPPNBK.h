#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANFHJIOJJMG.h"
#include "unitysdk/ANOBAENCAOD.h"
#include "unitysdk/System/Object.h"

#define EEPCHBPPNBK_CTOR_OFFSET UNITYSDK_OFFSET(0x148023F0)

inline static constexpr unsigned int EEPCHBPPNBK_TypeDefinitionIndex = 56895;

	class EEPCHBPPNBK : public ::System::Object
	{
	public:
		::ANFHJIOJJMG MEPFOEEGBEA; // 0x10
		::System::Int32 GMDBHJKEAEI; // 0x14
		::ANOBAENCAOD GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPCHBPPNBK_CTOR_OFFSET))(this);
		}

	};
