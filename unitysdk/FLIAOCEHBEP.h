#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFACMJOEDGH;

#define FLIAOCEHBEP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA42C50)
#define FLIAOCEHBEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA42CB0)

inline static constexpr unsigned int FLIAOCEHBEP_TypeDefinitionIndex = 43288;

	class FLIAOCEHBEP : public ::System::Object
	{
	public:
		::GFACMJOEDGH* JKHJDPPAIBG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIAOCEHBEP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIAOCEHBEP_CLEAR_OFFSET))(this);
		}

	};
