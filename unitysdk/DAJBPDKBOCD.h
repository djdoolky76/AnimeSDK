#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDemoModuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAJBPDKBOCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCC9820)
#define DAJBPDKBOCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCC9DA0)
#define DAJBPDKBOCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCC9990)
#define DAJBPDKBOCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCC92D0)
#define DAJBPDKBOCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCC9560)
#define DAJBPDKBOCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCC9A30)
#define DAJBPDKBOCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCC9A80)
#define DAJBPDKBOCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCC9860)
#define DAJBPDKBOCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCC9500)
#define DAJBPDKBOCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCC9690)
#define DAJBPDKBOCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCC98F0)
#define DAJBPDKBOCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCC9250)

inline static constexpr unsigned int DAJBPDKBOCD_TypeDefinitionIndex = 12776;

	class DAJBPDKBOCD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>**)UnitySDK::FromName("", "DAJBPDKBOCD")->GetStaticField(0x46990);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DAJBPDKBOCD")->GetStaticField(0x46998);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DAJBPDKBOCD")->GetStaticField(0x469A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DAJBPDKBOCD")->GetStaticField(0x10D40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DAJBPDKBOCD")->GetStaticField(0x10D41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAJBPDKBOCD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DAJBPDKBOCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAJBPDKBOCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + DAJBPDKBOCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarDemoModuleConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarDemoModuleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DAJBPDKBOCD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAJBPDKBOCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAJBPDKBOCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAJBPDKBOCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DAJBPDKBOCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAJBPDKBOCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DAJBPDKBOCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarDemoModuleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarDemoModuleConfigRow*))((::PBYTE)hIl2Cpp + DAJBPDKBOCD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
