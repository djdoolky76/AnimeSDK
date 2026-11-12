#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BNFBKAKHFDL.h"
class OFIPFBKKBPL;
class PNNHBHDANDC;
namespace RPG::GameCore { class FiveDimSwitchPlatformConfig; }

#define HAOHHNKPNCP_AADKNPGJAPA_OFFSET UNITYSDK_OFFSET(0x1DC79150)
#define HAOHHNKPNCP_FIBEPGGCFFN_OFFSET UNITYSDK_OFFSET(0x1DC793B0)
#define HAOHHNKPNCP_HLKDEEMAJCJ_OFFSET UNITYSDK_OFFSET(0x1DC79240)
#define HAOHHNKPNCP_INNDIDIFCAC_OFFSET UNITYSDK_OFFSET(0x1DC79500)
#define HAOHHNKPNCP_MAHONBMLJMP_OFFSET UNITYSDK_OFFSET(0x1DC79650)

inline static constexpr unsigned int HAOHHNKPNCP_TypeDefinitionIndex = 43740;

	class HAOHHNKPNCP : public ::System::Object
	{
	public:
		static ::OFIPFBKKBPL* AADKNPGJAPA(::PNNHBHDANDC* a1)
		{
			return ((::OFIPFBKKBPL*(*)(::PNNHBHDANDC*))((::PBYTE)hIl2Cpp + HAOHHNKPNCP_AADKNPGJAPA_OFFSET))(a1);
		}

		static ::System::Boolean HLKDEEMAJCJ(::PNNHBHDANDC* a1)
		{
			return ((::System::Boolean(*)(::PNNHBHDANDC*))((::PBYTE)hIl2Cpp + HAOHHNKPNCP_HLKDEEMAJCJ_OFFSET))(a1);
		}

		static ::System::Void FIBEPGGCFFN(::PNNHBHDANDC* a1, ::RPG::GameCore::FiveDimSwitchPlatformConfig* a2, ::BNFBKAKHFDL a3)
		{
			return ((::System::Void(*)(::PNNHBHDANDC*, ::RPG::GameCore::FiveDimSwitchPlatformConfig*, ::BNFBKAKHFDL))((::PBYTE)hIl2Cpp + HAOHHNKPNCP_FIBEPGGCFFN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void INNDIDIFCAC(::PNNHBHDANDC* a1, ::RPG::GameCore::FiveDimSwitchPlatformConfig* a2, ::BNFBKAKHFDL a3)
		{
			return ((::System::Void(*)(::PNNHBHDANDC*, ::RPG::GameCore::FiveDimSwitchPlatformConfig*, ::BNFBKAKHFDL))((::PBYTE)hIl2Cpp + HAOHHNKPNCP_INNDIDIFCAC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MAHONBMLJMP(::PNNHBHDANDC* a1)
		{
			return ((::System::Void(*)(::PNNHBHDANDC*))((::PBYTE)hIl2Cpp + HAOHHNKPNCP_MAHONBMLJMP_OFFSET))(a1);
		}

	};
