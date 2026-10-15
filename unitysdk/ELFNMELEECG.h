#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELFNMELEECG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD9A730)
#define ELFNMELEECG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD9ACB0)
#define ELFNMELEECG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD9A8A0)
#define ELFNMELEECG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD9A220)
#define ELFNMELEECG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD9A4B0)
#define ELFNMELEECG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD9A940)
#define ELFNMELEECG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD9A990)
#define ELFNMELEECG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD9A770)
#define ELFNMELEECG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD9A450)
#define ELFNMELEECG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD9A5E0)
#define ELFNMELEECG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD9A800)
#define ELFNMELEECG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD9A1A0)

inline static constexpr unsigned int ELFNMELEECG_TypeDefinitionIndex = 11468;

	class ELFNMELEECG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBuffRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBuffRow*>**)UnitySDK::FromName("", "ELFNMELEECG")->GetStaticField(0x2A40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ELFNMELEECG")->GetStaticField(0x2A48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ELFNMELEECG")->GetStaticField(0x2A50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ELFNMELEECG")->GetStaticField(0x21C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ELFNMELEECG")->GetStaticField(0x21C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFNMELEECG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBuffRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBuffRow*>*(*)())((::PBYTE)hIl2Cpp + ELFNMELEECG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELFNMELEECG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBuffRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryBuffRow*>(*)())((::PBYTE)hIl2Cpp + ELFNMELEECG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FantasticStoryBuffRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FantasticStoryBuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ELFNMELEECG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELFNMELEECG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFNMELEECG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFNMELEECG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ELFNMELEECG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELFNMELEECG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ELFNMELEECG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FantasticStoryBuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FantasticStoryBuffRow*))((::PBYTE)hIl2Cpp + ELFNMELEECG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
