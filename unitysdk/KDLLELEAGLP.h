#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class HMLFGDFLIBP;
class OBJANKHLNGO;

#define KDLLELEAGLP_CTOR_OFFSET UNITYSDK_OFFSET(0xB360450)
#define KDLLELEAGLP_HGCKNJPANMD_OFFSET UNITYSDK_OFFSET(0xB3604B0)
#define KDLLELEAGLP_LFABHKPBGPA_OFFSET UNITYSDK_OFFSET(0xB360550)

inline static constexpr unsigned int KDLLELEAGLP_TypeDefinitionIndex = 80171;

	class KDLLELEAGLP : public ::BHPMNMMGLHI
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + KDLLELEAGLP_CTOR_OFFSET))(this, a1);
		}

		::System::Void HGCKNJPANMD(::System::UInt16 a1, ::HMLFGDFLIBP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::HMLFGDFLIBP*))((::PBYTE)hIl2Cpp + KDLLELEAGLP_HGCKNJPANMD_OFFSET))(this, a1, a2);
		}

		::System::Void LFABHKPBGPA(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + KDLLELEAGLP_LFABHKPBGPA_OFFSET))(this, a1);
		}

	};
