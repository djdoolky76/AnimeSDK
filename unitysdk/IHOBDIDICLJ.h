#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class ALDGGLFIIBC;
class CAHOAFEBCJC;
class CJGJPBCDINJ;
class LINOLDCHLNE;

#define IHOBDIDICLJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x173DDD60)
#define IHOBDIDICLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x173DDCC0)

inline static constexpr unsigned int IHOBDIDICLJ_TypeDefinitionIndex = 64036;

	class IHOBDIDICLJ : public ::System::Object
	{
	public:
		::CJGJPBCDINJ* LDNELHFOJON; // 0x10
		::LINOLDCHLNE* HDEODDGJPIK; // 0x18
		::ALDGGLFIIBC* KEPIDNONLIE; // 0x20
		::System::Void _ctor(::CJGJPBCDINJ* a1, ::LINOLDCHLNE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CJGJPBCDINJ*, ::LINOLDCHLNE*))((::PBYTE)hIl2Cpp + IHOBDIDICLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::CAHOAFEBCJC* BPLPBPMEODA(::AHHNGJGLOKA a1)
		{
			return ((::CAHOAFEBCJC*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + IHOBDIDICLJ_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
