#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AACJBNFGABA;
class HFGBCEKGFHK;
class NLNFLEDEKGM;
namespace RPG::Client { class RogueBuffEnhanceItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHEKNAEPBJH_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8DDC0)
#define CHEKNAEPBJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC8DDE0)
#define CHEKNAEPBJH_GET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0xCC8E500)
#define CHEKNAEPBJH_GKOPHCDLOEN_OFFSET UNITYSDK_OFFSET(0xCC8E420)
#define CHEKNAEPBJH_OKKEBMDNPAO_1_OFFSET UNITYSDK_OFFSET(0xCC8E190)
#define CHEKNAEPBJH_OKKEBMDNPAO_OFFSET UNITYSDK_OFFSET(0xCC8DF00)
#define CHEKNAEPBJH_SET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0xCC8E510)

inline static constexpr unsigned int CHEKNAEPBJH_TypeDefinitionIndex = 67193;

	class CHEKNAEPBJH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueBuffEnhanceItem*>* MKFCIGNBOOB; // 0x10
		::NLNFLEDEKGM* _AchivedBuffs_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKNAEPBJH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKNAEPBJH_DISPOSE_OFFSET))(this);
		}

		::System::Void OKKEBMDNPAO(::HFGBCEKGFHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGBCEKGFHK*))((::PBYTE)hIl2Cpp + CHEKNAEPBJH_OKKEBMDNPAO_OFFSET))(this, a1);
		}

		::System::Void OKKEBMDNPAO_1(::AACJBNFGABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AACJBNFGABA*))((::PBYTE)hIl2Cpp + CHEKNAEPBJH_OKKEBMDNPAO_1_OFFSET))(this, a1);
		}

		::RPG::Client::RogueBuffEnhanceItem* GKOPHCDLOEN(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueBuffEnhanceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHEKNAEPBJH_GKOPHCDLOEN_OFFSET))(this, a1);
		}

		::NLNFLEDEKGM* get_AchivedBuffs()
		{
			return ((::NLNFLEDEKGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKNAEPBJH_GET_ACHIVEDBUFFS_OFFSET))(this);
		}

		::System::Void set_AchivedBuffs(::NLNFLEDEKGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLNFLEDEKGM*))((::PBYTE)hIl2Cpp + CHEKNAEPBJH_SET_ACHIVEDBUFFS_OFFSET))(this, a1);
		}

	};
