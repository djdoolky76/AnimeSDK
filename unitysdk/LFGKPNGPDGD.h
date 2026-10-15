#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SystemDefaultLanguageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFGKPNGPDGD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E7FC0)
#define LFGKPNGPDGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E8540)
#define LFGKPNGPDGD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E8130)
#define LFGKPNGPDGD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E7A50)
#define LFGKPNGPDGD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E7CE0)
#define LFGKPNGPDGD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E81D0)
#define LFGKPNGPDGD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E8220)
#define LFGKPNGPDGD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E8000)
#define LFGKPNGPDGD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E7C80)
#define LFGKPNGPDGD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E7E50)
#define LFGKPNGPDGD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E8090)
#define LFGKPNGPDGD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E79D0)

inline static constexpr unsigned int LFGKPNGPDGD_TypeDefinitionIndex = 12653;

	class LFGKPNGPDGD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SystemDefaultLanguageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SystemDefaultLanguageRow*>**)UnitySDK::FromName("", "LFGKPNGPDGD")->GetStaticField(0x3CA90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LFGKPNGPDGD")->GetStaticField(0x3CA98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LFGKPNGPDGD")->GetStaticField(0x3CAA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LFGKPNGPDGD")->GetStaticField(0xD000);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LFGKPNGPDGD")->GetStaticField(0xD001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFGKPNGPDGD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SystemDefaultLanguageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SystemDefaultLanguageRow*>*(*)())((::PBYTE)hIl2Cpp + LFGKPNGPDGD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFGKPNGPDGD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SystemDefaultLanguageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SystemDefaultLanguageRow*>(*)())((::PBYTE)hIl2Cpp + LFGKPNGPDGD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SystemDefaultLanguageRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::SystemDefaultLanguageRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + LFGKPNGPDGD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFGKPNGPDGD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFGKPNGPDGD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFGKPNGPDGD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LFGKPNGPDGD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFGKPNGPDGD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LFGKPNGPDGD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SystemDefaultLanguageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SystemDefaultLanguageRow*))((::PBYTE)hIl2Cpp + LFGKPNGPDGD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
