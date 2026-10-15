#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELBFOBKAK.h"
class AIMNKMEFBKE;
class GGDIMKDOIGA;

#define NEBEDFNOACB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C759A70)
#define NEBEDFNOACB_EHACKGPDJNF_OFFSET UNITYSDK_OFFSET(0x1C759A80)
#define NEBEDFNOACB_GIOKLBPDMIP_OFFSET UNITYSDK_OFFSET(0x1C759EC0)
#define NEBEDFNOACB_HFOAFHEDIEH_OFFSET UNITYSDK_OFFSET(0x1C759D50)

inline static constexpr unsigned int NEBEDFNOACB_TypeDefinitionIndex = 36472;

	class NEBEDFNOACB : public ::JGELBFOBKAK
	{
	public:
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x10
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + NEBEDFNOACB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EHACKGPDJNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEBEDFNOACB_EHACKGPDJNF_OFFSET))(this, a1);
		}

		::System::Void HFOAFHEDIEH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NEBEDFNOACB_HFOAFHEDIEH_OFFSET))(this, a1, a2);
		}

		::System::Void GIOKLBPDMIP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEBEDFNOACB_GIOKLBPDMIP_OFFSET))(this, a1);
		}

	};
