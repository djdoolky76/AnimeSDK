#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleAvatarGenderRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHGJPKMABKL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D091BC0)
#define KHGJPKMABKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D092140)
#define KHGJPKMABKL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D091D30)
#define KHGJPKMABKL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D091670)
#define KHGJPKMABKL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D091900)
#define KHGJPKMABKL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D091DD0)
#define KHGJPKMABKL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D091E20)
#define KHGJPKMABKL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D091C00)
#define KHGJPKMABKL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0918A0)
#define KHGJPKMABKL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D091A30)
#define KHGJPKMABKL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D091C90)
#define KHGJPKMABKL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0915F0)

inline static constexpr unsigned int KHGJPKMABKL_TypeDefinitionIndex = 13789;

	class KHGJPKMABKL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarGenderRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarGenderRow*>**)UnitySDK::FromName("", "KHGJPKMABKL")->GetStaticField(0x348E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KHGJPKMABKL")->GetStaticField(0x348E8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KHGJPKMABKL")->GetStaticField(0x348F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KHGJPKMABKL")->GetStaticField(0xB130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KHGJPKMABKL")->GetStaticField(0xB131);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHGJPKMABKL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarGenderRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarGenderRow*>*(*)())((::PBYTE)hIl2Cpp + KHGJPKMABKL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHGJPKMABKL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarGenderRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarGenderRow*>(*)())((::PBYTE)hIl2Cpp + KHGJPKMABKL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILBattleAvatarGenderRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ILBattleAvatarGenderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KHGJPKMABKL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHGJPKMABKL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHGJPKMABKL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHGJPKMABKL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KHGJPKMABKL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHGJPKMABKL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KHGJPKMABKL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILBattleAvatarGenderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILBattleAvatarGenderRow*))((::PBYTE)hIl2Cpp + KHGJPKMABKL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
