#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AACJBNFGABA;
class HFGBCEKGFHK;
class NLNFLEDEKGM;
namespace RPG::Client { class RogueBuffEnhanceItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHEKNAEPBJH_CTOR_OFFSET UNITYSDK_OFFSET(0xCC93110)
#define CHEKNAEPBJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC93130)
#define CHEKNAEPBJH_GET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0xCC93850)
#define CHEKNAEPBJH_GKOPHCDLOEN_OFFSET UNITYSDK_OFFSET(0xCC93770)
#define CHEKNAEPBJH_OKKEBMDNPAO_1_OFFSET UNITYSDK_OFFSET(0xCC934E0)
#define CHEKNAEPBJH_OKKEBMDNPAO_OFFSET UNITYSDK_OFFSET(0xCC93250)
#define CHEKNAEPBJH_SET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0xCC93860)

inline static constexpr unsigned int CHEKNAEPBJH_TypeDefinitionIndex = 67193;

	class CHEKNAEPBJH : public ::System::Object
	{
	public:
		::NLNFLEDEKGM* _AchivedBuffs_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueBuffEnhanceItem*>* MKFCIGNBOOB; // 0x18
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
