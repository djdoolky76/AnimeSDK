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

#define GLICLPFLEFP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E657290)
#define GLICLPFLEFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E657860)
#define GLICLPFLEFP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E657400)
#define GLICLPFLEFP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E656D00)
#define GLICLPFLEFP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E656F90)
#define GLICLPFLEFP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6574A0)
#define GLICLPFLEFP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6574F0)
#define GLICLPFLEFP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6572D0)
#define GLICLPFLEFP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E656F30)
#define GLICLPFLEFP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E657100)
#define GLICLPFLEFP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E657360)
#define GLICLPFLEFP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E656C80)

inline static constexpr unsigned int GLICLPFLEFP_TypeDefinitionIndex = 11876;

	class GLICLPFLEFP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x11320);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>**)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x11328);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x11330);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x3840);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GLICLPFLEFP")->GetStaticField(0x3841);
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
