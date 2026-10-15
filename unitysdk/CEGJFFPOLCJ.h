#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookSentenceRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CEGJFFPOLCJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA133F0)
#define CEGJFFPOLCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA13FD0)
#define CEGJFFPOLCJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA13790)
#define CEGJFFPOLCJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA13430)
#define CEGJFFPOLCJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA13CD0)
#define CEGJFFPOLCJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA13830)
#define CEGJFFPOLCJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA13880)
#define CEGJFFPOLCJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA13660)
#define CEGJFFPOLCJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA13C70)
#define CEGJFFPOLCJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA13E40)
#define CEGJFFPOLCJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA136F0)
#define CEGJFFPOLCJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA13BF0)

	class CEGJFFPOLCJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookSentenceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookSentenceRow*>**)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0x3C0D0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0x3C0D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0x3C0E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0xCD10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0xCD11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookSentenceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookSentenceRow*))((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookSentenceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookSentenceRow*>*(*)())((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookSentenceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookSentenceRow*>(*)())((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookSentenceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookSentenceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CEGJFFPOLCJ_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
