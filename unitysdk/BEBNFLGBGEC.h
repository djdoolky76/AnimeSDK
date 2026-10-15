#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextJoinItemRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEBNFLGBGEC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCFF470)
#define BEBNFLGBGEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCFFFC0)
#define BEBNFLGBGEC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCFF810)
#define BEBNFLGBGEC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCFF4B0)
#define BEBNFLGBGEC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCFFD00)
#define BEBNFLGBGEC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCFF8B0)
#define BEBNFLGBGEC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCFF900)
#define BEBNFLGBGEC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCFF6E0)
#define BEBNFLGBGEC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCFFCA0)
#define BEBNFLGBGEC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCFFE70)
#define BEBNFLGBGEC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCFF770)
#define BEBNFLGBGEC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCFFC20)

inline static constexpr unsigned int BEBNFLGBGEC_TypeDefinitionIndex = 15287;

	class BEBNFLGBGEC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinItemRow*>**)UnitySDK::FromName("", "BEBNFLGBGEC")->GetStaticField(0x3E630);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BEBNFLGBGEC")->GetStaticField(0x3E638);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BEBNFLGBGEC")->GetStaticField(0x3E640);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BEBNFLGBGEC")->GetStaticField(0xD600);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BEBNFLGBGEC")->GetStaticField(0xD601);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEBNFLGBGEC_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BEBNFLGBGEC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEBNFLGBGEC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEBNFLGBGEC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BEBNFLGBGEC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEBNFLGBGEC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BEBNFLGBGEC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TextJoinItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TextJoinItemRow*))((::PBYTE)hIl2Cpp + BEBNFLGBGEC_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinItemRow*>*(*)())((::PBYTE)hIl2Cpp + BEBNFLGBGEC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BEBNFLGBGEC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinItemRow*>(*)())((::PBYTE)hIl2Cpp + BEBNFLGBGEC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TextJoinItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TextJoinItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BEBNFLGBGEC_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
