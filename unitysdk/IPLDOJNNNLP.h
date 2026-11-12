#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotExperimentFilesRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPLDOJNNNLP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E118450)
#define IPLDOJNNNLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E119030)
#define IPLDOJNNNLP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E1187F0)
#define IPLDOJNNNLP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E118490)
#define IPLDOJNNNLP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E118D30)
#define IPLDOJNNNLP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E118890)
#define IPLDOJNNNLP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E1188E0)
#define IPLDOJNNNLP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E1186C0)
#define IPLDOJNNNLP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E118CD0)
#define IPLDOJNNNLP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E118EA0)
#define IPLDOJNNNLP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E118750)
#define IPLDOJNNNLP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E118C50)

inline static constexpr unsigned int IPLDOJNNNLP_TypeDefinitionIndex = 15420;

	class IPLDOJNNNLP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>**)UnitySDK::FromName("", "IPLDOJNNNLP")->GetStaticField(0x1D7F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IPLDOJNNNLP")->GetStaticField(0x1D7F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPLDOJNNNLP")->GetStaticField(0x1D800);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPLDOJNNNLP")->GetStaticField(0x66C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPLDOJNNNLP")->GetStaticField(0x66C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPLDOJNNNLP_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPLDOJNNNLP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPLDOJNNNLP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPLDOJNNNLP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPLDOJNNNLP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPLDOJNNNLP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPLDOJNNNLP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotExperimentFilesRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotExperimentFilesRow*))((::PBYTE)hIl2Cpp + IPLDOJNNNLP_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>*(*)())((::PBYTE)hIl2Cpp + IPLDOJNNNLP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPLDOJNNNLP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>(*)())((::PBYTE)hIl2Cpp + IPLDOJNNNLP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotExperimentFilesRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotExperimentFilesRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPLDOJNNNLP_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
