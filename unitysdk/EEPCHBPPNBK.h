#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANFHJIOJJMG.h"
#include "unitysdk/ANOBAENCAOD.h"
#include "unitysdk/System/Object.h"

#define EEPCHBPPNBK_CTOR_OFFSET UNITYSDK_OFFSET(0x13A42350)

inline static constexpr unsigned int EEPCHBPPNBK_TypeDefinitionIndex = 55693;

	class EEPCHBPPNBK : public ::System::Object
	{
	public:
		::ANOBAENCAOD GMPGDEINODK; // 0x10
		::ANFHJIOJJMG MEPFOEEGBEA; // 0x14
		::System::Int32 GMDBHJKEAEI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPCHBPPNBK_CTOR_OFFSET))(this);
		}

	};
