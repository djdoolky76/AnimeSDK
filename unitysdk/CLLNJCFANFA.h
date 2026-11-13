#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFightConstValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLLNJCFANFA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EB7CDC0)
#define CLLNJCFANFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7D340)
#define CLLNJCFANFA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EB7CF30)
#define CLLNJCFANFA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EB7C850)
#define CLLNJCFANFA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EB7CAE0)
#define CLLNJCFANFA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EB7CFD0)
#define CLLNJCFANFA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EB7D020)
#define CLLNJCFANFA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EB7CE00)
#define CLLNJCFANFA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EB7CA80)
#define CLLNJCFANFA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EB7CC50)
#define CLLNJCFANFA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EB7CE90)
#define CLLNJCFANFA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EB7C7D0)

inline static constexpr unsigned int CLLNJCFANFA_TypeDefinitionIndex = 11654;

	class CLLNJCFANFA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CLLNJCFANFA")->GetStaticField(0x34F40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CLLNJCFANFA")->GetStaticField(0x34F48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConstValueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConstValueRow*>**)UnitySDK::FromName("", "CLLNJCFANFA")->GetStaticField(0x34F50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CLLNJCFANFA")->GetStaticField(0xA500);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CLLNJCFANFA")->GetStaticField(0xA501);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLNJCFANFA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConstValueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConstValueRow*>*(*)())((::PBYTE)hIl2Cpp + CLLNJCFANFA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLLNJCFANFA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConstValueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConstValueRow*>(*)())((::PBYTE)hIl2Cpp + CLLNJCFANFA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFightConstValueRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::ActivityFightConstValueRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLLNJCFANFA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLLNJCFANFA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLNJCFANFA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLNJCFANFA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLLNJCFANFA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLLNJCFANFA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CLLNJCFANFA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityFightConstValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFightConstValueRow*))((::PBYTE)hIl2Cpp + CLLNJCFANFA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
