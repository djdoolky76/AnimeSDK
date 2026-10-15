#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPJMGKJCEFD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9FA910)
#define BPJMGKJCEFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9FAE90)
#define BPJMGKJCEFD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9FAA80)
#define BPJMGKJCEFD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9FA3C0)
#define BPJMGKJCEFD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9FA650)
#define BPJMGKJCEFD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9FAB20)
#define BPJMGKJCEFD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9FAB70)
#define BPJMGKJCEFD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9FA950)
#define BPJMGKJCEFD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9FA5F0)
#define BPJMGKJCEFD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9FA780)
#define BPJMGKJCEFD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9FA9E0)
#define BPJMGKJCEFD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9FA340)

inline static constexpr unsigned int BPJMGKJCEFD_TypeDefinitionIndex = 12190;

	class BPJMGKJCEFD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>**)UnitySDK::FromName("", "BPJMGKJCEFD")->GetStaticField(0x39FC0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BPJMGKJCEFD")->GetStaticField(0x39FC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BPJMGKJCEFD")->GetStaticField(0x39FD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BPJMGKJCEFD")->GetStaticField(0xC5E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BPJMGKJCEFD")->GetStaticField(0xC5E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPJMGKJCEFD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + BPJMGKJCEFD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPJMGKJCEFD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>(*)())((::PBYTE)hIl2Cpp + BPJMGKJCEFD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAvatarRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesAvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BPJMGKJCEFD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPJMGKJCEFD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPJMGKJCEFD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPJMGKJCEFD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BPJMGKJCEFD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BPJMGKJCEFD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BPJMGKJCEFD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesAvatarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarRow*))((::PBYTE)hIl2Cpp + BPJMGKJCEFD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
