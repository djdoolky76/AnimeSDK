#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHandBookEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMHEDCFFBGN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E7A8760)
#define PMHEDCFFBGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A8CE0)
#define PMHEDCFFBGN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E7A88D0)
#define PMHEDCFFBGN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E7A8210)
#define PMHEDCFFBGN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E7A84A0)
#define PMHEDCFFBGN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E7A8970)
#define PMHEDCFFBGN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E7A89C0)
#define PMHEDCFFBGN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7A87A0)
#define PMHEDCFFBGN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E7A8440)
#define PMHEDCFFBGN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E7A85D0)
#define PMHEDCFFBGN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E7A8830)
#define PMHEDCFFBGN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E7A8190)

inline static constexpr unsigned int PMHEDCFFBGN_TypeDefinitionIndex = 15196;

	class PMHEDCFFBGN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PMHEDCFFBGN")->GetStaticField(0x421C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandBookEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandBookEventRow*>**)UnitySDK::FromName("", "PMHEDCFFBGN")->GetStaticField(0x421C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PMHEDCFFBGN")->GetStaticField(0x421D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PMHEDCFFBGN")->GetStaticField(0xD460);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PMHEDCFFBGN")->GetStaticField(0xD461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMHEDCFFBGN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandBookEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandBookEventRow*>*(*)())((::PBYTE)hIl2Cpp + PMHEDCFFBGN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMHEDCFFBGN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandBookEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandBookEventRow*>(*)())((::PBYTE)hIl2Cpp + PMHEDCFFBGN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournHandBookEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournHandBookEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PMHEDCFFBGN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMHEDCFFBGN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMHEDCFFBGN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMHEDCFFBGN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMHEDCFFBGN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMHEDCFFBGN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PMHEDCFFBGN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournHandBookEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournHandBookEventRow*))((::PBYTE)hIl2Cpp + PMHEDCFFBGN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
