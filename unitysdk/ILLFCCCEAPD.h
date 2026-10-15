#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILLFCCCEAPD;
class PBGNKMMDBGD;

#define ILLFCCCEAPD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C6E2460)
#define ILLFCCCEAPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E24D0)
#define ILLFCCCEAPD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6E24E0)

inline static constexpr unsigned int ILLFCCCEAPD_TypeDefinitionIndex = 37439;

	class ILLFCCCEAPD : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + ILLFCCCEAPD_CTOR_OFFSET))(this, a1);
		}

		static ::ILLFCCCEAPD* BPLPBPMEODA(::PBGNKMMDBGD* a1)
		{
			return ((::ILLFCCCEAPD*(*)(::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + ILLFCCCEAPD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLFCCCEAPD_EXECUTE_OFFSET))(this);
		}

	};
