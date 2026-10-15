#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPEIDJEOAEO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0FBE90)
#define LPEIDJEOAEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0FC490)
#define LPEIDJEOAEO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0FC000)
#define LPEIDJEOAEO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0FB8C0)
#define LPEIDJEOAEO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0FBB50)
#define LPEIDJEOAEO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0FC0A0)
#define LPEIDJEOAEO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0FC0F0)
#define LPEIDJEOAEO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0FBED0)
#define LPEIDJEOAEO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0FBAF0)
#define LPEIDJEOAEO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0FBCC0)
#define LPEIDJEOAEO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0FBF60)
#define LPEIDJEOAEO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0FB840)

inline static constexpr unsigned int LPEIDJEOAEO_TypeDefinitionIndex = 13642;

	class LPEIDJEOAEO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>**)UnitySDK::FromName("", "LPEIDJEOAEO")->GetStaticField(0x3FC20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LPEIDJEOAEO")->GetStaticField(0x3FC28);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LPEIDJEOAEO")->GetStaticField(0x3FC30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LPEIDJEOAEO")->GetStaticField(0xF130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LPEIDJEOAEO")->GetStaticField(0xF131);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPEIDJEOAEO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LPEIDJEOAEO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPEIDJEOAEO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>(*)())((::PBYTE)hIl2Cpp + LPEIDJEOAEO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LPEIDJEOAEO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPEIDJEOAEO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPEIDJEOAEO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPEIDJEOAEO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LPEIDJEOAEO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPEIDJEOAEO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LPEIDJEOAEO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*))((::PBYTE)hIl2Cpp + LPEIDJEOAEO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
