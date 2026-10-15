#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BDELHFKGEEI;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPIHHCLFLDG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCBF1E0)
#define CPIHHCLFLDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCBF760)
#define CPIHHCLFLDG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCBF350)
#define CPIHHCLFLDG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCBEC90)
#define CPIHHCLFLDG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCBEF20)
#define CPIHHCLFLDG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCBF3F0)
#define CPIHHCLFLDG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCBF440)
#define CPIHHCLFLDG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCBF220)
#define CPIHHCLFLDG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCBEEC0)
#define CPIHHCLFLDG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCBF090)
#define CPIHHCLFLDG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCBF2B0)
#define CPIHHCLFLDG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCBEC10)

inline static constexpr unsigned int CPIHHCLFLDG_TypeDefinitionIndex = 12496;

	class CPIHHCLFLDG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CPIHHCLFLDG")->GetStaticField(0x45D60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPIHHCLFLDG")->GetStaticField(0x45D68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BDELHFKGEEI*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BDELHFKGEEI*>**)UnitySDK::FromName("", "CPIHHCLFLDG")->GetStaticField(0x45D70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPIHHCLFLDG")->GetStaticField(0x10B30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPIHHCLFLDG")->GetStaticField(0x10B31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPIHHCLFLDG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BDELHFKGEEI*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BDELHFKGEEI*>*(*)())((::PBYTE)hIl2Cpp + CPIHHCLFLDG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPIHHCLFLDG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BDELHFKGEEI*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BDELHFKGEEI*>(*)())((::PBYTE)hIl2Cpp + CPIHHCLFLDG_FPHGMAMDFHE_OFFSET))();
		}

		static ::BDELHFKGEEI* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BDELHFKGEEI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CPIHHCLFLDG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPIHHCLFLDG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPIHHCLFLDG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPIHHCLFLDG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPIHHCLFLDG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPIHHCLFLDG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CPIHHCLFLDG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BDELHFKGEEI* a1)
		{
			return ((::System::Void(*)(::BDELHFKGEEI*))((::PBYTE)hIl2Cpp + CPIHHCLFLDG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
