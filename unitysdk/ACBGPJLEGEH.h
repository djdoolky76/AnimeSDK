#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSrcType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCoreRoleChooseRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACBGPJLEGEH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCA1800)
#define ACBGPJLEGEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCA1E30)
#define ACBGPJLEGEH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCA1970)
#define ACBGPJLEGEH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCA11F0)
#define ACBGPJLEGEH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCA1480)
#define ACBGPJLEGEH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCA1A10)
#define ACBGPJLEGEH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCA1A60)
#define ACBGPJLEGEH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCA1840)
#define ACBGPJLEGEH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCA1420)
#define ACBGPJLEGEH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCA15F0)
#define ACBGPJLEGEH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCA18D0)
#define ACBGPJLEGEH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCA1170)

	class ACBGPJLEGEH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ACBGPJLEGEH")->GetStaticField(0x364B0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ACBGPJLEGEH")->GetStaticField(0x364B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>**)UnitySDK::FromName("", "ACBGPJLEGEH")->GetStaticField(0x364C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ACBGPJLEGEH")->GetStaticField(0xB720);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ACBGPJLEGEH")->GetStaticField(0xB721);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACBGPJLEGEH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>*(*)())((::PBYTE)hIl2Cpp + ACBGPJLEGEH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACBGPJLEGEH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>(*)())((::PBYTE)hIl2Cpp + ACBGPJLEGEH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightCoreRoleChooseRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitSrcType a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::GridFightCoreRoleChooseRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightTraitSrcType, ::System::UInt32))((::PBYTE)hIl2Cpp + ACBGPJLEGEH_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACBGPJLEGEH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACBGPJLEGEH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACBGPJLEGEH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ACBGPJLEGEH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACBGPJLEGEH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ACBGPJLEGEH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightCoreRoleChooseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCoreRoleChooseRow*))((::PBYTE)hIl2Cpp + ACBGPJLEGEH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
