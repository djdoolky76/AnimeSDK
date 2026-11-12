#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIIHPECEIGK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0F7A00)
#define IIIHPECEIGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F8830)
#define IIIHPECEIGK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0F7B70)
#define IIIHPECEIGK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0F7470)
#define IIIHPECEIGK_FHCFLPPGPAD_OFFSET UNITYSDK_OFFSET(0x1E0F7F80)
#define IIIHPECEIGK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0F7700)
#define IIIHPECEIGK_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1E0F87A0)
#define IIIHPECEIGK_HIHCFCDFMPF_OFFSET UNITYSDK_OFFSET(0x1E0F8160)
#define IIIHPECEIGK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0F7C10)
#define IIIHPECEIGK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0F7C60)
#define IIIHPECEIGK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0F7A40)
#define IIIHPECEIGK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0F76A0)
#define IIIHPECEIGK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0F7870)
#define IIIHPECEIGK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0F7AD0)
#define IIIHPECEIGK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0F73F0)

inline static constexpr unsigned int IIIHPECEIGK_TypeDefinitionIndex = 11933;

	class IIIHPECEIGK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>**)UnitySDK::FromName("", "IIIHPECEIGK")->GetStaticField(0x1B450);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultiPlayerGameMode, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MarblePVPRankConfigRow*>*>** StaticGet_PGKFLFOODJJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultiPlayerGameMode, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MarblePVPRankConfigRow*>*>**)UnitySDK::FromName("", "IIIHPECEIGK")->GetStaticField(0x1B458);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IIIHPECEIGK")->GetStaticField(0x1B460);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IIIHPECEIGK")->GetStaticField(0x1B468);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IIIHPECEIGK")->GetStaticField(0x5A20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IIIHPECEIGK")->GetStaticField(0x5A21);
		}

		static ::System::Boolean* StaticGet_LINNHMPNCJG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IIIHPECEIGK")->GetStaticField(0x5A22);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIIHPECEIGK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IIIHPECEIGK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IIIHPECEIGK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + IIIHPECEIGK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarblePVPRankConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IIIHPECEIGK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IIIHPECEIGK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIIHPECEIGK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIIHPECEIGK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IIIHPECEIGK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IIIHPECEIGK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IIIHPECEIGK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarblePVPRankConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + IIIHPECEIGK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::RPG::GameCore::MarblePVPRankConfigRow* FHCFLPPGPAD(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + IIIHPECEIGK_FHCFLPPGPAD_OFFSET))(a1, a2);
		}

		static ::System::Void HIHCFCDFMPF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIIHPECEIGK_HIHCFCDFMPF_OFFSET))();
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIIHPECEIGK_HFBAFEEPOLN_OFFSET))();
		}

	};
