#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/Emo2DAtlasConfig.h"
namespace RPG::Client { class MonoEmo2DAtlas; }
namespace RPG::GameCore { class GameEntity; }

#define GMFPIGMFHPE_CTOR_OFFSET UNITYSDK_OFFSET(0x16A51A00)
#define GMFPIGMFHPE_FODDEDIAFEG_1_OFFSET UNITYSDK_OFFSET(0x16A51860)
#define GMFPIGMFHPE_FODDEDIAFEG_OFFSET UNITYSDK_OFFSET(0x16A515B0)
#define GMFPIGMFHPE_GLAHAKINHNN_OFFSET UNITYSDK_OFFSET(0x16A50E20)
#define GMFPIGMFHPE_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x16A51600)
#define GMFPIGMFHPE_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x16A51770)
#define GMFPIGMFHPE_IBDKGFAJCJB_OFFSET UNITYSDK_OFFSET(0x16A516C0)
#define GMFPIGMFHPE_INDLOPPCCMP_OFFSET UNITYSDK_OFFSET(0x16A514E0)
#define GMFPIGMFHPE_IOLDOBCFAAP_OFFSET UNITYSDK_OFFSET(0x16A517C0)
#define GMFPIGMFHPE_LIMHDCACOEB_OFFSET UNITYSDK_OFFSET(0x16A50D50)
#define GMFPIGMFHPE_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x16A51490)
#define GMFPIGMFHPE_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x16A50D00)

inline static constexpr unsigned int GMFPIGMFHPE_TypeDefinitionIndex = 73119;

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
