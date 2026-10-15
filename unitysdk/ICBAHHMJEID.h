#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyClickContentConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICBAHHMJEID_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEE1110)
#define ICBAHHMJEID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE16E0)
#define ICBAHHMJEID_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEE1280)
#define ICBAHHMJEID_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEE0B80)
#define ICBAHHMJEID_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEE0E10)
#define ICBAHHMJEID_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEE1320)
#define ICBAHHMJEID_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEE1370)
#define ICBAHHMJEID_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEE1150)
#define ICBAHHMJEID_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEE0DB0)
#define ICBAHHMJEID_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEE0F80)
#define ICBAHHMJEID_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEE11E0)
#define ICBAHHMJEID_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEE0B00)

	class ICBAHHMJEID : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ICBAHHMJEID")->GetStaticField(0x20B10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyClickContentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyClickContentConfigRow*>**)UnitySDK::FromName("", "ICBAHHMJEID")->GetStaticField(0x20B18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ICBAHHMJEID")->GetStaticField(0x20B20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ICBAHHMJEID")->GetStaticField(0x76D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ICBAHHMJEID")->GetStaticField(0x76D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICBAHHMJEID_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyClickContentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyClickContentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ICBAHHMJEID_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICBAHHMJEID_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyClickContentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyClickContentConfigRow*>(*)())((::PBYTE)hIl2Cpp + ICBAHHMJEID_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyClickContentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyClickContentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ICBAHHMJEID_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICBAHHMJEID_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICBAHHMJEID_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICBAHHMJEID_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ICBAHHMJEID_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICBAHHMJEID_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ICBAHHMJEID_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyClickContentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyClickContentConfigRow*))((::PBYTE)hIl2Cpp + ICBAHHMJEID_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
