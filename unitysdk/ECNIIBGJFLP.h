#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerPersonalCardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECNIIBGJFLP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD6DD30)
#define ECNIIBGJFLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD6E300)
#define ECNIIBGJFLP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD6DEA0)
#define ECNIIBGJFLP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD6D7A0)
#define ECNIIBGJFLP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD6DA30)
#define ECNIIBGJFLP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD6DF40)
#define ECNIIBGJFLP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD6DF90)
#define ECNIIBGJFLP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD6DD70)
#define ECNIIBGJFLP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD6D9D0)
#define ECNIIBGJFLP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD6DBA0)
#define ECNIIBGJFLP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD6DE00)
#define ECNIIBGJFLP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD6D720)

inline static constexpr unsigned int ECNIIBGJFLP_TypeDefinitionIndex = 14499;

	class ECNIIBGJFLP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerPersonalCardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerPersonalCardRow*>**)UnitySDK::FromName("", "ECNIIBGJFLP")->GetStaticField(0x537D0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ECNIIBGJFLP")->GetStaticField(0x537D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ECNIIBGJFLP")->GetStaticField(0x537E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ECNIIBGJFLP")->GetStaticField(0x12810);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ECNIIBGJFLP")->GetStaticField(0x12811);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNIIBGJFLP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerPersonalCardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerPersonalCardRow*>*(*)())((::PBYTE)hIl2Cpp + ECNIIBGJFLP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECNIIBGJFLP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerPersonalCardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerPersonalCardRow*>(*)())((::PBYTE)hIl2Cpp + ECNIIBGJFLP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerPersonalCardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerPersonalCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ECNIIBGJFLP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECNIIBGJFLP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNIIBGJFLP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNIIBGJFLP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ECNIIBGJFLP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ECNIIBGJFLP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ECNIIBGJFLP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerPersonalCardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerPersonalCardRow*))((::PBYTE)hIl2Cpp + ECNIIBGJFLP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
