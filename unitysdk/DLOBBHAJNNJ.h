#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJHOPNCDMGM;
class GOFOGINDKEF;

#define DLOBBHAJNNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF8B4A90)
#define DLOBBHAJNNJ_EDAHIKEGCKH_OFFSET UNITYSDK_OFFSET(0xF8B4AA0)

inline static constexpr unsigned int DLOBBHAJNNJ_TypeDefinitionIndex = 80138;

	class DLOBBHAJNNJ : public ::System::Object
	{
	public:
		::GOFOGINDKEF* KPEKPIIPIDM; // 0x10
		::System::Void _ctor(::GOFOGINDKEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOFOGINDKEF*))((::PBYTE)hIl2Cpp + DLOBBHAJNNJ_CTOR_OFFSET))(this, a1);
		}

		::DJHOPNCDMGM* EDAHIKEGCKH(::System::UInt32 a1)
		{
			return ((::DJHOPNCDMGM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLOBBHAJNNJ_EDAHIKEGCKH_OFFSET))(this, a1);
		}

	};
