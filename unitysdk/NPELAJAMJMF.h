#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryBattleRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPELAJAMJMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D244C80)
#define NPELAJAMJMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D245200)
#define NPELAJAMJMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D244DF0)
#define NPELAJAMJMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D244770)
#define NPELAJAMJMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D244A00)
#define NPELAJAMJMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D244E90)
#define NPELAJAMJMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D244EE0)
#define NPELAJAMJMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D244CC0)
#define NPELAJAMJMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2449A0)
#define NPELAJAMJMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D244B30)
#define NPELAJAMJMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D244D50)
#define NPELAJAMJMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2446F0)

inline static constexpr unsigned int NPELAJAMJMF_TypeDefinitionIndex = 11466;

	class NPELAJAMJMF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0x31570);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBattleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBattleRow*>**)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0x31578);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0x31580);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0xA5C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0xA5C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPELAJAMJMF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBattleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBattleRow*>*(*)())((::PBYTE)hIl2Cpp + NPELAJAMJMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPELAJAMJMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBattleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBattleRow*>(*)())((::PBYTE)hIl2Cpp + NPELAJAMJMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FantasticStoryBattleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FantasticStoryBattleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPELAJAMJMF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPELAJAMJMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPELAJAMJMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPELAJAMJMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NPELAJAMJMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPELAJAMJMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NPELAJAMJMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FantasticStoryBattleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FantasticStoryBattleRow*))((::PBYTE)hIl2Cpp + NPELAJAMJMF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
