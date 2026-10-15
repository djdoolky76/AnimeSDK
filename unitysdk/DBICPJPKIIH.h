#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGAGNDEHIOI.h"
class GIPFFGFJCBF_PBICBEEGHJO;
class LEEEHNMHAAP;

#define DBICPJPKIIH_CTOR_OFFSET UNITYSDK_OFFSET(0xE227E20)
#define DBICPJPKIIH_FIADDJLKIGB_OFFSET UNITYSDK_OFFSET(0xE227D90)

inline static constexpr unsigned int DBICPJPKIIH_TypeDefinitionIndex = 72041;

	class DBICPJPKIIH : public ::AGAGNDEHIOI
	{
	public:
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBICPJPKIIH_CTOR_OFFSET))(this);
		}

		::LEEEHNMHAAP* FIADDJLKIGB(::GIPFFGFJCBF_PBICBEEGHJO* a1)
		{
			return ((::LEEEHNMHAAP*(*)(::PVOID, ::GIPFFGFJCBF_PBICBEEGHJO*))((::PBYTE)hIl2Cpp + DBICPJPKIIH_FIADDJLKIGB_OFFSET))(this, a1);
		}

	};
