#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSetBonusValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDPOCIGBKAN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D14D740)
#define MDPOCIGBKAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D14DD10)
#define MDPOCIGBKAN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D14D8B0)
#define MDPOCIGBKAN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D14D1B0)
#define MDPOCIGBKAN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D14D440)
#define MDPOCIGBKAN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D14D950)
#define MDPOCIGBKAN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D14D9A0)
#define MDPOCIGBKAN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D14D780)
#define MDPOCIGBKAN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D14D3E0)
#define MDPOCIGBKAN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D14D5B0)
#define MDPOCIGBKAN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D14D810)
#define MDPOCIGBKAN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D14D130)

inline static constexpr unsigned int MDPOCIGBKAN_TypeDefinitionIndex = 10886;

	class MDPOCIGBKAN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MDPOCIGBKAN")->GetStaticField(0x49610);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MDPOCIGBKAN")->GetStaticField(0x49618);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>**)UnitySDK::FromName("", "MDPOCIGBKAN")->GetStaticField(0x49620);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MDPOCIGBKAN")->GetStaticField(0x11360);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MDPOCIGBKAN")->GetStaticField(0x11361);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDPOCIGBKAN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>*(*)())((::PBYTE)hIl2Cpp + MDPOCIGBKAN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDPOCIGBKAN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>(*)())((::PBYTE)hIl2Cpp + MDPOCIGBKAN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RelicSetBonusValueRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RelicSetBonusValueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDPOCIGBKAN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDPOCIGBKAN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDPOCIGBKAN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDPOCIGBKAN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MDPOCIGBKAN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDPOCIGBKAN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MDPOCIGBKAN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RelicSetBonusValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicSetBonusValueRow*))((::PBYTE)hIl2Cpp + MDPOCIGBKAN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
