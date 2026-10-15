#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirTagDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNKLGPIEDJM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E4160)
#define PNKLGPIEDJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E4730)
#define PNKLGPIEDJM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E42D0)
#define PNKLGPIEDJM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E3BD0)
#define PNKLGPIEDJM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E3E60)
#define PNKLGPIEDJM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E4370)
#define PNKLGPIEDJM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E43C0)
#define PNKLGPIEDJM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E41A0)
#define PNKLGPIEDJM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E3E00)
#define PNKLGPIEDJM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E3FD0)
#define PNKLGPIEDJM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E4230)
#define PNKLGPIEDJM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E3B50)

inline static constexpr unsigned int PNKLGPIEDJM_TypeDefinitionIndex = 12168;

	class PNKLGPIEDJM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>**)UnitySDK::FromName("", "PNKLGPIEDJM")->GetStaticField(0x52100);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PNKLGPIEDJM")->GetStaticField(0x52108);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNKLGPIEDJM")->GetStaticField(0x52110);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNKLGPIEDJM")->GetStaticField(0x12750);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNKLGPIEDJM")->GetStaticField(0x12751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNKLGPIEDJM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + PNKLGPIEDJM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNKLGPIEDJM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>(*)())((::PBYTE)hIl2Cpp + PNKLGPIEDJM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirTagDisplayRow* LMBKNCAIDLC(::RPG::GameCore::PixAirEquipTag a1)
		{
			return ((::RPG::GameCore::PixAirTagDisplayRow*(*)(::RPG::GameCore::PixAirEquipTag))((::PBYTE)hIl2Cpp + PNKLGPIEDJM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNKLGPIEDJM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNKLGPIEDJM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNKLGPIEDJM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNKLGPIEDJM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNKLGPIEDJM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNKLGPIEDJM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirTagDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirTagDisplayRow*))((::PBYTE)hIl2Cpp + PNKLGPIEDJM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
