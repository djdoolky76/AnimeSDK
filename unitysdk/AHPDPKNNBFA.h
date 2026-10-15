#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
class NGFHCJIAOLH;
class OLDALHKKOJK;
namespace RPG::GameCore { class TaskContext; }

#define AHPDPKNNBFA_ACHBGHNPION_OFFSET UNITYSDK_OFFSET(0xEB8A910)
#define AHPDPKNNBFA_AIOHFCHCFGD_OFFSET UNITYSDK_OFFSET(0xEB8B1C0)
#define AHPDPKNNBFA_BLLMEPDKCBM_OFFSET UNITYSDK_OFFSET(0xEB8A760)
#define AHPDPKNNBFA_BNHPLMOHCJF_OFFSET UNITYSDK_OFFSET(0xEB8AD40)
#define AHPDPKNNBFA_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8A4B0)
#define AHPDPKNNBFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB8AA60)
#define AHPDPKNNBFA_FCGFAMKABOG_OFFSET UNITYSDK_OFFSET(0xEB8B760)
#define AHPDPKNNBFA_FDKCCJNJBML_OFFSET UNITYSDK_OFFSET(0xEB8A860)
#define AHPDPKNNBFA_JHLFAAFGMMI_OFFSET UNITYSDK_OFFSET(0xEB8B9D0)
#define AHPDPKNNBFA_LBNAMFKJBHP_OFFSET UNITYSDK_OFFSET(0xEB8B4D0)
#define AHPDPKNNBFA_NJPCLELIKCN_OFFSET UNITYSDK_OFFSET(0xEB8BE50)
#define AHPDPKNNBFA_OBLHKDGHNIN_OFFSET UNITYSDK_OFFSET(0xEB8AAB0)
#define AHPDPKNNBFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB8A530)

	class AHPDPKNNBFA
	{
	public:
		::NGFHCJIAOLH* NFJGMKPFPOC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OLDALHKKOJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OLDALHKKOJK*))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_DISPOSE_OFFSET))(this);
		}

		::System::Single BLLMEPDKCBM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_BLLMEPDKCBM_OFFSET))(this);
		}

		::System::Single OBLHKDGHNIN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_OBLHKDGHNIN_OFFSET))(this);
		}

		::System::Single BNHPLMOHCJF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_BNHPLMOHCJF_OFFSET))(this);
		}

		::System::Single FDKCCJNJBML()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_FDKCCJNJBML_OFFSET))(this);
		}

		::System::Single FCGFAMKABOG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_FCGFAMKABOG_OFFSET))(this);
		}

		::System::Single JHLFAAFGMMI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_JHLFAAFGMMI_OFFSET))(this);
		}

		::System::Single ACHBGHNPION()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_ACHBGHNPION_OFFSET))(this);
		}

		::System::Int32 LBNAMFKJBHP(::RPG::GameCore::ChenLingFesItemFilterType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemFilterType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_LBNAMFKJBHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Single AIOHFCHCFGD(::RPG::GameCore::ChenLingFesItemFilterType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemFilterType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_AIOHFCHCFGD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NJPCLELIKCN(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesItemFilterType a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesItemFilterType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AHPDPKNNBFA_NJPCLELIKCN_OFFSET))(this, a1, a2, a3, a4);
		}

	};
