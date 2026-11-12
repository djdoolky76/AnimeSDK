#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_MapEntity.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKLIHOEDGBE_FLDICDMMIGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1746B3C0)
#define IKLIHOEDGBE_FLDICDMMIGD_GET_EFFECTSET_OFFSET UNITYSDK_OFFSET(0x1746D760)
#define IKLIHOEDGBE_FLDICDMMIGD_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1746D740)
#define IKLIHOEDGBE_FLDICDMMIGD_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1746D770)
#define IKLIHOEDGBE_FLDICDMMIGD_GLIEEBOHHGN_OFFSET UNITYSDK_OFFSET(0x1746D7E0)
#define IKLIHOEDGBE_FLDICDMMIGD_JJCONIFJPHO_OFFSET UNITYSDK_OFFSET(0x1746D790)
#define IKLIHOEDGBE_FLDICDMMIGD_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1746D750)
#define IKLIHOEDGBE_FLDICDMMIGD_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1746D780)

inline static constexpr unsigned int IKLIHOEDGBE_FLDICDMMIGD_TypeDefinitionIndex = 62090;

	class IKLIHOEDGBE_FLDICDMMIGD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* _EffectSet_k__BackingField; // 0x18
		::System::Single _FadeProgress_k__BackingField; // 0x20
		::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity IPMPNPPGHCP; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FLDICDMMIGD_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FLDICDMMIGD_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FLDICDMMIGD_SET_ENTITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* get_EffectSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FLDICDMMIGD_GET_EFFECTSET_OFFSET))(this);
		}

		::System::Single get_FadeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FLDICDMMIGD_GET_FADEPROGRESS_OFFSET))(this);
		}

		::System::Void set_FadeProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FLDICDMMIGD_SET_FADEPROGRESS_OFFSET))(this, a1);
		}

		::System::Single JJCONIFJPHO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FLDICDMMIGD_JJCONIFJPHO_OFFSET))(this);
		}

		::System::Void GLIEEBOHHGN(::System::Collections::Generic::List_1<::DEBEAKKOHLN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DEBEAKKOHLN*>*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FLDICDMMIGD_GLIEEBOHHGN_OFFSET))(this, a1);
		}

	};
