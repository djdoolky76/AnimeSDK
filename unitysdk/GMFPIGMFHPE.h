#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/Emo2DAtlasConfig.h"
namespace RPG::Client { class MonoEmo2DAtlas; }
namespace RPG::GameCore { class GameEntity; }

#define GMFPIGMFHPE_CTOR_OFFSET UNITYSDK_OFFSET(0x15AC3690)
#define GMFPIGMFHPE_FODDEDIAFEG_1_OFFSET UNITYSDK_OFFSET(0x15AC34F0)
#define GMFPIGMFHPE_FODDEDIAFEG_OFFSET UNITYSDK_OFFSET(0x15AC3140)
#define GMFPIGMFHPE_GLAHAKINHNN_OFFSET UNITYSDK_OFFSET(0x15AC2820)
#define GMFPIGMFHPE_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x15AC3190)
#define GMFPIGMFHPE_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15AC33C0)
#define GMFPIGMFHPE_IBDKGFAJCJB_OFFSET UNITYSDK_OFFSET(0x15AC3290)
#define GMFPIGMFHPE_INDLOPPCCMP_OFFSET UNITYSDK_OFFSET(0x15AC3040)
#define GMFPIGMFHPE_IOLDOBCFAAP_OFFSET UNITYSDK_OFFSET(0x15AC3430)
#define GMFPIGMFHPE_LIMHDCACOEB_OFFSET UNITYSDK_OFFSET(0x15AC2720)
#define GMFPIGMFHPE_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x15AC2FF0)
#define GMFPIGMFHPE_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x15AC26D0)

inline static constexpr unsigned int GMFPIGMFHPE_TypeDefinitionIndex = 71136;

	class GMFPIGMFHPE : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::Emo2DAtlasConfig IBBNLJABOAP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_CTOR_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void FODDEDIAFEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_FODDEDIAFEG_OFFSET))(this);
		}

		::System::Void LIMHDCACOEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_LIMHDCACOEB_OFFSET))(this);
		}

		::System::Void INDLOPPCCMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_INDLOPPCCMP_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Boolean IBDKGFAJCJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_IBDKGFAJCJB_OFFSET))(this);
		}

		::System::Void GLAHAKINHNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_GLAHAKINHNN_OFFSET))(this);
		}

		::System::Int32 IOLDOBCFAAP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_IOLDOBCFAAP_OFFSET))(this);
		}

		static ::System::Void FODDEDIAFEG_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_FODDEDIAFEG_1_OFFSET))(a1);
		}

		::RPG::Client::MonoEmo2DAtlas* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEmo2DAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFPIGMFHPE_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
