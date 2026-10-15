#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEventRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNMCMMKOPPE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9EA9C0)
#define BNMCMMKOPPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9EAF90)
#define BNMCMMKOPPE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9EAB30)
#define BNMCMMKOPPE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9EA430)
#define BNMCMMKOPPE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9EA6C0)
#define BNMCMMKOPPE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9EABD0)
#define BNMCMMKOPPE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9EAC20)
#define BNMCMMKOPPE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9EAA00)
#define BNMCMMKOPPE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9EA660)
#define BNMCMMKOPPE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9EA830)
#define BNMCMMKOPPE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9EAA90)
#define BNMCMMKOPPE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9EA3B0)

	class BNMCMMKOPPE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BNMCMMKOPPE")->GetStaticField(0x38A50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventRow*>**)UnitySDK::FromName("", "BNMCMMKOPPE")->GetStaticField(0x38A58);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BNMCMMKOPPE")->GetStaticField(0x38A60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNMCMMKOPPE")->GetStaticField(0xC160);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BNMCMMKOPPE")->GetStaticField(0xC161);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNMCMMKOPPE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventRow*>*(*)())((::PBYTE)hIl2Cpp + BNMCMMKOPPE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNMCMMKOPPE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventRow*>(*)())((::PBYTE)hIl2Cpp + BNMCMMKOPPE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BNMCMMKOPPE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNMCMMKOPPE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNMCMMKOPPE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNMCMMKOPPE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BNMCMMKOPPE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNMCMMKOPPE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BNMCMMKOPPE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirEventRow*))((::PBYTE)hIl2Cpp + BNMCMMKOPPE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
