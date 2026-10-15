#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyEventBgConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKLKBMPPKOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD39380)
#define DKLKBMPPKOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD39F60)
#define DKLKBMPPKOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD39720)
#define DKLKBMPPKOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD393C0)
#define DKLKBMPPKOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD39C60)
#define DKLKBMPPKOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD397C0)
#define DKLKBMPPKOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD39810)
#define DKLKBMPPKOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD395F0)
#define DKLKBMPPKOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD39C00)
#define DKLKBMPPKOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD39DD0)
#define DKLKBMPPKOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD39680)
#define DKLKBMPPKOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD39B80)

inline static constexpr unsigned int DKLKBMPPKOM_TypeDefinitionIndex = 15351;

	class DKLKBMPPKOM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>**)UnitySDK::FromName("", "DKLKBMPPKOM")->GetStaticField(0x4FD20);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DKLKBMPPKOM")->GetStaticField(0x4FD28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DKLKBMPPKOM")->GetStaticField(0x4FD30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DKLKBMPPKOM")->GetStaticField(0x12030);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DKLKBMPPKOM")->GetStaticField(0x12031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKLKBMPPKOM_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKLKBMPPKOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKLKBMPPKOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKLKBMPPKOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DKLKBMPPKOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKLKBMPPKOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DKLKBMPPKOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyEventBgConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyEventBgConfigRow*))((::PBYTE)hIl2Cpp + DKLKBMPPKOM_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DKLKBMPPKOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKLKBMPPKOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>(*)())((::PBYTE)hIl2Cpp + DKLKBMPPKOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyEventBgConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyEventBgConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DKLKBMPPKOM_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
