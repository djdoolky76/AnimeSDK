#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaTypeBasicInfoRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNOAGHLDCOI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1DA6C0)
#define MNOAGHLDCOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DAC40)
#define MNOAGHLDCOI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1DA830)
#define MNOAGHLDCOI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1DA170)
#define MNOAGHLDCOI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1DA400)
#define MNOAGHLDCOI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1DA8D0)
#define MNOAGHLDCOI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1DA920)
#define MNOAGHLDCOI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1DA700)
#define MNOAGHLDCOI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1DA3A0)
#define MNOAGHLDCOI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1DA570)
#define MNOAGHLDCOI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1DA790)
#define MNOAGHLDCOI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1DA0F0)

inline static constexpr unsigned int MNOAGHLDCOI_TypeDefinitionIndex = 13359;

	class MNOAGHLDCOI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MNOAGHLDCOI")->GetStaticField(0x2AA80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>**)UnitySDK::FromName("", "MNOAGHLDCOI")->GetStaticField(0x2AA88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNOAGHLDCOI")->GetStaticField(0x2AA90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNOAGHLDCOI")->GetStaticField(0x85F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNOAGHLDCOI")->GetStaticField(0x85F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNOAGHLDCOI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>*(*)())((::PBYTE)hIl2Cpp + MNOAGHLDCOI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNOAGHLDCOI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>(*)())((::PBYTE)hIl2Cpp + MNOAGHLDCOI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GachaTypeBasicInfoRow* LMBKNCAIDLC(::RPG::GameCore::GachaType a1)
		{
			return ((::RPG::GameCore::GachaTypeBasicInfoRow*(*)(::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + MNOAGHLDCOI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNOAGHLDCOI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNOAGHLDCOI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNOAGHLDCOI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MNOAGHLDCOI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNOAGHLDCOI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MNOAGHLDCOI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GachaTypeBasicInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GachaTypeBasicInfoRow*))((::PBYTE)hIl2Cpp + MNOAGHLDCOI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
