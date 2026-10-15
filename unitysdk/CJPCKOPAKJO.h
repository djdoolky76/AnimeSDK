#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJPCKOPAKJO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC1CA30)
#define CJPCKOPAKJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC1CFB0)
#define CJPCKOPAKJO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC1CBA0)
#define CJPCKOPAKJO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC1C4E0)
#define CJPCKOPAKJO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC1C770)
#define CJPCKOPAKJO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC1CC40)
#define CJPCKOPAKJO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC1CC90)
#define CJPCKOPAKJO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC1CA70)
#define CJPCKOPAKJO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC1C710)
#define CJPCKOPAKJO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC1C8A0)
#define CJPCKOPAKJO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC1CB00)
#define CJPCKOPAKJO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC1C460)

inline static constexpr unsigned int CJPCKOPAKJO_TypeDefinitionIndex = 14893;

	class CJPCKOPAKJO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CJPCKOPAKJO")->GetStaticField(0x431E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStoryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStoryRow*>**)UnitySDK::FromName("", "CJPCKOPAKJO")->GetStaticField(0x431E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CJPCKOPAKJO")->GetStaticField(0x431F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CJPCKOPAKJO")->GetStaticField(0x102A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CJPCKOPAKJO")->GetStaticField(0x102A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJPCKOPAKJO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStoryRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStoryRow*>*(*)())((::PBYTE)hIl2Cpp + CJPCKOPAKJO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CJPCKOPAKJO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStoryRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStoryRow*>(*)())((::PBYTE)hIl2Cpp + CJPCKOPAKJO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicStoryRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CJPCKOPAKJO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CJPCKOPAKJO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJPCKOPAKJO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJPCKOPAKJO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CJPCKOPAKJO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CJPCKOPAKJO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CJPCKOPAKJO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicStoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicStoryRow*))((::PBYTE)hIl2Cpp + CJPCKOPAKJO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
