#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertForumCommentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INGHFDEPNAL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E10C2F0)
#define INGHFDEPNAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10C8C0)
#define INGHFDEPNAL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E10C460)
#define INGHFDEPNAL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E10BD60)
#define INGHFDEPNAL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E10BFF0)
#define INGHFDEPNAL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E10C500)
#define INGHFDEPNAL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E10C550)
#define INGHFDEPNAL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E10C330)
#define INGHFDEPNAL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E10BF90)
#define INGHFDEPNAL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E10C160)
#define INGHFDEPNAL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E10C3C0)
#define INGHFDEPNAL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E10BCE0)

inline static constexpr unsigned int INGHFDEPNAL_TypeDefinitionIndex = 11240;

	class INGHFDEPNAL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumCommentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumCommentRow*>**)UnitySDK::FromName("", "INGHFDEPNAL")->GetStaticField(0x1C8D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "INGHFDEPNAL")->GetStaticField(0x1C8D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "INGHFDEPNAL")->GetStaticField(0x1C8E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "INGHFDEPNAL")->GetStaticField(0x5D50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "INGHFDEPNAL")->GetStaticField(0x5D51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INGHFDEPNAL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumCommentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumCommentRow*>*(*)())((::PBYTE)hIl2Cpp + INGHFDEPNAL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INGHFDEPNAL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumCommentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumCommentRow*>(*)())((::PBYTE)hIl2Cpp + INGHFDEPNAL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ComicDessertForumCommentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ComicDessertForumCommentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INGHFDEPNAL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INGHFDEPNAL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INGHFDEPNAL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INGHFDEPNAL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INGHFDEPNAL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + INGHFDEPNAL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + INGHFDEPNAL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ComicDessertForumCommentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ComicDessertForumCommentRow*))((::PBYTE)hIl2Cpp + INGHFDEPNAL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
