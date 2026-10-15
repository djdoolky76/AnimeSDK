#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCardSpecialShowConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGJMNBICEJL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD7D610)
#define EGJMNBICEJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7E1F0)
#define EGJMNBICEJL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD7D9B0)
#define EGJMNBICEJL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD7D650)
#define EGJMNBICEJL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD7DEF0)
#define EGJMNBICEJL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD7DA50)
#define EGJMNBICEJL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD7DAA0)
#define EGJMNBICEJL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD7D880)
#define EGJMNBICEJL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD7DE90)
#define EGJMNBICEJL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD7E060)
#define EGJMNBICEJL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD7D910)
#define EGJMNBICEJL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD7DE10)

inline static constexpr unsigned int EGJMNBICEJL_TypeDefinitionIndex = 15345;

	class EGJMNBICEJL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EGJMNBICEJL")->GetStaticField(0x53DE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EGJMNBICEJL")->GetStaticField(0x53DE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*>**)UnitySDK::FromName("", "EGJMNBICEJL")->GetStaticField(0x53DF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EGJMNBICEJL")->GetStaticField(0x129B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EGJMNBICEJL")->GetStaticField(0x129B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJMNBICEJL_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EGJMNBICEJL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJMNBICEJL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJMNBICEJL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EGJMNBICEJL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EGJMNBICEJL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EGJMNBICEJL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyCardSpecialShowConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*))((::PBYTE)hIl2Cpp + EGJMNBICEJL_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EGJMNBICEJL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EGJMNBICEJL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*>(*)())((::PBYTE)hIl2Cpp + EGJMNBICEJL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EGJMNBICEJL_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
