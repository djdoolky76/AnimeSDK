#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame { template <typename T> class GraphNavigationService_1; }

#define EFMBDPJPCCE_APCGKNBLMPE_OFFSET UNITYSDK_OFFSET(0x13A5B790)
#define EFMBDPJPCCE_BLNFMGMEJIF_OFFSET UNITYSDK_OFFSET(0x13A5B480)
#define EFMBDPJPCCE_CABBFHEOJOK_OFFSET UNITYSDK_OFFSET(0x13A5BAE0)
#define EFMBDPJPCCE_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5B090)
#define EFMBDPJPCCE_DCNLNGLDPOC_OFFSET UNITYSDK_OFFSET(0x13A5CCC0)
#define EFMBDPJPCCE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13A5B160)
#define EFMBDPJPCCE_GMOALJCEEKO_OFFSET UNITYSDK_OFFSET(0x13A5D280)
#define EFMBDPJPCCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13A5B120)
#define EFMBDPJPCCE_LLMMGNFJKFP_OFFSET UNITYSDK_OFFSET(0x13A5D180)

inline static constexpr unsigned int EFMBDPJPCCE_TypeDefinitionIndex = 77271;

	class EFMBDPJPCCE : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::BNLHGENFEHG* PDENFEFCAGN; // 0x18
		::RPG::Client::LittleGame::GraphNavigationService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* IPPNPHCOCAF; // 0x20
		::System::Single PJJLEJDPNHI; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + EFMBDPJPCCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMBDPJPCCE_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMBDPJPCCE_EXECUTE_OFFSET))(this);
		}

		::System::Boolean DCNLNGLDPOC(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + EFMBDPJPCCE_DCNLNGLDPOC_OFFSET))(this, a1);
		}

		::System::Void BLNFMGMEJIF(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + EFMBDPJPCCE_BLNFMGMEJIF_OFFSET))(this, a1);
		}

		::System::Void CABBFHEOJOK(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + EFMBDPJPCCE_CABBFHEOJOK_OFFSET))(this, a1);
		}

		::System::Void GMOALJCEEKO(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EFMBDPJPCCE_GMOALJCEEKO_OFFSET))(this, a1, a2);
		}

		::System::Void LLMMGNFJKFP(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFMBDPJPCCE_LLMMGNFJKFP_OFFSET))(this, a1, a2);
		}

		::System::Void APCGKNBLMPE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + EFMBDPJPCCE_APCGKNBLMPE_OFFSET))(this, a1);
		}

	};
