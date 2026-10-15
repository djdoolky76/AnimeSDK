#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkTalkTextRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLEFBEGIEGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0769D0)
#define KLEFBEGIEGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D076FA0)
#define KLEFBEGIEGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D076B40)
#define KLEFBEGIEGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D076440)
#define KLEFBEGIEGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0766D0)
#define KLEFBEGIEGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D076BE0)
#define KLEFBEGIEGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D076C30)
#define KLEFBEGIEGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D076A10)
#define KLEFBEGIEGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D076670)
#define KLEFBEGIEGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D076840)
#define KLEFBEGIEGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D076AA0)
#define KLEFBEGIEGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0763C0)

inline static constexpr unsigned int KLEFBEGIEGA_TypeDefinitionIndex = 11195;

	class KLEFBEGIEGA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLEFBEGIEGA")->GetStaticField(0x35500);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KLEFBEGIEGA")->GetStaticField(0x35508);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>**)UnitySDK::FromName("", "KLEFBEGIEGA")->GetStaticField(0x35510);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLEFBEGIEGA")->GetStaticField(0xAC30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLEFBEGIEGA")->GetStaticField(0xAC31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEFBEGIEGA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>*(*)())((::PBYTE)hIl2Cpp + KLEFBEGIEGA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLEFBEGIEGA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>(*)())((::PBYTE)hIl2Cpp + KLEFBEGIEGA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkTalkTextRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkTalkTextRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KLEFBEGIEGA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLEFBEGIEGA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEFBEGIEGA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEFBEGIEGA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLEFBEGIEGA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLEFBEGIEGA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLEFBEGIEGA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ClockParkTalkTextRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkTalkTextRow*))((::PBYTE)hIl2Cpp + KLEFBEGIEGA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
