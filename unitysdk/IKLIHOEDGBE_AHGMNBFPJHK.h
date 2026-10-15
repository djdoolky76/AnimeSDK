#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class ColorGradingMaskWhitelist_StoryCharacter; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKLIHOEDGBE_AHGMNBFPJHK_CTOR_OFFSET UNITYSDK_OFFSET(0x16496AD0)
#define IKLIHOEDGBE_AHGMNBFPJHK_GET_EFFECTSET_OFFSET UNITYSDK_OFFSET(0x16499810)
#define IKLIHOEDGBE_AHGMNBFPJHK_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x164997F0)
#define IKLIHOEDGBE_AHGMNBFPJHK_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x16499820)
#define IKLIHOEDGBE_AHGMNBFPJHK_GLIEEBOHHGN_OFFSET UNITYSDK_OFFSET(0x16499860)
#define IKLIHOEDGBE_AHGMNBFPJHK_JJCONIFJPHO_OFFSET UNITYSDK_OFFSET(0x16499840)
#define IKLIHOEDGBE_AHGMNBFPJHK_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x16499800)
#define IKLIHOEDGBE_AHGMNBFPJHK_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x16499830)

inline static constexpr unsigned int IKLIHOEDGBE_AHGMNBFPJHK_TypeDefinitionIndex = 60710;

	class IKLIHOEDGBE_AHGMNBFPJHK : public ::System::Object
	{
	public:
		::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* IPMPNPPGHCP; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* _EffectSet_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x20
		::System::Single _FadeProgress_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_AHGMNBFPJHK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_AHGMNBFPJHK_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_AHGMNBFPJHK_SET_ENTITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* get_EffectSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_AHGMNBFPJHK_GET_EFFECTSET_OFFSET))(this);
		}

		::System::Single get_FadeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_AHGMNBFPJHK_GET_FADEPROGRESS_OFFSET))(this);
		}

		::System::Void set_FadeProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_AHGMNBFPJHK_SET_FADEPROGRESS_OFFSET))(this, a1);
		}

		::System::Single JJCONIFJPHO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_AHGMNBFPJHK_JJCONIFJPHO_OFFSET))(this);
		}

		::System::Void GLIEEBOHHGN(::System::Collections::Generic::List_1<::DEBEAKKOHLN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DEBEAKKOHLN*>*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_AHGMNBFPJHK_GLIEEBOHHGN_OFFSET))(this, a1);
		}

	};
