#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;

#define FFHFJECEOJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9BBD0)
#define FFHFJECEOJO_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1BA9BBE0)

inline static constexpr unsigned int FFHFJECEOJO_TypeDefinitionIndex = 38315;

	class FFHFJECEOJO : public ::GPLOFONGBGI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFJECEOJO_CTOR_OFFSET))(this);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + FFHFJECEOJO_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
