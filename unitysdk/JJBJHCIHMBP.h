#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingPolicyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJBJHCIHMBP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D038930)
#define JJBJHCIHMBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D038F00)
#define JJBJHCIHMBP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D038AA0)
#define JJBJHCIHMBP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0383A0)
#define JJBJHCIHMBP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D038630)
#define JJBJHCIHMBP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D038B40)
#define JJBJHCIHMBP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D038B90)
#define JJBJHCIHMBP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D038970)
#define JJBJHCIHMBP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0385D0)
#define JJBJHCIHMBP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0387A0)
#define JJBJHCIHMBP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D038A00)
#define JJBJHCIHMBP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D038320)

inline static constexpr unsigned int JJBJHCIHMBP_TypeDefinitionIndex = 11073;

	class JJBJHCIHMBP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJBJHCIHMBP")->GetStaticField(0x2EBE0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JJBJHCIHMBP")->GetStaticField(0x2EBE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPolicyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPolicyRow*>**)UnitySDK::FromName("", "JJBJHCIHMBP")->GetStaticField(0x2EBF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJBJHCIHMBP")->GetStaticField(0x9AB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJBJHCIHMBP")->GetStaticField(0x9AB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJBJHCIHMBP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPolicyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPolicyRow*>*(*)())((::PBYTE)hIl2Cpp + JJBJHCIHMBP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJBJHCIHMBP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPolicyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPolicyRow*>(*)())((::PBYTE)hIl2Cpp + JJBJHCIHMBP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingPolicyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingPolicyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JJBJHCIHMBP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJBJHCIHMBP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJBJHCIHMBP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJBJHCIHMBP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JJBJHCIHMBP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJBJHCIHMBP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JJBJHCIHMBP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingPolicyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingPolicyRow*))((::PBYTE)hIl2Cpp + JJBJHCIHMBP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
