#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationBasicLevelDamageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCLFEBGPKOI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDA74A0)
#define FCLFEBGPKOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDA7A20)
#define FCLFEBGPKOI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDA7610)
#define FCLFEBGPKOI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDA6F50)
#define FCLFEBGPKOI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDA71E0)
#define FCLFEBGPKOI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDA76B0)
#define FCLFEBGPKOI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDA7700)
#define FCLFEBGPKOI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDA74E0)
#define FCLFEBGPKOI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDA7180)
#define FCLFEBGPKOI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDA7350)
#define FCLFEBGPKOI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDA7570)
#define FCLFEBGPKOI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDA6ED0)

inline static constexpr unsigned int FCLFEBGPKOI_TypeDefinitionIndex = 13216;

	class FCLFEBGPKOI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FCLFEBGPKOI")->GetStaticField(0xFCC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationBasicLevelDamageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationBasicLevelDamageRow*>**)UnitySDK::FromName("", "FCLFEBGPKOI")->GetStaticField(0xFCC8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FCLFEBGPKOI")->GetStaticField(0xFCD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FCLFEBGPKOI")->GetStaticField(0x3330);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FCLFEBGPKOI")->GetStaticField(0x3331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLFEBGPKOI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationBasicLevelDamageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationBasicLevelDamageRow*>*(*)())((::PBYTE)hIl2Cpp + FCLFEBGPKOI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCLFEBGPKOI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationBasicLevelDamageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationBasicLevelDamageRow*>(*)())((::PBYTE)hIl2Cpp + FCLFEBGPKOI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ElationBasicLevelDamageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ElationBasicLevelDamageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FCLFEBGPKOI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCLFEBGPKOI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLFEBGPKOI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLFEBGPKOI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FCLFEBGPKOI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCLFEBGPKOI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FCLFEBGPKOI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ElationBasicLevelDamageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ElationBasicLevelDamageRow*))((::PBYTE)hIl2Cpp + FCLFEBGPKOI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
