#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKHNMHOHEAK.h"
class KPCDEJGJHBK;

#define LBKFLEMHDOD_CGNOBOOCGNB_OFFSET UNITYSDK_OFFSET(0xBE99590)
#define LBKFLEMHDOD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE995E0)
#define LBKFLEMHDOD_IGKLKLJCMBI_OFFSET UNITYSDK_OFFSET(0xBE992E0)

inline static constexpr unsigned int LBKFLEMHDOD_TypeDefinitionIndex = 78278;

	class LBKFLEMHDOD : public ::MKHNMHOHEAK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKFLEMHDOD_CTOR_OFFSET))(this);
		}

		::System::Void IGKLKLJCMBI(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + LBKFLEMHDOD_IGKLKLJCMBI_OFFSET))(this, a1);
		}

		::System::Void CGNOBOOCGNB(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + LBKFLEMHDOD_CGNOBOOCGNB_OFFSET))(this, a1);
		}

	};
