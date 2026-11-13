#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelItemGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELFOLOPGHCC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F127FF0)
#define ELFOLOPGHCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1285C0)
#define ELFOLOPGHCC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F128160)
#define ELFOLOPGHCC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F127A60)
#define ELFOLOPGHCC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F127CF0)
#define ELFOLOPGHCC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F128200)
#define ELFOLOPGHCC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F128250)
#define ELFOLOPGHCC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F128030)
#define ELFOLOPGHCC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F127C90)
#define ELFOLOPGHCC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F127E60)
#define ELFOLOPGHCC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F1280C0)
#define ELFOLOPGHCC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F1279E0)

inline static constexpr unsigned int ELFOLOPGHCC_TypeDefinitionIndex = 11160;

	class ELFOLOPGHCC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ELFOLOPGHCC")->GetStaticField(0x49750);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>**)UnitySDK::FromName("", "ELFOLOPGHCC")->GetStaticField(0x49758);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ELFOLOPGHCC")->GetStaticField(0x49760);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ELFOLOPGHCC")->GetStaticField(0xE300);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ELFOLOPGHCC")->GetStaticField(0xE301);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFOLOPGHCC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>*(*)())((::PBYTE)hIl2Cpp + ELFOLOPGHCC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELFOLOPGHCC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>(*)())((::PBYTE)hIl2Cpp + ELFOLOPGHCC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelItemGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelItemGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ELFOLOPGHCC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELFOLOPGHCC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFOLOPGHCC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFOLOPGHCC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ELFOLOPGHCC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELFOLOPGHCC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ELFOLOPGHCC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelItemGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelItemGroupRow*))((::PBYTE)hIl2Cpp + ELFOLOPGHCC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
