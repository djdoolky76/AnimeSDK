#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
namespace RPG::GameCore { class RtDamageConstConfig; }

#define CMJBLLIHDKP_CCTOR_OFFSET UNITYSDK_OFFSET(0xE3763F0)
#define CMJBLLIHDKP_CECDGBPNKBF_OFFSET UNITYSDK_OFFSET(0xE3763A0)
#define CMJBLLIHDKP_CTOR_OFFSET UNITYSDK_OFFSET(0xE3764B0)
#define CMJBLLIHDKP_JJFCCMHDDAB_OFFSET UNITYSDK_OFFSET(0xE376160)
#define CMJBLLIHDKP_NPLKFONPJKJ_OFFSET UNITYSDK_OFFSET(0xE3760E0)
#define CMJBLLIHDKP_PGPFKCNDAEG_OFFSET UNITYSDK_OFFSET(0xE376430)

inline static constexpr unsigned int CMJBLLIHDKP_TypeDefinitionIndex = 55363;

	class CMJBLLIHDKP
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DNEIEIHPAIF; // 0x38
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMJBLLIHDKP_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJBLLIHDKP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint NPLKFONPJKJ(::RPG::GameCore::RtAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CMJBLLIHDKP_NPLKFONPJKJ_OFFSET))(this, a1);
		}

		::System::Void JJFCCMHDDAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJBLLIHDKP_JJFCCMHDDAB_OFFSET))(this);
		}

		::System::Void CECDGBPNKBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJBLLIHDKP_CECDGBPNKBF_OFFSET))(this);
		}

		static ::System::Void PGPFKCNDAEG(::RPG::GameCore::RtDamageConstConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + CMJBLLIHDKP_PGPFKCNDAEG_OFFSET))(a1);
		}

	};
