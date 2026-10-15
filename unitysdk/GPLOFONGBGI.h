#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class PBGNKMMDBGD;

#define GPLOFONGBGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FB050)
#define GPLOFONGBGI_HKKFFCBJOKM_1_OFFSET UNITYSDK_OFFSET(0x1C61E220)
#define GPLOFONGBGI_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1C60D510)
#define GPLOFONGBGI_NJNIEPHBGLG_OFFSET UNITYSDK_OFFSET(0x1C61E0E0)

inline static constexpr unsigned int GPLOFONGBGI_TypeDefinitionIndex = 37367;

	class GPLOFONGBGI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLOFONGBGI_CTOR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::System::Int32 a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + GPLOFONGBGI_HKKFFCBJOKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HKKFFCBJOKM_1(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + GPLOFONGBGI_HKKFFCBJOKM_1_OFFSET))(this, a1, a2, a3);
		}

		::IFBFJDCECML* NJNIEPHBGLG(::PBGNKMMDBGD* a1, ::System::Int32 a2)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + GPLOFONGBGI_NJNIEPHBGLG_OFFSET))(this, a1, a2);
		}

	};
