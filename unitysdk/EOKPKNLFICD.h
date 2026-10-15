#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMLFGDFLIBP;

#define EOKPKNLFICD_CTOR_OFFSET UNITYSDK_OFFSET(0x155B90C0)

inline static constexpr unsigned int EOKPKNLFICD_TypeDefinitionIndex = 80193;

	class EOKPKNLFICD : public ::System::Object
	{
	public:
		::HMLFGDFLIBP* JIKLDOLMNPC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKPKNLFICD_CTOR_OFFSET))(this);
		}

	};
