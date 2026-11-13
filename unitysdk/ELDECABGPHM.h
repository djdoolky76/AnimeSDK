#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightJadeUniqueTraitShopConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELDECABGPHM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F126360)
#define ELDECABGPHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F126930)
#define ELDECABGPHM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F1264D0)
#define ELDECABGPHM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F125DD0)
#define ELDECABGPHM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F126060)
#define ELDECABGPHM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F126570)
#define ELDECABGPHM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F1265C0)
#define ELDECABGPHM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F1263A0)
#define ELDECABGPHM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F126000)
#define ELDECABGPHM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F1261D0)
#define ELDECABGPHM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F126430)
#define ELDECABGPHM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F125D50)

inline static constexpr unsigned int ELDECABGPHM_TypeDefinitionIndex = 13862;

	class ELDECABGPHM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ELDECABGPHM")->GetStaticField(0x494F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow*>**)UnitySDK::FromName("", "ELDECABGPHM")->GetStaticField(0x494F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ELDECABGPHM")->GetStaticField(0x49500);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ELDECABGPHM")->GetStaticField(0xE2D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ELDECABGPHM")->GetStaticField(0xE2D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELDECABGPHM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ELDECABGPHM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELDECABGPHM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow*>(*)())((::PBYTE)hIl2Cpp + ELDECABGPHM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ELDECABGPHM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELDECABGPHM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELDECABGPHM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELDECABGPHM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ELDECABGPHM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELDECABGPHM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ELDECABGPHM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow*))((::PBYTE)hIl2Cpp + ELDECABGPHM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
