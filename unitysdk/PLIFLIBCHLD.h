#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGLIMCBGLAJ.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLIFLIBCHLD_CCTOR_OFFSET UNITYSDK_OFFSET(0xC307A80)
#define PLIFLIBCHLD_EMFLEFPLHPG_OFFSET UNITYSDK_OFFSET(0xC3075B0)
#define PLIFLIBCHLD_KPOMNGAPPBJ_OFFSET UNITYSDK_OFFSET(0xC3074F0)
#define PLIFLIBCHLD_OFJKCPKFEAG_OFFSET UNITYSDK_OFFSET(0xC307830)
#define PLIFLIBCHLD_PKMPFMAADGP_OFFSET UNITYSDK_OFFSET(0xC307920)

inline static constexpr unsigned int PLIFLIBCHLD_TypeDefinitionIndex = 64196;

	class PLIFLIBCHLD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::BGLIMCBGLAJ, ::RPG::GameCore::ActivityRank>** StaticGet_DGNKOGPBGAN()
		{
			return (::System::Collections::Generic::Dictionary_2<::BGLIMCBGLAJ, ::RPG::GameCore::ActivityRank>**)UnitySDK::FromName("", "PLIFLIBCHLD")->GetStaticField(0x6FE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLIFLIBCHLD_CCTOR_OFFSET))();
		}

		static ::System::Boolean KPOMNGAPPBJ()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLIFLIBCHLD_KPOMNGAPPBJ_OFFSET))();
		}

		static ::System::Boolean EMFLEFPLHPG()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLIFLIBCHLD_EMFLEFPLHPG_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRank OFJKCPKFEAG(::BGLIMCBGLAJ a1)
		{
			return ((::RPG::GameCore::ActivityRank(*)(::BGLIMCBGLAJ))((::PBYTE)hIl2Cpp + PLIFLIBCHLD_OFJKCPKFEAG_OFFSET))(a1);
		}

		static ::BGLIMCBGLAJ PKMPFMAADGP(::RPG::GameCore::ActivityRank a1)
		{
			return ((::BGLIMCBGLAJ(*)(::RPG::GameCore::ActivityRank))((::PBYTE)hIl2Cpp + PLIFLIBCHLD_PKMPFMAADGP_OFFSET))(a1);
		}

	};
