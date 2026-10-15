#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleCharacterInfoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOCPANCACGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE72130)
#define GOCPANCACGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE726B0)
#define GOCPANCACGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE722A0)
#define GOCPANCACGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE71BC0)
#define GOCPANCACGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE71E50)
#define GOCPANCACGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE72340)
#define GOCPANCACGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE72390)
#define GOCPANCACGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE72170)
#define GOCPANCACGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE71DF0)
#define GOCPANCACGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE71FC0)
#define GOCPANCACGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE72200)
#define GOCPANCACGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE71B40)

inline static constexpr unsigned int GOCPANCACGA_TypeDefinitionIndex = 13302;

	class GOCPANCACGA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GOCPANCACGA")->GetStaticField(0x1A6B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GOCPANCACGA")->GetStaticField(0x1A6B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>**)UnitySDK::FromName("", "GOCPANCACGA")->GetStaticField(0x1A6C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GOCPANCACGA")->GetStaticField(0x6000);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GOCPANCACGA")->GetStaticField(0x6001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCPANCACGA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GOCPANCACGA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOCPANCACGA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>(*)())((::PBYTE)hIl2Cpp + GOCPANCACGA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FreeStyleCharacterInfoConfigRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::FreeStyleCharacterInfoConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + GOCPANCACGA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOCPANCACGA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCPANCACGA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCPANCACGA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GOCPANCACGA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOCPANCACGA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GOCPANCACGA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FreeStyleCharacterInfoConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FreeStyleCharacterInfoConfigRow*))((::PBYTE)hIl2Cpp + GOCPANCACGA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
