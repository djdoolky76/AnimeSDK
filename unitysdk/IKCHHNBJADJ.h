#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertForumPostRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKCHHNBJADJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0FFC10)
#define IKCHHNBJADJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1001E0)
#define IKCHHNBJADJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0FFD80)
#define IKCHHNBJADJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0FF680)
#define IKCHHNBJADJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0FF910)
#define IKCHHNBJADJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0FFE20)
#define IKCHHNBJADJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0FFE70)
#define IKCHHNBJADJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0FFC50)
#define IKCHHNBJADJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0FF8B0)
#define IKCHHNBJADJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0FFA80)
#define IKCHHNBJADJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0FFCE0)
#define IKCHHNBJADJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0FF600)

inline static constexpr unsigned int IKCHHNBJADJ_TypeDefinitionIndex = 11238;

	class IKCHHNBJADJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumPostRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumPostRow*>**)UnitySDK::FromName("", "IKCHHNBJADJ")->GetStaticField(0x1BDF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IKCHHNBJADJ")->GetStaticField(0x1BDF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IKCHHNBJADJ")->GetStaticField(0x1BE00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IKCHHNBJADJ")->GetStaticField(0x5B50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IKCHHNBJADJ")->GetStaticField(0x5B51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCHHNBJADJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumPostRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumPostRow*>*(*)())((::PBYTE)hIl2Cpp + IKCHHNBJADJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKCHHNBJADJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumPostRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertForumPostRow*>(*)())((::PBYTE)hIl2Cpp + IKCHHNBJADJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ComicDessertForumPostRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ComicDessertForumPostRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IKCHHNBJADJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKCHHNBJADJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCHHNBJADJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCHHNBJADJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IKCHHNBJADJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKCHHNBJADJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IKCHHNBJADJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ComicDessertForumPostRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ComicDessertForumPostRow*))((::PBYTE)hIl2Cpp + IKCHHNBJADJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
