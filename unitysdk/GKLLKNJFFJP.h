#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexAIStrategy.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI;
namespace RPG::GameCore { class AIGlobalVarsConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKLLKNJFFJP_CCOOGGCHLIF_OFFSET UNITYSDK_OFFSET(0x15A96C30)
#define GKLLKNJFFJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A96670)
#define GKLLKNJFFJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A96890)
#define GKLLKNJFFJP_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x15A96740)
#define GKLLKNJFFJP_KAIGECJFNBF_OFFSET UNITYSDK_OFFSET(0x15A96920)
#define GKLLKNJFFJP_KBDCHPCIBOD_OFFSET UNITYSDK_OFFSET(0x15A96A20)
#define GKLLKNJFFJP_KLJEDJLGAOJ_OFFSET UNITYSDK_OFFSET(0x15A96B40)
#define GKLLKNJFFJP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A966F0)
#define GKLLKNJFFJP_NKIOHPJEGFH_OFFSET UNITYSDK_OFFSET(0x15A96C10)

inline static constexpr unsigned int GKLLKNJFFJP_TypeDefinitionIndex = 54332;

	class GKLLKNJFFJP : public ::System::Object
	{
	public:
		::RPG::GameCore::AIGlobalVarsConfig* FBDPOHAFNMF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* GKAMLONHMAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLLKNJFFJP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLLKNJFFJP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLLKNJFFJP_DISPOSE_OFFSET))(this);
		}

		::System::Boolean KAIGECJFNBF(::System::String* a1, ::RPG::GameCore::AIVariable* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + GKLLKNJFFJP_KAIGECJFNBF_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIVariable* KBDCHPCIBOD(::System::String* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GKLLKNJFFJP_KBDCHPCIBOD_OFFSET))(this, a1);
		}

		::RPG::GameCore::ComplexAIStrategy KLJEDJLGAOJ(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::ComplexAIStrategy(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + GKLLKNJFFJP_KLJEDJLGAOJ_OFFSET))(this, a1, a2);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLLKNJFFJP_IIFINBAGBDG_OFFSET))(this);
		}

		::ENEIHJJPNPI* CCOOGGCHLIF()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLLKNJFFJP_CCOOGGCHLIF_OFFSET))(this);
		}

		::System::String* NKIOHPJEGFH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLLKNJFFJP_NKIOHPJEGFH_OFFSET))(this);
		}

	};
