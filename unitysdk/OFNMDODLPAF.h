#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LHHCCNFEGGD;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFNMDODLPAF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D23DBA0)
#define OFNMDODLPAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D23E170)
#define OFNMDODLPAF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D23DD10)
#define OFNMDODLPAF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D23D610)
#define OFNMDODLPAF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D23D8A0)
#define OFNMDODLPAF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D23DDB0)
#define OFNMDODLPAF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D23DE00)
#define OFNMDODLPAF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D23DBE0)
#define OFNMDODLPAF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D23D840)
#define OFNMDODLPAF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D23DA10)
#define OFNMDODLPAF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D23DC70)
#define OFNMDODLPAF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D23D590)

inline static constexpr unsigned int OFNMDODLPAF_TypeDefinitionIndex = 14444;

	class OFNMDODLPAF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OFNMDODLPAF")->GetStaticField(0x458C0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OFNMDODLPAF")->GetStaticField(0x458C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LHHCCNFEGGD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LHHCCNFEGGD*>**)UnitySDK::FromName("", "OFNMDODLPAF")->GetStaticField(0x458D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OFNMDODLPAF")->GetStaticField(0x10640);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OFNMDODLPAF")->GetStaticField(0x10641);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFNMDODLPAF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LHHCCNFEGGD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LHHCCNFEGGD*>*(*)())((::PBYTE)hIl2Cpp + OFNMDODLPAF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFNMDODLPAF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LHHCCNFEGGD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LHHCCNFEGGD*>(*)())((::PBYTE)hIl2Cpp + OFNMDODLPAF_FPHGMAMDFHE_OFFSET))();
		}

		static ::LHHCCNFEGGD* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LHHCCNFEGGD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OFNMDODLPAF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFNMDODLPAF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFNMDODLPAF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFNMDODLPAF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OFNMDODLPAF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFNMDODLPAF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OFNMDODLPAF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LHHCCNFEGGD* a1)
		{
			return ((::System::Void(*)(::LHHCCNFEGGD*))((::PBYTE)hIl2Cpp + OFNMDODLPAF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
