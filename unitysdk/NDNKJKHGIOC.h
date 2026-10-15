#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournRoleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDNKJKHGIOC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1CD710)
#define NDNKJKHGIOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1CDC90)
#define NDNKJKHGIOC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1CD880)
#define NDNKJKHGIOC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1CD200)
#define NDNKJKHGIOC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1CD490)
#define NDNKJKHGIOC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1CD920)
#define NDNKJKHGIOC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1CD970)
#define NDNKJKHGIOC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1CD750)
#define NDNKJKHGIOC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1CD430)
#define NDNKJKHGIOC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1CD5C0)
#define NDNKJKHGIOC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1CD7E0)
#define NDNKJKHGIOC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1CD180)

inline static constexpr unsigned int NDNKJKHGIOC_TypeDefinitionIndex = 15002;

	class NDNKJKHGIOC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>**)UnitySDK::FromName("", "NDNKJKHGIOC")->GetStaticField(0x3F320);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NDNKJKHGIOC")->GetStaticField(0x3F328);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NDNKJKHGIOC")->GetStaticField(0x3F330);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NDNKJKHGIOC")->GetStaticField(0xEE40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NDNKJKHGIOC")->GetStaticField(0xEE41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDNKJKHGIOC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>*(*)())((::PBYTE)hIl2Cpp + NDNKJKHGIOC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDNKJKHGIOC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>(*)())((::PBYTE)hIl2Cpp + NDNKJKHGIOC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournRoleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournRoleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NDNKJKHGIOC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDNKJKHGIOC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDNKJKHGIOC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDNKJKHGIOC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NDNKJKHGIOC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NDNKJKHGIOC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NDNKJKHGIOC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournRoleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournRoleRow*))((::PBYTE)hIl2Cpp + NDNKJKHGIOC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
