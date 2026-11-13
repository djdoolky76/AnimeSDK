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

#define PFCFMLABPDL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E717CE0)
#define PFCFMLABPDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E718830)
#define PFCFMLABPDL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E718080)
#define PFCFMLABPDL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E717D20)
#define PFCFMLABPDL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E718570)
#define PFCFMLABPDL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E718120)
#define PFCFMLABPDL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E718170)
#define PFCFMLABPDL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E717F50)
#define PFCFMLABPDL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E718510)
#define PFCFMLABPDL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E7186A0)
#define PFCFMLABPDL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E717FE0)
#define PFCFMLABPDL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E718490)

inline static constexpr unsigned int PFCFMLABPDL_TypeDefinitionIndex = 15414;

	class PFCFMLABPDL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0x3ED40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0x3ED48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStoryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStoryRow*>**)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0x3ED50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0xC9E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PFCFMLABPDL")->GetStaticField(0xC9E1);
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
