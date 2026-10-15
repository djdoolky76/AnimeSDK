#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEmojiRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDDJNAIDAAG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE2C730)
#define GDDJNAIDAAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE2CD00)
#define GDDJNAIDAAG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE2C8A0)
#define GDDJNAIDAAG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE2C1A0)
#define GDDJNAIDAAG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE2C430)
#define GDDJNAIDAAG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE2C940)
#define GDDJNAIDAAG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE2C990)
#define GDDJNAIDAAG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE2C770)
#define GDDJNAIDAAG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE2C3D0)
#define GDDJNAIDAAG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE2C5A0)
#define GDDJNAIDAAG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE2C800)
#define GDDJNAIDAAG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE2C120)

inline static constexpr unsigned int GDDJNAIDAAG_TypeDefinitionIndex = 11817;

	class GDDJNAIDAAG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GDDJNAIDAAG")->GetStaticField(0x169C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiRow*>**)UnitySDK::FromName("", "GDDJNAIDAAG")->GetStaticField(0x169C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GDDJNAIDAAG")->GetStaticField(0x169D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GDDJNAIDAAG")->GetStaticField(0x5530);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GDDJNAIDAAG")->GetStaticField(0x5531);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDJNAIDAAG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiRow*>*(*)())((::PBYTE)hIl2Cpp + GDDJNAIDAAG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDDJNAIDAAG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiRow*>(*)())((::PBYTE)hIl2Cpp + GDDJNAIDAAG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEmojiRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveEmojiRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDDJNAIDAAG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDDJNAIDAAG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDJNAIDAAG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDJNAIDAAG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GDDJNAIDAAG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDDJNAIDAAG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GDDJNAIDAAG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEmojiRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEmojiRow*))((::PBYTE)hIl2Cpp + GDDJNAIDAAG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
