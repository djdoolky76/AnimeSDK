#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"
class BKIBJOEMJLC;
namespace RPG::GameCore { class GridFightNodeTemplateConfigRow; }
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }

#define BKIBJOEMJLC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA58170)
#define BKIBJOEMJLC_DNNDEIHBACF_OFFSET UNITYSDK_OFFSET(0xBA58280)
#define BKIBJOEMJLC_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xBA58090)
#define BKIBJOEMJLC_KAPACICPONO_OFFSET UNITYSDK_OFFSET(0xBA58320)
#define BKIBJOEMJLC_LDHLGKKGJCJ_OFFSET UNITYSDK_OFFSET(0xBA58230)
#define BKIBJOEMJLC_MDKIONKAKON_OFFSET UNITYSDK_OFFSET(0xBA582D0)
#define BKIBJOEMJLC_PCFDPCLKMCM_OFFSET UNITYSDK_OFFSET(0xBA581E0)

	class BKIBJOEMJLC : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightStageRouteConfigRow* GJKNPHJJDGJ; // 0x10
		::RPG::GameCore::GridFightNodeTemplateConfigRow* PICBEJCAFHO; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::BKIBJOEMJLC* FLFLCMEJEPM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::BKIBJOEMJLC*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_FLFLCMEJEPM_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 PCFDPCLKMCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_PCFDPCLKMCM_OFFSET))(this);
		}

		::System::UInt32 LDHLGKKGJCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_LDHLGKKGJCJ_OFFSET))(this);
		}

		::System::UInt32 DNNDEIHBACF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_DNNDEIHBACF_OFFSET))(this);
		}

		::System::UInt32 MDKIONKAKON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_MDKIONKAKON_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodeType KAPACICPONO()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBJOEMJLC_KAPACICPONO_OFFSET))(this);
		}

	};
