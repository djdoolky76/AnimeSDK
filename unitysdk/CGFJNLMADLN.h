#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChatInviteConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CGFJNLMADLN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DBDE350)
#define CGFJNLMADLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBDE920)
#define CGFJNLMADLN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DBDE4C0)
#define CGFJNLMADLN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DBDDDC0)
#define CGFJNLMADLN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DBDE050)
#define CGFJNLMADLN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DBDE560)
#define CGFJNLMADLN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DBDE5B0)
#define CGFJNLMADLN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DBDE390)
#define CGFJNLMADLN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DBDDFF0)
#define CGFJNLMADLN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DBDE1C0)
#define CGFJNLMADLN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DBDE420)
#define CGFJNLMADLN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DBDDD40)

inline static constexpr unsigned int CGFJNLMADLN_TypeDefinitionIndex = 13006;

	class CGFJNLMADLN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CGFJNLMADLN")->GetStaticField(0x3CA70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>**)UnitySDK::FromName("", "CGFJNLMADLN")->GetStaticField(0x3CA78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CGFJNLMADLN")->GetStaticField(0x3CA80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CGFJNLMADLN")->GetStaticField(0xC190);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CGFJNLMADLN")->GetStaticField(0xC191);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGFJNLMADLN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CGFJNLMADLN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CGFJNLMADLN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>(*)())((::PBYTE)hIl2Cpp + CGFJNLMADLN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChatInviteConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChatInviteConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CGFJNLMADLN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CGFJNLMADLN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGFJNLMADLN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGFJNLMADLN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CGFJNLMADLN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGFJNLMADLN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CGFJNLMADLN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChatInviteConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChatInviteConfigRow*))((::PBYTE)hIl2Cpp + CGFJNLMADLN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
