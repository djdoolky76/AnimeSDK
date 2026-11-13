#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDICOMLMBME;

#define MDPDNACMAHF_CTOR_OFFSET UNITYSDK_OFFSET(0x183F04E0)
#define MDPDNACMAHF_GCCALFDJDNM_OFFSET UNITYSDK_OFFSET(0x183DE1C0)
#define MDPDNACMAHF_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x183F0500)
#define MDPDNACMAHF_GET_UNIQUEDIALOGUEID_OFFSET UNITYSDK_OFFSET(0x183F04D0)
#define MDPDNACMAHF_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x183F0540)

inline static constexpr unsigned int MDPDNACMAHF_TypeDefinitionIndex = 68931;

	class MDPDNACMAHF : public ::System::Object
	{
	public:
		::System::UInt32 JAMLPLHNDCN; // 0x10
		::System::UInt32 _UniqueDialogueID_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::FDICOMLMBME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::FDICOMLMBME*))((::PBYTE)hIl2Cpp + MDPDNACMAHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_UniqueDialogueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPDNACMAHF_GET_UNIQUEDIALOGUEID_OFFSET))(this);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPDNACMAHF_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPDNACMAHF_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void GCCALFDJDNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPDNACMAHF_GCCALFDJDNM_OFFSET))(this);
		}

	};
