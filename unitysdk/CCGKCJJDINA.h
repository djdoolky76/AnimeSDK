#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeVersionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCGKCJJDINA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA0B8D0)
#define CCGKCJJDINA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA0BE50)
#define CCGKCJJDINA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA0BA40)
#define CCGKCJJDINA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA0B380)
#define CCGKCJJDINA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA0B610)
#define CCGKCJJDINA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA0BAE0)
#define CCGKCJJDINA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA0BB30)
#define CCGKCJJDINA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA0B910)
#define CCGKCJJDINA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA0B5B0)
#define CCGKCJJDINA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA0B780)
#define CCGKCJJDINA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA0B9A0)
#define CCGKCJJDINA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA0B300)

inline static constexpr unsigned int CCGKCJJDINA_TypeDefinitionIndex = 11896;

	class CCGKCJJDINA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CCGKCJJDINA")->GetStaticField(0x3B960);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CCGKCJJDINA")->GetStaticField(0x3B968);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVersionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVersionRow*>**)UnitySDK::FromName("", "CCGKCJJDINA")->GetStaticField(0x3B970);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CCGKCJJDINA")->GetStaticField(0xCAD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CCGKCJJDINA")->GetStaticField(0xCAD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCGKCJJDINA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVersionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVersionRow*>*(*)())((::PBYTE)hIl2Cpp + CCGKCJJDINA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCGKCJJDINA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVersionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVersionRow*>(*)())((::PBYTE)hIl2Cpp + CCGKCJJDINA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeVersionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeVersionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CCGKCJJDINA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCGKCJJDINA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCGKCJJDINA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCGKCJJDINA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CCGKCJJDINA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCGKCJJDINA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CCGKCJJDINA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeVersionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeVersionRow*))((::PBYTE)hIl2Cpp + CCGKCJJDINA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
