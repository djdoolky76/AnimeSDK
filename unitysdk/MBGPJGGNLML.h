#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEmojiConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBGPJGGNLML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1348B0)
#define MBGPJGGNLML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D134E80)
#define MBGPJGGNLML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D134A20)
#define MBGPJGGNLML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D134320)
#define MBGPJGGNLML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1345B0)
#define MBGPJGGNLML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D134AC0)
#define MBGPJGGNLML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D134B10)
#define MBGPJGGNLML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1348F0)
#define MBGPJGGNLML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D134550)
#define MBGPJGGNLML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D134720)
#define MBGPJGGNLML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D134980)
#define MBGPJGGNLML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1342A0)

inline static constexpr unsigned int MBGPJGGNLML_TypeDefinitionIndex = 11698;

	class MBGPJGGNLML : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>**)UnitySDK::FromName("", "MBGPJGGNLML")->GetStaticField(0x47350);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MBGPJGGNLML")->GetStaticField(0x47358);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MBGPJGGNLML")->GetStaticField(0x47360);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBGPJGGNLML")->GetStaticField(0x10F60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MBGPJGGNLML")->GetStaticField(0x10F61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBGPJGGNLML_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MBGPJGGNLML_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBGPJGGNLML_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>(*)())((::PBYTE)hIl2Cpp + MBGPJGGNLML_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEmojiConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveEmojiConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MBGPJGGNLML_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBGPJGGNLML_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBGPJGGNLML_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBGPJGGNLML_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MBGPJGGNLML_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBGPJGGNLML_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MBGPJGGNLML_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEmojiConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEmojiConfigRow*))((::PBYTE)hIl2Cpp + MBGPJGGNLML_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
