#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEmojiSenderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLICLPFLEFP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E03ECB0)
#define GLICLPFLEFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03F280)
#define GLICLPFLEFP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E03EE20)
#define GLICLPFLEFP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E03E720)
#define GLICLPFLEFP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E03E9B0)
#define GLICLPFLEFP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E03EEC0)
#define GLICLPFLEFP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E03EF10)
#define GLICLPFLEFP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E03ECF0)
#define GLICLPFLEFP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E03E950)
#define GLICLPFLEFP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E03EB20)
#define GLICLPFLEFP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E03ED80)
#define GLICLPFLEFP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E03E6A0)

inline static constexpr unsigned int GLICLPFLEFP_TypeDefinitionIndex = 11876;

	class GLICLPFLEFP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>**)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x11530);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x11538);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x11540);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x3910);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x3911);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLICLPFLEFP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>*(*)())((::PBYTE)hIl2Cpp + GLICLPFLEFP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLICLPFLEFP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>(*)())((::PBYTE)hIl2Cpp + GLICLPFLEFP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEmojiSenderRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveEmojiSenderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GLICLPFLEFP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLICLPFLEFP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLICLPFLEFP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLICLPFLEFP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GLICLPFLEFP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLICLPFLEFP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GLICLPFLEFP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEmojiSenderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEmojiSenderRow*))((::PBYTE)hIl2Cpp + GLICLPFLEFP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
