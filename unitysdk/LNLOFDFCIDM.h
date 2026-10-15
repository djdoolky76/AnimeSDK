#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading { class ManualResetEvent; }

#define LNLOFDFCIDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E2330)
#define LNLOFDFCIDM_EEMDBGCMHLP_OFFSET UNITYSDK_OFFSET(0xB7E2370)
#define LNLOFDFCIDM_OEPGEEFHCDL_OFFSET UNITYSDK_OFFSET(0xB7E2480)

inline static constexpr unsigned int LNLOFDFCIDM_TypeDefinitionIndex = 59441;

	class LNLOFDFCIDM : public ::System::Object
	{
	public:
		::System::Threading::ManualResetEvent* FEMHOGGGPIG; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNLOFDFCIDM_CTOR_OFFSET))(this, a1);
		}

		::System::Void EEMDBGCMHLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLOFDFCIDM_EEMDBGCMHLP_OFFSET))(this);
		}

		::System::Void OEPGEEFHCDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLOFDFCIDM_OEPGEEFHCDL_OFFSET))(this);
		}

	};
