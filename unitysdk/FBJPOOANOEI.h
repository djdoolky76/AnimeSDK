#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleOverrideVOConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBJPOOANOEI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDCB1E0)
#define FBJPOOANOEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDCB7B0)
#define FBJPOOANOEI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDCB350)
#define FBJPOOANOEI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDCAC50)
#define FBJPOOANOEI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDCAEE0)
#define FBJPOOANOEI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDCB3F0)
#define FBJPOOANOEI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDCB440)
#define FBJPOOANOEI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDCB220)
#define FBJPOOANOEI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDCAE80)
#define FBJPOOANOEI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDCB050)
#define FBJPOOANOEI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDCB2B0)
#define FBJPOOANOEI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDCABD0)

inline static constexpr unsigned int FBJPOOANOEI_TypeDefinitionIndex = 13552;

	class FBJPOOANOEI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FBJPOOANOEI")->GetStaticField(0xF7C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FBJPOOANOEI")->GetStaticField(0xF7C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>**)UnitySDK::FromName("", "FBJPOOANOEI")->GetStaticField(0xF7D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FBJPOOANOEI")->GetStaticField(0x34A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FBJPOOANOEI")->GetStaticField(0x34A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBJPOOANOEI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FBJPOOANOEI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBJPOOANOEI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>(*)())((::PBYTE)hIl2Cpp + FBJPOOANOEI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleOverrideVOConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightRoleOverrideVOConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FBJPOOANOEI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBJPOOANOEI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBJPOOANOEI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBJPOOANOEI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FBJPOOANOEI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBJPOOANOEI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FBJPOOANOEI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleOverrideVOConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleOverrideVOConfigRow*))((::PBYTE)hIl2Cpp + FBJPOOANOEI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
