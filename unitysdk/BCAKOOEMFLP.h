#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/TrainPartyGameRecordType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyLogConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCAKOOEMFLP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF70B0)
#define BCAKOOEMFLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF7C90)
#define BCAKOOEMFLP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF7450)
#define BCAKOOEMFLP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF70F0)
#define BCAKOOEMFLP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF7990)
#define BCAKOOEMFLP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF74F0)
#define BCAKOOEMFLP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF7540)
#define BCAKOOEMFLP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF7320)
#define BCAKOOEMFLP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF7930)
#define BCAKOOEMFLP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF7B00)
#define BCAKOOEMFLP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF73B0)
#define BCAKOOEMFLP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF78B0)

inline static constexpr unsigned int BCAKOOEMFLP_TypeDefinitionIndex = 15350;

	class BCAKOOEMFLP : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BCAKOOEMFLP")->GetStaticField(0x3DC40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>**)UnitySDK::FromName("", "BCAKOOEMFLP")->GetStaticField(0x3DC48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BCAKOOEMFLP")->GetStaticField(0x3DC50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BCAKOOEMFLP")->GetStaticField(0xD3A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BCAKOOEMFLP")->GetStaticField(0xD3A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCAKOOEMFLP_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BCAKOOEMFLP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCAKOOEMFLP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCAKOOEMFLP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BCAKOOEMFLP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCAKOOEMFLP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BCAKOOEMFLP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyLogConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyLogConfigRow*))((::PBYTE)hIl2Cpp + BCAKOOEMFLP_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BCAKOOEMFLP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BCAKOOEMFLP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>(*)())((::PBYTE)hIl2Cpp + BCAKOOEMFLP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyLogConfigRow* LMBKNCAIDLC(::RPG::GameCore::TrainPartyGameRecordType a1)
		{
			return ((::RPG::GameCore::TrainPartyLogConfigRow*(*)(::RPG::GameCore::TrainPartyGameRecordType))((::PBYTE)hIl2Cpp + BCAKOOEMFLP_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
