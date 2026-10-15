#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFNBLLIDEON_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D162540)
#define MFNBLLIDEON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D162B10)
#define MFNBLLIDEON_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1626B0)
#define MFNBLLIDEON_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D161FB0)
#define MFNBLLIDEON_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D162240)
#define MFNBLLIDEON_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D162750)
#define MFNBLLIDEON_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1627A0)
#define MFNBLLIDEON_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D162580)
#define MFNBLLIDEON_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1621E0)
#define MFNBLLIDEON_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1623B0)
#define MFNBLLIDEON_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D162610)
#define MFNBLLIDEON_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D161F30)

inline static constexpr unsigned int MFNBLLIDEON_TypeDefinitionIndex = 13430;

	class MFNBLLIDEON : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MFNBLLIDEON")->GetStaticField(0x4AB40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MFNBLLIDEON")->GetStaticField(0x4AB48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>**)UnitySDK::FromName("", "MFNBLLIDEON")->GetStaticField(0x4AB50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MFNBLLIDEON")->GetStaticField(0x115D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MFNBLLIDEON")->GetStaticField(0x115D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFNBLLIDEON_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MFNBLLIDEON_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFNBLLIDEON_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>(*)())((::PBYTE)hIl2Cpp + MFNBLLIDEON_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightScoreRewardConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightScoreRewardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MFNBLLIDEON_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFNBLLIDEON_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFNBLLIDEON_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFNBLLIDEON_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MFNBLLIDEON_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MFNBLLIDEON_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MFNBLLIDEON_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + MFNBLLIDEON_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
