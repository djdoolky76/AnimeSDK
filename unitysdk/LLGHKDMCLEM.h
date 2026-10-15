#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildRewardBoxRandomItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLGHKDMCLEM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E00A0)
#define LLGHKDMCLEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0670)
#define LLGHKDMCLEM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E0210)
#define LLGHKDMCLEM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0DFB10)
#define LLGHKDMCLEM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0DFDA0)
#define LLGHKDMCLEM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E02B0)
#define LLGHKDMCLEM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E0300)
#define LLGHKDMCLEM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E00E0)
#define LLGHKDMCLEM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0DFD40)
#define LLGHKDMCLEM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0DFF10)
#define LLGHKDMCLEM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E0170)
#define LLGHKDMCLEM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0DFA90)

inline static constexpr unsigned int LLGHKDMCLEM_TypeDefinitionIndex = 11441;

	class LLGHKDMCLEM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LLGHKDMCLEM")->GetStaticField(0x3E050);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LLGHKDMCLEM")->GetStaticField(0x3E058);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>**)UnitySDK::FromName("", "LLGHKDMCLEM")->GetStaticField(0x3E060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LLGHKDMCLEM")->GetStaticField(0xEA30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LLGHKDMCLEM")->GetStaticField(0xEA31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLGHKDMCLEM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>*(*)())((::PBYTE)hIl2Cpp + LLGHKDMCLEM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLGHKDMCLEM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>(*)())((::PBYTE)hIl2Cpp + LLGHKDMCLEM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LLGHKDMCLEM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLGHKDMCLEM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLGHKDMCLEM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLGHKDMCLEM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LLGHKDMCLEM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LLGHKDMCLEM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LLGHKDMCLEM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*))((::PBYTE)hIl2Cpp + LLGHKDMCLEM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
