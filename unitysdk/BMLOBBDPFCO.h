#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BMLOBBDPFCO;
class FCOEMCEDLNL;
class NILMOLIGDGM;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define BMLOBBDPFCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBABFB0)
#define BMLOBBDPFCO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBABFF0)
#define BMLOBBDPFCO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBABF50)

inline static constexpr unsigned int BMLOBBDPFCO_TypeDefinitionIndex = 24107;

	class BMLOBBDPFCO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* OFBPKCNCGFG; // 0x20
		::System::String* GFNAPNFFGPJ; // 0x28
		::NILMOLIGDGM* EABKOHGCHFP; // 0x30
		::System::Boolean EKGDOELGLFK; // 0x38
		::System::Boolean CAGCHKJHMPD; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLOBBDPFCO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BMLOBBDPFCO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMLOBBDPFCO*))((::PBYTE)hIl2Cpp + BMLOBBDPFCO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BMLOBBDPFCO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMLOBBDPFCO*))((::PBYTE)hIl2Cpp + BMLOBBDPFCO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
