#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityAvatarDeliverRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGPICBIPEDP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D13B720)
#define MGPICBIPEDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D13BCF0)
#define MGPICBIPEDP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D13B890)
#define MGPICBIPEDP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D13B190)
#define MGPICBIPEDP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D13B420)
#define MGPICBIPEDP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D13B930)
#define MGPICBIPEDP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D13B980)
#define MGPICBIPEDP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D13B760)
#define MGPICBIPEDP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D13B3C0)
#define MGPICBIPEDP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D13B590)
#define MGPICBIPEDP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D13B7F0)
#define MGPICBIPEDP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D13B110)

inline static constexpr unsigned int MGPICBIPEDP_TypeDefinitionIndex = 10943;

	class MGPICBIPEDP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>**)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x44730);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x44738);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x44740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x102E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x102E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>*(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityAvatarDeliverRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityAvatarDeliverRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MGPICBIPEDP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MGPICBIPEDP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGPICBIPEDP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MGPICBIPEDP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityAvatarDeliverRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityAvatarDeliverRow*))((::PBYTE)hIl2Cpp + MGPICBIPEDP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
