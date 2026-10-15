#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPICNGFLLCA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FGMHNMKDFMA;
class KFELGAIGHAP;
class MNBNFBAMKKI;
class OJBMEJCOGID;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class RtAbilityConfig; }
namespace System { template <typename T> class Action_1; }

#define FGMHNMKDFMA_AIBLKCJHCCC_OFFSET UNITYSDK_OFFSET(0x1575EBE0)
#define FGMHNMKDFMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1575E9E0)
#define FGMHNMKDFMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1575EAE0)
#define FGMHNMKDFMA_FPILBDDABED_OFFSET UNITYSDK_OFFSET(0x1575F220)
#define FGMHNMKDFMA_GAFNJBKMFLC_OFFSET UNITYSDK_OFFSET(0x1575F240)
#define FGMHNMKDFMA_GDLOLCKLPLO_OFFSET UNITYSDK_OFFSET(0x1575F0B0)
#define FGMHNMKDFMA_IBHFEFJHGEB_OFFSET UNITYSDK_OFFSET(0x1575ED80)
#define FGMHNMKDFMA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1575EFC0)
#define FGMHNMKDFMA_LNIMDPPAHJO_OFFSET UNITYSDK_OFFSET(0x1575EC90)
#define FGMHNMKDFMA_PLGLOAANAFM_OFFSET UNITYSDK_OFFSET(0x1575F230)

inline static constexpr unsigned int FGMHNMKDFMA_TypeDefinitionIndex = 53775;

	class FGMHNMKDFMA : public ::HPICNGFLLCA
	{
	public:
		::MNBNFBAMKKI* FGPFEPMDIJJ; // 0x90
		::System::Action_1<::FGMHNMKDFMA*>* DMDFMAJACHI; // 0x98
		::OJBMEJCOGID* LNLOEIICNMO; // 0xA0
		::KFELGAIGHAP* CKOEPEAPNAC; // 0xA8
		::RPG::GameCore::RtAbilityConfig* EABKOHGCHFP; // 0xB0
		::System::Action_1<::FGMHNMKDFMA*>* BDGNIIHBGDD; // 0xB8
		::RPG::GameCore::FixPoint CMMOELKNAKK; // 0xC0
		::System::Boolean EMODOHCJFCD; // 0xC8
		::System::Boolean BCAAEMLPLML; // 0xC9
		::System::Byte _padding0[0x6];
		::RPG::GameCore::FixPoint EHMBINDHOEI; // 0xD0
		// static const ::System::String* NLPFFBDADEK; // 0x0
		::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::RtAbilityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::RtAbilityConfig*))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_DISPOSE_OFFSET))(this);
		}

		::System::Void AIBLKCJHCCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_AIBLKCJHCCC_OFFSET))(this);
		}

		::System::Void LNIMDPPAHJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_LNIMDPPAHJO_OFFSET))(this);
		}

		::System::Void IBHFEFJHGEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_IBHFEFJHGEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::MNBNFBAMKKI* GDLOLCKLPLO(::System::Boolean a1)
		{
			return ((::MNBNFBAMKKI*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_GDLOLCKLPLO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint FPILBDDABED()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_FPILBDDABED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint PLGLOAANAFM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_PLGLOAANAFM_OFFSET))(this);
		}

		::System::Void GAFNJBKMFLC(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FGMHNMKDFMA_GAFNJBKMFLC_OFFSET))(this, a1);
		}

	};
