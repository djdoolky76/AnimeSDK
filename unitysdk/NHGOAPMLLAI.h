#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesUseItemRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHGOAPMLLAI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D20E000)
#define NHGOAPMLLAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20E5D0)
#define NHGOAPMLLAI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D20E170)
#define NHGOAPMLLAI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D20DAB0)
#define NHGOAPMLLAI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D20DD40)
#define NHGOAPMLLAI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D20E210)
#define NHGOAPMLLAI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D20E260)
#define NHGOAPMLLAI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D20E040)
#define NHGOAPMLLAI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D20DCE0)
#define NHGOAPMLLAI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D20DE70)
#define NHGOAPMLLAI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D20E0D0)
#define NHGOAPMLLAI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D20DA30)

	class NHGOAPMLLAI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>**)UnitySDK::FromName("", "NHGOAPMLLAI")->GetStaticField(0x2E820);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NHGOAPMLLAI")->GetStaticField(0x2E828);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NHGOAPMLLAI")->GetStaticField(0x2E830);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NHGOAPMLLAI")->GetStaticField(0x9980);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NHGOAPMLLAI")->GetStaticField(0x9981);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGOAPMLLAI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>*(*)())((::PBYTE)hIl2Cpp + NHGOAPMLLAI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHGOAPMLLAI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>(*)())((::PBYTE)hIl2Cpp + NHGOAPMLLAI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesUseItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesUseItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NHGOAPMLLAI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHGOAPMLLAI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGOAPMLLAI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGOAPMLLAI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NHGOAPMLLAI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NHGOAPMLLAI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NHGOAPMLLAI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesUseItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesUseItemRow*))((::PBYTE)hIl2Cpp + NHGOAPMLLAI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
