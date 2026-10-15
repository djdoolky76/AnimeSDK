#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHADLBDBHNA.h"
namespace System { class String; }

#define NCEBAMHOOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C786460)

inline static constexpr unsigned int NCEBAMHOOJM_TypeDefinitionIndex = 36868;

	class NCEBAMHOOJM : public ::GHADLBDBHNA
	{
	public:
		::System::String* BDNCADKJKAO; // 0x18
		::System::UInt32 JDGGFABIPDF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEBAMHOOJM_CTOR_OFFSET))(this);
		}

	};
