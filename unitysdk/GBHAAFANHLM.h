#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumCommentsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBHAAFANHLM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE25240)
#define GBHAAFANHLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE25810)
#define GBHAAFANHLM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE253B0)
#define GBHAAFANHLM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE24CB0)
#define GBHAAFANHLM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE24F40)
#define GBHAAFANHLM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE25450)
#define GBHAAFANHLM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE254A0)
#define GBHAAFANHLM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE25280)
#define GBHAAFANHLM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE24EE0)
#define GBHAAFANHLM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE250B0)
#define GBHAAFANHLM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE25310)
#define GBHAAFANHLM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE24C30)

inline static constexpr unsigned int GBHAAFANHLM_TypeDefinitionIndex = 14259;

	class GBHAAFANHLM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GBHAAFANHLM")->GetStaticField(0x164D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GBHAAFANHLM")->GetStaticField(0x164D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>**)UnitySDK::FromName("", "GBHAAFANHLM")->GetStaticField(0x164E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GBHAAFANHLM")->GetStaticField(0x5440);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBHAAFANHLM")->GetStaticField(0x5441);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHAAFANHLM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>*(*)())((::PBYTE)hIl2Cpp + GBHAAFANHLM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBHAAFANHLM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>(*)())((::PBYTE)hIl2Cpp + GBHAAFANHLM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MuseumCommentsRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MuseumCommentsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GBHAAFANHLM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBHAAFANHLM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHAAFANHLM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHAAFANHLM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GBHAAFANHLM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBHAAFANHLM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GBHAAFANHLM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MuseumCommentsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumCommentsRow*))((::PBYTE)hIl2Cpp + GBHAAFANHLM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
