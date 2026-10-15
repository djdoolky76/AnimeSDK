#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirAnnouncementRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFNKKPBOFBE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0EA8C0)
#define LFNKKPBOFBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EAE90)
#define LFNKKPBOFBE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0EAA30)
#define LFNKKPBOFBE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0EA330)
#define LFNKKPBOFBE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0EA5C0)
#define LFNKKPBOFBE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0EAAD0)
#define LFNKKPBOFBE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0EAB20)
#define LFNKKPBOFBE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0EA900)
#define LFNKKPBOFBE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0EA560)
#define LFNKKPBOFBE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0EA730)
#define LFNKKPBOFBE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0EA990)
#define LFNKKPBOFBE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0EA2B0)

inline static constexpr unsigned int LFNKKPBOFBE_TypeDefinitionIndex = 12172;

	class LFNKKPBOFBE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LFNKKPBOFBE")->GetStaticField(0x3CCD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAnnouncementRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAnnouncementRow*>**)UnitySDK::FromName("", "LFNKKPBOFBE")->GetStaticField(0x3CCD8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LFNKKPBOFBE")->GetStaticField(0x3CCE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LFNKKPBOFBE")->GetStaticField(0xD080);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LFNKKPBOFBE")->GetStaticField(0xD081);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFNKKPBOFBE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAnnouncementRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAnnouncementRow*>*(*)())((::PBYTE)hIl2Cpp + LFNKKPBOFBE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFNKKPBOFBE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAnnouncementRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAnnouncementRow*>(*)())((::PBYTE)hIl2Cpp + LFNKKPBOFBE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirAnnouncementRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirAnnouncementRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LFNKKPBOFBE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFNKKPBOFBE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFNKKPBOFBE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFNKKPBOFBE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LFNKKPBOFBE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFNKKPBOFBE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LFNKKPBOFBE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirAnnouncementRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirAnnouncementRow*))((::PBYTE)hIl2Cpp + LFNKKPBOFBE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
