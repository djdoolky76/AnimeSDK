#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ENpcA07Row; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKGFNDFJMLN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE5D900)
#define GKGFNDFJMLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5DED0)
#define GKGFNDFJMLN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE5DA70)
#define GKGFNDFJMLN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE5D3F0)
#define GKGFNDFJMLN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE5D680)
#define GKGFNDFJMLN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE5DB10)
#define GKGFNDFJMLN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE5DB60)
#define GKGFNDFJMLN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE5D940)
#define GKGFNDFJMLN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE5D620)
#define GKGFNDFJMLN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE5D7B0)
#define GKGFNDFJMLN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE5D9D0)
#define GKGFNDFJMLN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE5D370)

inline static constexpr unsigned int GKGFNDFJMLN_TypeDefinitionIndex = 13249;

	class GKGFNDFJMLN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GKGFNDFJMLN")->GetStaticField(0x18D40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>**)UnitySDK::FromName("", "GKGFNDFJMLN")->GetStaticField(0x18D48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GKGFNDFJMLN")->GetStaticField(0x18D50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GKGFNDFJMLN")->GetStaticField(0x5B60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GKGFNDFJMLN")->GetStaticField(0x5B61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKGFNDFJMLN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>*(*)())((::PBYTE)hIl2Cpp + GKGFNDFJMLN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKGFNDFJMLN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>(*)())((::PBYTE)hIl2Cpp + GKGFNDFJMLN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ENpcA07Row* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ENpcA07Row*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GKGFNDFJMLN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKGFNDFJMLN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKGFNDFJMLN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKGFNDFJMLN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GKGFNDFJMLN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKGFNDFJMLN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GKGFNDFJMLN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ENpcA07Row* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ENpcA07Row*))((::PBYTE)hIl2Cpp + GKGFNDFJMLN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
