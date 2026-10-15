#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournCocoonConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDDNIFOKEIF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E1E10)
#define CDDNIFOKEIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E23D0)
#define CDDNIFOKEIF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E1F80)
#define CDDNIFOKEIF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E18B0)
#define CDDNIFOKEIF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E1B40)
#define CDDNIFOKEIF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E2020)
#define CDDNIFOKEIF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E2070)
#define CDDNIFOKEIF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E1E50)
#define CDDNIFOKEIF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E1AE0)
#define CDDNIFOKEIF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E1C70)
#define CDDNIFOKEIF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E1EE0)
#define CDDNIFOKEIF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E1830)

inline static constexpr unsigned int CDDNIFOKEIF_TypeDefinitionIndex = 14988;

	class CDDNIFOKEIF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CDDNIFOKEIF")->GetStaticField(0x38FB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CDDNIFOKEIF")->GetStaticField(0x38FB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>**)UnitySDK::FromName("", "CDDNIFOKEIF")->GetStaticField(0x38FC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CDDNIFOKEIF")->GetStaticField(0xB880);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CDDNIFOKEIF")->GetStaticField(0xB881);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDNIFOKEIF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CDDNIFOKEIF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDDNIFOKEIF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>(*)())((::PBYTE)hIl2Cpp + CDDNIFOKEIF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournCocoonConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueTournCocoonConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CDDNIFOKEIF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDDNIFOKEIF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDNIFOKEIF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDNIFOKEIF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CDDNIFOKEIF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDDNIFOKEIF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CDDNIFOKEIF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournCocoonConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournCocoonConfigRow*))((::PBYTE)hIl2Cpp + CDDNIFOKEIF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
