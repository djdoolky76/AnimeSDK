#pragma once
#include "unitysdk/unitysdk.h"
class GBHFOGMDJPF;
class NOLOGOCDLLO;
class PHPFBBDLPNL_GDPCFEDMCHC;
namespace RPG::GameCore { class TaskContext; }

#define GHFECOBDDLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A18BC0)
#define GHFECOBDDLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A18C30)
#define GHFECOBDDLB_GDIIPHEEEBK_OFFSET UNITYSDK_OFFSET(0x15A18C80)
#define GHFECOBDDLB_JBJBMDKIJPH_OFFSET UNITYSDK_OFFSET(0x15A19650)
#define GHFECOBDDLB_KJBLCICJNBF_OFFSET UNITYSDK_OFFSET(0x15A193A0)
#define GHFECOBDDLB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A18D70)

inline static constexpr unsigned int GHFECOBDDLB_TypeDefinitionIndex = 52976;

	class GHFECOBDDLB
	{
	public:
		::PHPFBBDLPNL_GDPCFEDMCHC* AHOGJICDENK; // 0x28
		::System::UInt32 DHEOFFACDEK; // 0x30
		::System::Int32 OHOGFBCFFFN; // 0x34
		::System::Boolean GNMAAGAIFPC; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NOLOGOCDLLO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NOLOGOCDLLO*))((::PBYTE)hIl2Cpp + GHFECOBDDLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFECOBDDLB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFECOBDDLB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JBJBMDKIJPH(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GHFECOBDDLB_JBJBMDKIJPH_OFFSET))(this, a1, a2, a3);
		}

		::GBHFOGMDJPF* KJBLCICJNBF()
		{
			return ((::GBHFOGMDJPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFECOBDDLB_KJBLCICJNBF_OFFSET))(this);
		}

		::System::Void GDIIPHEEEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFECOBDDLB_GDIIPHEEEBK_OFFSET))(this);
		}

	};
