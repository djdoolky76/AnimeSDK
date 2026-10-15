#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryBattleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPELAJAMJMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D217060)
#define NPELAJAMJMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2175E0)
#define NPELAJAMJMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2171D0)
#define NPELAJAMJMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D216B50)
#define NPELAJAMJMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D216DE0)
#define NPELAJAMJMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D217270)
#define NPELAJAMJMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2172C0)
#define NPELAJAMJMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2170A0)
#define NPELAJAMJMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D216D80)
#define NPELAJAMJMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D216F10)
#define NPELAJAMJMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D217130)
#define NPELAJAMJMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D216AD0)

inline static constexpr unsigned int NPELAJAMJMF_TypeDefinitionIndex = 11466;

	class NPELAJAMJMF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBattleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBattleRow*>**)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0x427D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0x427D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0x427E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0xFC80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NPELAJAMJMF")->GetStaticField(0xFC81);
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
