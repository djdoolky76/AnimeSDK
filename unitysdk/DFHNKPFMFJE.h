#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantFOConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFHNKPFMFJE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD193C0)
#define DFHNKPFMFJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD19990)
#define DFHNKPFMFJE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD19530)
#define DFHNKPFMFJE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD18E30)
#define DFHNKPFMFJE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD190C0)
#define DFHNKPFMFJE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD195D0)
#define DFHNKPFMFJE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD19620)
#define DFHNKPFMFJE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD19400)
#define DFHNKPFMFJE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD19060)
#define DFHNKPFMFJE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD19230)
#define DFHNKPFMFJE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD19490)
#define DFHNKPFMFJE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD18DB0)

inline static constexpr unsigned int DFHNKPFMFJE_TypeDefinitionIndex = 11361;

	class DFHNKPFMFJE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DFHNKPFMFJE")->GetStaticField(0x4C0D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFOConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFOConfigRow*>**)UnitySDK::FromName("", "DFHNKPFMFJE")->GetStaticField(0x4C0D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFHNKPFMFJE")->GetStaticField(0x4C0E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFHNKPFMFJE")->GetStaticField(0x11900);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFHNKPFMFJE")->GetStaticField(0x11901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFHNKPFMFJE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFOConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFOConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DFHNKPFMFJE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFHNKPFMFJE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFOConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFOConfigRow*>(*)())((::PBYTE)hIl2Cpp + DFHNKPFMFJE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantFOConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantFOConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DFHNKPFMFJE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFHNKPFMFJE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFHNKPFMFJE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFHNKPFMFJE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFHNKPFMFJE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFHNKPFMFJE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DFHNKPFMFJE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantFOConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantFOConfigRow*))((::PBYTE)hIl2Cpp + DFHNKPFMFJE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
