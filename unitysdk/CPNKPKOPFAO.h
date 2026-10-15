#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournLayerRoomRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPNKPKOPFAO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCC3A10)
#define CPNKPKOPFAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCC4010)
#define CPNKPKOPFAO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCC3B80)
#define CPNKPKOPFAO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCC3440)
#define CPNKPKOPFAO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCC36D0)
#define CPNKPKOPFAO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCC3C20)
#define CPNKPKOPFAO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCC3C70)
#define CPNKPKOPFAO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCC3A50)
#define CPNKPKOPFAO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCC3670)
#define CPNKPKOPFAO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCC3840)
#define CPNKPKOPFAO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCC3AE0)
#define CPNKPKOPFAO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCC33C0)

inline static constexpr unsigned int CPNKPKOPFAO_TypeDefinitionIndex = 14959;

	class CPNKPKOPFAO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPNKPKOPFAO")->GetStaticField(0x461F0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CPNKPKOPFAO")->GetStaticField(0x461F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>**)UnitySDK::FromName("", "CPNKPKOPFAO")->GetStaticField(0x46200);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPNKPKOPFAO")->GetStaticField(0x10BE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPNKPKOPFAO")->GetStaticField(0x10BE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNKPKOPFAO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CPNKPKOPFAO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPNKPKOPFAO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>(*)())((::PBYTE)hIl2Cpp + CPNKPKOPFAO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournLayerRoomRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueTournLayerRoomRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CPNKPKOPFAO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPNKPKOPFAO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNKPKOPFAO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNKPKOPFAO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPNKPKOPFAO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPNKPKOPFAO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CPNKPKOPFAO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournLayerRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournLayerRoomRow*))((::PBYTE)hIl2Cpp + CPNKPKOPFAO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
