#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMMEANMBFIK_FadeState.h"
#include "unitysdk/KJCHLFOFENJ.h"
namespace RPG::GameCore { class VCameraShakeV2; }

#define GMMEANMBFIK_CMCCHFLAOOE_OFFSET UNITYSDK_OFFSET(0x15ACB1D0)
#define GMMEANMBFIK_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACAF40)
#define GMMEANMBFIK_FFGLFENEBPF_OFFSET UNITYSDK_OFFSET(0x15ACB290)
#define GMMEANMBFIK_GHMDACLBDHL_OFFSET UNITYSDK_OFFSET(0x15ACB480)
#define GMMEANMBFIK_GOIIKOFKJNB_OFFSET UNITYSDK_OFFSET(0x15ACB110)
#define GMMEANMBFIK_HCMLIDEEHMC_OFFSET UNITYSDK_OFFSET(0x15ACB090)
#define GMMEANMBFIK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15ACB2E0)
#define GMMEANMBFIK_KNCBOBBHLJD_OFFSET UNITYSDK_OFFSET(0x15ACAF80)
#define GMMEANMBFIK_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0x15ACB220)
#define GMMEANMBFIK_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15ACB160)
#define GMMEANMBFIK_PLNBBGBECMO_OFFSET UNITYSDK_OFFSET(0x15ACB730)
#define GMMEANMBFIK_PLPPPMHNOEP_OFFSET UNITYSDK_OFFSET(0x15ACB360)

inline static constexpr unsigned int GMMEANMBFIK_TypeDefinitionIndex = 60797;

	class GMMEANMBFIK : public ::KJCHLFOFENJ
	{
	public:
		::System::Boolean CJCMJAECEKN; // 0xD0
		::System::Boolean GCAEJDGONEP; // 0xD1
		::System::Byte _padding0[0x2];
		::GMMEANMBFIK_FadeState JBGFIMKKNFP; // 0xD4
		::System::Single OKFMABJGOPI; // 0xD8
		::System::Single MBHOKIKBGEI; // 0xDC
		::System::Single MODIMDALIKJ; // 0xE0
		::System::Void _ctor(::RPG::GameCore::VCameraShakeV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + GMMEANMBFIK_CTOR_OFFSET))(this, a1);
		}

		::System::Void KNCBOBBHLJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMEANMBFIK_KNCBOBBHLJD_OFFSET))(this);
		}

		::System::Void HCMLIDEEHMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMEANMBFIK_HCMLIDEEHMC_OFFSET))(this);
		}

		::System::Void GOIIKOFKJNB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMMEANMBFIK_GOIIKOFKJNB_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMEANMBFIK_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMEANMBFIK_MONODNDCLJI_OFFSET))(this);
		}

		::System::Void CMCCHFLAOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMEANMBFIK_CMCCHFLAOOE_OFFSET))(this);
		}

		::System::Void FFGLFENEBPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMEANMBFIK_FFGLFENEBPF_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMMEANMBFIK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GHMDACLBDHL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMMEANMBFIK_GHMDACLBDHL_OFFSET))(this, a1);
		}

		::System::Single PLNBBGBECMO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMEANMBFIK_PLNBBGBECMO_OFFSET))(this);
		}

		::System::Void PLPPPMHNOEP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMMEANMBFIK_PLPPPMHNOEP_OFFSET))(this, a1);
		}

	};
