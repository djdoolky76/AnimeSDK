#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingStratageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKCIBACJPCE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE2EBA0)
#define GKCIBACJPCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE2F120)
#define GKCIBACJPCE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE2ED10)
#define GKCIBACJPCE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE2E650)
#define GKCIBACJPCE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE2E8E0)
#define GKCIBACJPCE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE2EDB0)
#define GKCIBACJPCE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE2EE00)
#define GKCIBACJPCE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE2EBE0)
#define GKCIBACJPCE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE2E880)
#define GKCIBACJPCE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE2EA10)
#define GKCIBACJPCE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE2EC70)
#define GKCIBACJPCE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE2E5D0)

inline static constexpr unsigned int GKCIBACJPCE_TypeDefinitionIndex = 13996;

	class GKCIBACJPCE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GKCIBACJPCE")->GetStaticField(0x16B80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>**)UnitySDK::FromName("", "GKCIBACJPCE")->GetStaticField(0x16B88);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GKCIBACJPCE")->GetStaticField(0x16B90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GKCIBACJPCE")->GetStaticField(0x4D40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GKCIBACJPCE")->GetStaticField(0x4D41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKCIBACJPCE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GKCIBACJPCE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKCIBACJPCE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>(*)())((::PBYTE)hIl2Cpp + GKCIBACJPCE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::LoadingStratageConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LoadingStratageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GKCIBACJPCE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKCIBACJPCE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKCIBACJPCE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKCIBACJPCE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GKCIBACJPCE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKCIBACJPCE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GKCIBACJPCE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::LoadingStratageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LoadingStratageConfigRow*))((::PBYTE)hIl2Cpp + GKCIBACJPCE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
