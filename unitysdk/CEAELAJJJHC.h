#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState.h"
class AIFHJBBDKDC;
class DEOOCBMMENB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CEAELAJJJHC_CTOR_OFFSET UNITYSDK_OFFSET(0xC776A10)
#define CEAELAJJJHC_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC7761B0)
#define CEAELAJJJHC_OIEOMLKFHGN_OFFSET UNITYSDK_OFFSET(0xC776830)

inline static constexpr unsigned int CEAELAJJJHC_TypeDefinitionIndex = 62046;

	class CEAELAJJJHC : public ::BFLILCJMKDB
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* NHJLHHCJKEL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAELAJJJHC_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + CEAELAJJJHC_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

		::System::Void OIEOMLKFHGN(::AIFHJBBDKDC* a1, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + CEAELAJJJHC_OIEOMLKFHGN_OFFSET))(this, a1, a2);
		}

	};
