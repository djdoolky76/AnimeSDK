#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingStoryRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPDACMJFJNK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C7B10)
#define KPDACMJFJNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0C8090)
#define KPDACMJFJNK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0C7C80)
#define KPDACMJFJNK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0C75C0)
#define KPDACMJFJNK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0C7850)
#define KPDACMJFJNK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0C7D20)
#define KPDACMJFJNK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0C7D70)
#define KPDACMJFJNK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C7B50)
#define KPDACMJFJNK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0C77F0)
#define KPDACMJFJNK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0C7980)
#define KPDACMJFJNK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0C7BE0)
#define KPDACMJFJNK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0C7540)

inline static constexpr unsigned int KPDACMJFJNK_TypeDefinitionIndex = 12455;

	class KPDACMJFJNK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KPDACMJFJNK")->GetStaticField(0x39F70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>**)UnitySDK::FromName("", "KPDACMJFJNK")->GetStaticField(0x39F78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPDACMJFJNK")->GetStaticField(0x39F80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPDACMJFJNK")->GetStaticField(0xC5C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPDACMJFJNK")->GetStaticField(0xC5C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDACMJFJNK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>*(*)())((::PBYTE)hIl2Cpp + KPDACMJFJNK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPDACMJFJNK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>(*)())((::PBYTE)hIl2Cpp + KPDACMJFJNK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingStoryRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPDACMJFJNK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPDACMJFJNK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDACMJFJNK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDACMJFJNK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPDACMJFJNK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPDACMJFJNK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPDACMJFJNK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingStoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingStoryRow*))((::PBYTE)hIl2Cpp + KPDACMJFJNK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
