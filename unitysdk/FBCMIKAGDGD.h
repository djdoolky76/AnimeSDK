#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapEntranceUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBCMIKAGDGD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD9B450)
#define FBCMIKAGDGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD9B9D0)
#define FBCMIKAGDGD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD9B5C0)
#define FBCMIKAGDGD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD9AF00)
#define FBCMIKAGDGD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD9B190)
#define FBCMIKAGDGD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD9B660)
#define FBCMIKAGDGD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD9B6B0)
#define FBCMIKAGDGD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD9B490)
#define FBCMIKAGDGD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD9B130)
#define FBCMIKAGDGD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD9B2C0)
#define FBCMIKAGDGD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD9B520)
#define FBCMIKAGDGD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD9AE80)

inline static constexpr unsigned int FBCMIKAGDGD_TypeDefinitionIndex = 14067;

	class FBCMIKAGDGD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FBCMIKAGDGD")->GetStaticField(0xF290);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FBCMIKAGDGD")->GetStaticField(0xF298);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>**)UnitySDK::FromName("", "FBCMIKAGDGD")->GetStaticField(0xF2A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FBCMIKAGDGD")->GetStaticField(0x31B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FBCMIKAGDGD")->GetStaticField(0x31B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCMIKAGDGD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + FBCMIKAGDGD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBCMIKAGDGD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>(*)())((::PBYTE)hIl2Cpp + FBCMIKAGDGD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MapEntranceUnlockRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MapEntranceUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FBCMIKAGDGD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBCMIKAGDGD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCMIKAGDGD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCMIKAGDGD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FBCMIKAGDGD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBCMIKAGDGD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FBCMIKAGDGD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MapEntranceUnlockRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapEntranceUnlockRow*))((::PBYTE)hIl2Cpp + FBCMIKAGDGD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
