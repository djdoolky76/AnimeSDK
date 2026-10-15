#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionSeasonRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHGPKGLENFH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD816F0)
#define EHGPKGLENFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD81C70)
#define EHGPKGLENFH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD81860)
#define EHGPKGLENFH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD811E0)
#define EHGPKGLENFH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD81470)
#define EHGPKGLENFH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD81900)
#define EHGPKGLENFH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD81950)
#define EHGPKGLENFH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD81730)
#define EHGPKGLENFH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD81410)
#define EHGPKGLENFH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD815A0)
#define EHGPKGLENFH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD817C0)
#define EHGPKGLENFH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD81160)

inline static constexpr unsigned int EHGPKGLENFH_TypeDefinitionIndex = 12503;

	class EHGPKGLENFH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EHGPKGLENFH")->GetStaticField(0x53F10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionSeasonRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionSeasonRow*>**)UnitySDK::FromName("", "EHGPKGLENFH")->GetStaticField(0x53F18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EHGPKGLENFH")->GetStaticField(0x53F20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EHGPKGLENFH")->GetStaticField(0x12A10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EHGPKGLENFH")->GetStaticField(0x12A11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHGPKGLENFH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionSeasonRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionSeasonRow*>*(*)())((::PBYTE)hIl2Cpp + EHGPKGLENFH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHGPKGLENFH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionSeasonRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionSeasonRow*>(*)())((::PBYTE)hIl2Cpp + EHGPKGLENFH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityTelevisionSeasonRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityTelevisionSeasonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EHGPKGLENFH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHGPKGLENFH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHGPKGLENFH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHGPKGLENFH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EHGPKGLENFH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EHGPKGLENFH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EHGPKGLENFH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityTelevisionSeasonRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityTelevisionSeasonRow*))((::PBYTE)hIl2Cpp + EHGPKGLENFH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
