#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJGNPJOPBAE;
namespace System { class String; }

#define BHPJFILKGPM_FDIIGGIMENM_OFFSET UNITYSDK_OFFSET(0xB493C70)
#define BHPJFILKGPM_HOJIJCAPDAJ_OFFSET UNITYSDK_OFFSET(0xB493BD0)

inline static constexpr unsigned int BHPJFILKGPM_TypeDefinitionIndex = 60905;

	class BHPJFILKGPM : public ::System::Object
	{
	public:
		static ::LJGNPJOPBAE* HOJIJCAPDAJ(::System::String* a1)
		{
			return ((::LJGNPJOPBAE*(*)(::System::String*))((::PBYTE)hIl2Cpp + BHPJFILKGPM_HOJIJCAPDAJ_OFFSET))(a1);
		}

		static ::System::Void FDIIGGIMENM(::LJGNPJOPBAE* a1)
		{
			return ((::System::Void(*)(::LJGNPJOPBAE*))((::PBYTE)hIl2Cpp + BHPJFILKGPM_FDIIGGIMENM_OFFSET))(a1);
		}

	};
