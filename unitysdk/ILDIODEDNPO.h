#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemStroyLineRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILDIODEDNPO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEF0B90)
#define ILDIODEDNPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF1160)
#define ILDIODEDNPO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEF0D00)
#define ILDIODEDNPO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEF0600)
#define ILDIODEDNPO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEF0890)
#define ILDIODEDNPO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEF0DA0)
#define ILDIODEDNPO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEF0DF0)
#define ILDIODEDNPO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEF0BD0)
#define ILDIODEDNPO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEF0830)
#define ILDIODEDNPO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEF0A00)
#define ILDIODEDNPO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEF0C60)
#define ILDIODEDNPO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEF0580)

inline static constexpr unsigned int ILDIODEDNPO_TypeDefinitionIndex = 13895;

	class ILDIODEDNPO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ILDIODEDNPO")->GetStaticField(0x23620);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ILDIODEDNPO")->GetStaticField(0x23628);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>**)UnitySDK::FromName("", "ILDIODEDNPO")->GetStaticField(0x23630);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ILDIODEDNPO")->GetStaticField(0x7A40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ILDIODEDNPO")->GetStaticField(0x7A41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILDIODEDNPO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>*(*)())((::PBYTE)hIl2Cpp + ILDIODEDNPO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ILDIODEDNPO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>(*)())((::PBYTE)hIl2Cpp + ILDIODEDNPO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ItemStroyLineRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemStroyLineRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ILDIODEDNPO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ILDIODEDNPO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILDIODEDNPO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILDIODEDNPO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ILDIODEDNPO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ILDIODEDNPO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ILDIODEDNPO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ItemStroyLineRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemStroyLineRow*))((::PBYTE)hIl2Cpp + ILDIODEDNPO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
