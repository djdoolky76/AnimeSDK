#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFCFMLABPDL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E4E64A0)
#define PFCFMLABPDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E6FF0)
#define PFCFMLABPDL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4E6840)
#define PFCFMLABPDL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E4E64E0)
#define PFCFMLABPDL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E4E6D30)
#define PFCFMLABPDL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E4E68E0)
#define PFCFMLABPDL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E4E6930)
#define PFCFMLABPDL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E4E6710)
#define PFCFMLABPDL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4E6CD0)
#define PFCFMLABPDL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4E6E60)
#define PFCFMLABPDL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E4E67A0)
#define PFCFMLABPDL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E4E6C50)

inline static constexpr unsigned int PFCFMLABPDL_TypeDefinitionIndex = 15414;

	class PFCFMLABPDL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStoryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStoryRow*>**)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0x38160);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0x38168);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0x38170);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0xC2A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0xC2A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFCFMLABPDL_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFCFMLABPDL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFCFMLABPDL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFCFMLABPDL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PFCFMLABPDL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PFCFMLABPDL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PFCFMLABPDL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookStoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookStoryRow*))((::PBYTE)hIl2Cpp + PFCFMLABPDL_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStoryRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStoryRow*>*(*)())((::PBYTE)hIl2Cpp + PFCFMLABPDL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFCFMLABPDL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStoryRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStoryRow*>(*)())((::PBYTE)hIl2Cpp + PFCFMLABPDL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookStoryRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PFCFMLABPDL_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
