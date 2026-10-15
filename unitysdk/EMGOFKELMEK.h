#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingPropertyRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMGOFKELMEK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDA6D80)
#define EMGOFKELMEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDA7350)
#define EMGOFKELMEK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDA6EF0)
#define EMGOFKELMEK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDA67F0)
#define EMGOFKELMEK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDA6A80)
#define EMGOFKELMEK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDA6F90)
#define EMGOFKELMEK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDA6FE0)
#define EMGOFKELMEK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDA6DC0)
#define EMGOFKELMEK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDA6A20)
#define EMGOFKELMEK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDA6BF0)
#define EMGOFKELMEK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDA6E50)
#define EMGOFKELMEK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDA6770)

inline static constexpr unsigned int EMGOFKELMEK_TypeDefinitionIndex = 11060;

	class EMGOFKELMEK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPropertyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPropertyRow*>**)UnitySDK::FromName("", "EMGOFKELMEK")->GetStaticField(0xB640);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EMGOFKELMEK")->GetStaticField(0xB648);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EMGOFKELMEK")->GetStaticField(0xB650);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EMGOFKELMEK")->GetStaticField(0x27B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EMGOFKELMEK")->GetStaticField(0x27B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMGOFKELMEK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPropertyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPropertyRow*>*(*)())((::PBYTE)hIl2Cpp + EMGOFKELMEK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMGOFKELMEK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPropertyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPropertyRow*>(*)())((::PBYTE)hIl2Cpp + EMGOFKELMEK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingPropertyRow* LMBKNCAIDLC(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ChenLingPropertyRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + EMGOFKELMEK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMGOFKELMEK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMGOFKELMEK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMGOFKELMEK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EMGOFKELMEK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMGOFKELMEK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EMGOFKELMEK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingPropertyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingPropertyRow*))((::PBYTE)hIl2Cpp + EMGOFKELMEK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
