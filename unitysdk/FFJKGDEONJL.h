#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleEmojiRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFJKGDEONJL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDE81A0)
#define FFJKGDEONJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE8770)
#define FFJKGDEONJL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDE8310)
#define FFJKGDEONJL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDE7C10)
#define FFJKGDEONJL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDE7EA0)
#define FFJKGDEONJL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDE83B0)
#define FFJKGDEONJL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDE8400)
#define FFJKGDEONJL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDE81E0)
#define FFJKGDEONJL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDE7E40)
#define FFJKGDEONJL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDE8010)
#define FFJKGDEONJL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDE8270)
#define FFJKGDEONJL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDE7B90)

inline static constexpr unsigned int FFJKGDEONJL_TypeDefinitionIndex = 11866;

	class FFJKGDEONJL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FFJKGDEONJL")->GetStaticField(0x11180);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FFJKGDEONJL")->GetStaticField(0x11188);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleEmojiRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleEmojiRow*>**)UnitySDK::FromName("", "FFJKGDEONJL")->GetStaticField(0x11190);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FFJKGDEONJL")->GetStaticField(0x3970);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FFJKGDEONJL")->GetStaticField(0x3971);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFJKGDEONJL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleEmojiRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleEmojiRow*>*(*)())((::PBYTE)hIl2Cpp + FFJKGDEONJL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFJKGDEONJL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleEmojiRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleEmojiRow*>(*)())((::PBYTE)hIl2Cpp + FFJKGDEONJL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleEmojiRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleEmojiRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FFJKGDEONJL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFJKGDEONJL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFJKGDEONJL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFJKGDEONJL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FFJKGDEONJL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FFJKGDEONJL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FFJKGDEONJL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleEmojiRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleEmojiRow*))((::PBYTE)hIl2Cpp + FFJKGDEONJL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
