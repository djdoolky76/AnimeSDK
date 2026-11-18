#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define KHPPNOIMLNP_DOPHFELMCHC_KANMGEGGDOL_OFFSET UNITYSDK_OFFSET(0x16340B80)
#define KHPPNOIMLNP_DOPHFELMCHC__CTOR_OFFSET UNITYSDK_OFFSET(0x16340B70)

inline static constexpr unsigned int KHPPNOIMLNP_DOPHFELMCHC_TypeDefinitionIndex = 74313;

class KHPPNOIMLNP_DOPHFELMCHC : public ::System::Object
{
public:
	::System::Int32 KANDGOGIJCF; // 0x10
	::System::Int32 AMCNCFDFMEM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPPNOIMLNP_DOPHFELMCHC__CTOR_OFFSET))(this);
	}

	::System::Void KANMGEGGDOL(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KHPPNOIMLNP_DOPHFELMCHC_KANMGEGGDOL_OFFSET))(this, GLAOEHCGCFO);
	}
};
