#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleRankAttachmentdConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJMCMKHBHBA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D03C590)
#define JJMCMKHBHBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D03CBC0)
#define JJMCMKHBHBA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D03C700)
#define JJMCMKHBHBA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D03BF80)
#define JJMCMKHBHBA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D03C210)
#define JJMCMKHBHBA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D03C7A0)
#define JJMCMKHBHBA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D03C7F0)
#define JJMCMKHBHBA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D03C5D0)
#define JJMCMKHBHBA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D03C1B0)
#define JJMCMKHBHBA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D03C380)
#define JJMCMKHBHBA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D03C660)
#define JJMCMKHBHBA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D03BF00)

	class JJMCMKHBHBA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JJMCMKHBHBA")->GetStaticField(0x2EDA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*>**)UnitySDK::FromName("", "JJMCMKHBHBA")->GetStaticField(0x2EDA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJMCMKHBHBA")->GetStaticField(0x2EDB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJMCMKHBHBA")->GetStaticField(0x9B80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJMCMKHBHBA")->GetStaticField(0x9B81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJMCMKHBHBA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JJMCMKHBHBA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJMCMKHBHBA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*>(*)())((::PBYTE)hIl2Cpp + JJMCMKHBHBA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JJMCMKHBHBA_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJMCMKHBHBA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJMCMKHBHBA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJMCMKHBHBA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JJMCMKHBHBA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJMCMKHBHBA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JJMCMKHBHBA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*))((::PBYTE)hIl2Cpp + JJMCMKHBHBA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
