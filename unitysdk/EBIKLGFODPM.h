#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJMFLECOALG;
class FNJPHLBBNBC;
class HCMJGNAPIBD;

#define EBIKLGFODPM_CTOR_OFFSET UNITYSDK_OFFSET(0x12CF6B10)
#define EBIKLGFODPM_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x12CF6B20)

inline static constexpr unsigned int EBIKLGFODPM_TypeDefinitionIndex = 64152;

	class EBIKLGFODPM : public ::System::Object
	{
	public:
		::HCMJGNAPIBD* IJGJAMAKFLJ; // 0x10
		::DJMFLECOALG* NIIPLIOLIBG; // 0x18
		::System::Void _ctor(::HCMJGNAPIBD* a1, ::DJMFLECOALG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HCMJGNAPIBD*, ::DJMFLECOALG*))((::PBYTE)hIl2Cpp + EBIKLGFODPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LNGKNPJIOML(::FNJPHLBBNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNJPHLBBNBC*))((::PBYTE)hIl2Cpp + EBIKLGFODPM_LNGKNPJIOML_OFFSET))(this, a1);
		}

	};
