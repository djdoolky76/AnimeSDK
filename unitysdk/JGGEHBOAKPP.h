#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerGuestCommentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGGEHBOAKPP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D029A80)
#define JGGEHBOAKPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D02A050)
#define JGGEHBOAKPP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D029BF0)
#define JGGEHBOAKPP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0294F0)
#define JGGEHBOAKPP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D029780)
#define JGGEHBOAKPP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D029C90)
#define JGGEHBOAKPP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D029CE0)
#define JGGEHBOAKPP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D029AC0)
#define JGGEHBOAKPP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D029720)
#define JGGEHBOAKPP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0298F0)
#define JGGEHBOAKPP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D029B50)
#define JGGEHBOAKPP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D029470)

inline static constexpr unsigned int JGGEHBOAKPP_TypeDefinitionIndex = 13196;

	class JGGEHBOAKPP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JGGEHBOAKPP")->GetStaticField(0x2DA10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JGGEHBOAKPP")->GetStaticField(0x2DA18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>**)UnitySDK::FromName("", "JGGEHBOAKPP")->GetStaticField(0x2DA20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JGGEHBOAKPP")->GetStaticField(0x9500);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JGGEHBOAKPP")->GetStaticField(0x9501);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGGEHBOAKPP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)())((::PBYTE)hIl2Cpp + JGGEHBOAKPP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JGGEHBOAKPP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>(*)())((::PBYTE)hIl2Cpp + JGGEHBOAKPP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerGuestCommentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerGuestCommentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JGGEHBOAKPP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JGGEHBOAKPP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGGEHBOAKPP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGGEHBOAKPP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JGGEHBOAKPP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JGGEHBOAKPP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JGGEHBOAKPP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerGuestCommentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerGuestCommentRow*))((::PBYTE)hIl2Cpp + JGGEHBOAKPP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
