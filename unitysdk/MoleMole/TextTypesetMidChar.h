#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAEIFGEHHJO.h"
#include "unitysdk/EMKKJHFBFGL.h"
#include "unitysdk/HGJJKOFCDKA.h"
#include "unitysdk/PFHAJOLBMAD.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_TEXTTYPESETMIDCHAR_AOBCIFPHMAC_OFFSET UNITYSDK_OFFSET(0x6FBBC0)
#define MOLEMOLE_TEXTTYPESETMIDCHAR_GET__PRASEDTOKEN_OFFSET UNITYSDK_OFFSET(0x6FBBB0)

namespace MoleMole
{
	inline static constexpr unsigned int TextTypesetMidChar_TypeDefinitionIndex = 48874;

	struct alignas(8) TextTypesetMidChar
	{
		::System::String* Token; // 0x10
		::EMKKJHFBFGL Type; // 0x18
		::HGJJKOFCDKA Direction; // 0x1A
		::CAEIFGEHHJO BreakType; // 0x1C

		::System::String* get__prasedToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTTYPESETMIDCHAR_GET__PRASEDTOKEN_OFFSET))(this);
		}

		::PFHAJOLBMAD AOBCIFPHMAC()
		{
			return ((::PFHAJOLBMAD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTTYPESETMIDCHAR_AOBCIFPHMAC_OFFSET))(this);
		}
	};
}
