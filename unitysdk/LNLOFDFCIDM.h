#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading { class ManualResetEvent; }

#define LNLOFDFCIDM_CTOR_OFFSET UNITYSDK_OFFSET(0xC047E40)
#define LNLOFDFCIDM_EEMDBGCMHLP_OFFSET UNITYSDK_OFFSET(0xC047E80)
#define LNLOFDFCIDM_OEPGEEFHCDL_OFFSET UNITYSDK_OFFSET(0xC047F90)

inline static constexpr unsigned int LNLOFDFCIDM_TypeDefinitionIndex = 60718;

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
