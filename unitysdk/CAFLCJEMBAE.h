#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemGiftPackDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define CAFLCJEMBAE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9FE850)
#define CAFLCJEMBAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9FEE50)
#define CAFLCJEMBAE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9FE9C0)
#define CAFLCJEMBAE_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D9FE600)
#define CAFLCJEMBAE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9FE200)
#define CAFLCJEMBAE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9FE490)
#define CAFLCJEMBAE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9FEA60)
#define CAFLCJEMBAE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9FEAB0)
#define CAFLCJEMBAE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9FE890)
#define CAFLCJEMBAE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9FE430)
#define CAFLCJEMBAE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9FE680)
#define CAFLCJEMBAE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9FE920)
#define CAFLCJEMBAE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9FE180)

inline static constexpr unsigned int CAFLCJEMBAE_TypeDefinitionIndex = 13874;

	class CAFLCJEMBAE : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CAFLCJEMBAE")->GetStaticField(0x3A670);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>**)UnitySDK::FromName("", "CAFLCJEMBAE")->GetStaticField(0x3A678);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CAFLCJEMBAE")->GetStaticField(0x3A680);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CAFLCJEMBAE")->GetStaticField(0xC720);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CAFLCJEMBAE")->GetStaticField(0xC721);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAFLCJEMBAE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>*(*)())((::PBYTE)hIl2Cpp + CAFLCJEMBAE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CAFLCJEMBAE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>(*)())((::PBYTE)hIl2Cpp + CAFLCJEMBAE_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + CAFLCJEMBAE_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ItemGiftPackDataRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ItemGiftPackDataRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CAFLCJEMBAE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CAFLCJEMBAE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAFLCJEMBAE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAFLCJEMBAE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CAFLCJEMBAE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CAFLCJEMBAE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CAFLCJEMBAE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ItemGiftPackDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemGiftPackDataRow*))((::PBYTE)hIl2Cpp + CAFLCJEMBAE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
