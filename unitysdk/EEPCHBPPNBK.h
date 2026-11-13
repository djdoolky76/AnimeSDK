#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANFHJIOJJMG.h"
#include "unitysdk/ANOBAENCAOD.h"
#include "unitysdk/System/Object.h"

#define EEPCHBPPNBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A32A8D0)

inline static constexpr unsigned int EEPCHBPPNBK_TypeDefinitionIndex = 56895;

	class EEPCHBPPNBK : public ::System::Object
	{
	public:
		::System::Int32 GMDBHJKEAEI; // 0x10
		::ANOBAENCAOD GMPGDEINODK; // 0x14
		::ANFHJIOJJMG MEPFOEEGBEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPCHBPPNBK_CTOR_OFFSET))(this);
		}

	};
