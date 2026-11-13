#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNMIBEFPHNF.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
class PIIOAKOEACN;

#define KMMHLCBLLMN_CTOR_OFFSET UNITYSDK_OFFSET(0x207B6200)
#define KMMHLCBLLMN_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x207B62E0)
#define KMMHLCBLLMN_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x207B61C0)
#define KMMHLCBLLMN_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x207B6210)

inline static constexpr unsigned int KMMHLCBLLMN_TypeDefinitionIndex = 42738;

	class KMMHLCBLLMN : public ::BNMIBEFPHNF
	{
	public:
		::RPG::Client::MechCraft::MechCraftChipTraitType PAEIOKFHAKI; // 0x18
		::System::Int32 COEMCOBPMKD; // 0x1C
		::System::Void _ctor(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + KMMHLCBLLMN_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMHLCBLLMN_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + KMMHLCBLLMN_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + KMMHLCBLLMN_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
