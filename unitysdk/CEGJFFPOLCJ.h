#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookSentenceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CEGJFFPOLCJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E5B50)
#define CEGJFFPOLCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E6730)
#define CEGJFFPOLCJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E5EF0)
#define CEGJFFPOLCJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E5B90)
#define CEGJFFPOLCJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E6430)
#define CEGJFFPOLCJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E5F90)
#define CEGJFFPOLCJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E5FE0)
#define CEGJFFPOLCJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E5DC0)
#define CEGJFFPOLCJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E63D0)
#define CEGJFFPOLCJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E65A0)
#define CEGJFFPOLCJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E5E50)
#define CEGJFFPOLCJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E6350)

inline static constexpr unsigned int CEGJFFPOLCJ_TypeDefinitionIndex = 15259;

	class CEGJFFPOLCJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0x39050);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0x39058);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookSentenceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookSentenceRow*>**)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0x39060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0xB8D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CEGJFFPOLCJ")->GetStaticField(0xB8D1);
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
