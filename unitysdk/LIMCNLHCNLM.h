#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryChapterRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIMCNLHCNLM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0FC5F0)
#define LIMCNLHCNLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0FCB70)
#define LIMCNLHCNLM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0FC760)
#define LIMCNLHCNLM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0FC0E0)
#define LIMCNLHCNLM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0FC370)
#define LIMCNLHCNLM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0FC800)
#define LIMCNLHCNLM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0FC850)
#define LIMCNLHCNLM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0FC630)
#define LIMCNLHCNLM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0FC310)
#define LIMCNLHCNLM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0FC4A0)
#define LIMCNLHCNLM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0FC6C0)
#define LIMCNLHCNLM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0FC060)

inline static constexpr unsigned int LIMCNLHCNLM_TypeDefinitionIndex = 11464;

	class LIMCNLHCNLM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LIMCNLHCNLM")->GetStaticField(0x3EE70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryChapterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryChapterRow*>**)UnitySDK::FromName("", "LIMCNLHCNLM")->GetStaticField(0x3EE78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIMCNLHCNLM")->GetStaticField(0x3EE80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIMCNLHCNLM")->GetStaticField(0xD740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIMCNLHCNLM")->GetStaticField(0xD741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIMCNLHCNLM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryChapterRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryChapterRow*>*(*)())((::PBYTE)hIl2Cpp + LIMCNLHCNLM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIMCNLHCNLM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryChapterRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryChapterRow*>(*)())((::PBYTE)hIl2Cpp + LIMCNLHCNLM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FantasticStoryChapterRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FantasticStoryChapterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LIMCNLHCNLM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIMCNLHCNLM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIMCNLHCNLM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIMCNLHCNLM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIMCNLHCNLM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIMCNLHCNLM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIMCNLHCNLM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FantasticStoryChapterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FantasticStoryChapterRow*))((::PBYTE)hIl2Cpp + LIMCNLHCNLM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
