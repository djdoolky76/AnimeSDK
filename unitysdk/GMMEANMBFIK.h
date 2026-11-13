#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMMEANMBFIK_FadeState.h"
#include "unitysdk/KJCHLFOFENJ.h"
namespace RPG::GameCore { class VCameraShakeV2; }

#define GMMEANMBFIK_CMCCHFLAOOE_OFFSET UNITYSDK_OFFSET(0x16C83670)
#define GMMEANMBFIK_CTOR_OFFSET UNITYSDK_OFFSET(0x16C833E0)
#define GMMEANMBFIK_FFGLFENEBPF_OFFSET UNITYSDK_OFFSET(0x16C83730)
#define GMMEANMBFIK_GHMDACLBDHL_OFFSET UNITYSDK_OFFSET(0x16C83920)
#define GMMEANMBFIK_GOIIKOFKJNB_OFFSET UNITYSDK_OFFSET(0x16C835B0)
#define GMMEANMBFIK_HCMLIDEEHMC_OFFSET UNITYSDK_OFFSET(0x16C83530)
#define GMMEANMBFIK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16C83780)
#define GMMEANMBFIK_KNCBOBBHLJD_OFFSET UNITYSDK_OFFSET(0x16C83420)
#define GMMEANMBFIK_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0x16C836C0)
#define GMMEANMBFIK_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x16C83600)
#define GMMEANMBFIK_PLNBBGBECMO_OFFSET UNITYSDK_OFFSET(0x16C83BF0)
#define GMMEANMBFIK_PLPPPMHNOEP_OFFSET UNITYSDK_OFFSET(0x16C83800)

inline static constexpr unsigned int GMMEANMBFIK_TypeDefinitionIndex = 62176;

	class GMMEANMBFIK : public ::KJCHLFOFENJ
	{
	public:
		::System::Single MBHOKIKBGEI; // 0xD0
		::System::Single MODIMDALIKJ; // 0xD4
		::GMMEANMBFIK_FadeState JBGFIMKKNFP; // 0xD8
		::System::Boolean GCAEJDGONEP; // 0xDC
		::System::Boolean CJCMJAECEKN; // 0xDD
		::System::Byte _padding0[0x2];
		::System::Single OKFMABJGOPI; // 0xE0
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
