#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpotLightRemarkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDMOEIKDNMG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E94E380)
#define LDMOEIKDNMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94E950)
#define LDMOEIKDNMG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E94E4F0)
#define LDMOEIKDNMG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E94DDF0)
#define LDMOEIKDNMG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E94E080)
#define LDMOEIKDNMG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E94E590)
#define LDMOEIKDNMG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E94E5E0)
#define LDMOEIKDNMG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E94E3C0)
#define LDMOEIKDNMG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E94E020)
#define LDMOEIKDNMG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E94E1F0)
#define LDMOEIKDNMG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E94E450)
#define LDMOEIKDNMG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E94DD70)

inline static constexpr unsigned int LDMOEIKDNMG_TypeDefinitionIndex = 13724;

	class LDMOEIKDNMG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightRemarkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightRemarkRow*>**)UnitySDK::FromName("", "LDMOEIKDNMG")->GetStaticField(0x38E50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LDMOEIKDNMG")->GetStaticField(0x38E58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LDMOEIKDNMG")->GetStaticField(0x38E60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LDMOEIKDNMG")->GetStaticField(0xB410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LDMOEIKDNMG")->GetStaticField(0xB411);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDMOEIKDNMG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightRemarkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightRemarkRow*>*(*)())((::PBYTE)hIl2Cpp + LDMOEIKDNMG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDMOEIKDNMG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightRemarkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightRemarkRow*>(*)())((::PBYTE)hIl2Cpp + LDMOEIKDNMG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSpotLightRemarkRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSpotLightRemarkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LDMOEIKDNMG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDMOEIKDNMG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDMOEIKDNMG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDMOEIKDNMG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LDMOEIKDNMG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LDMOEIKDNMG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LDMOEIKDNMG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSpotLightRemarkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSpotLightRemarkRow*))((::PBYTE)hIl2Cpp + LDMOEIKDNMG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
