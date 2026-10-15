#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyWorkingBuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOJGMELKHHJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C0E50)
#define KOJGMELKHHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0C1A30)
#define KOJGMELKHHJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0C11F0)
#define KOJGMELKHHJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0C0E90)
#define KOJGMELKHHJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0C1730)
#define KOJGMELKHHJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0C1290)
#define KOJGMELKHHJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0C12E0)
#define KOJGMELKHHJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C10C0)
#define KOJGMELKHHJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0C16D0)
#define KOJGMELKHHJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0C18A0)
#define KOJGMELKHHJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0C1150)
#define KOJGMELKHHJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0C1650)

inline static constexpr unsigned int KOJGMELKHHJ_TypeDefinitionIndex = 15348;

	class KOJGMELKHHJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow*>**)UnitySDK::FromName("", "KOJGMELKHHJ")->GetStaticField(0x39430);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KOJGMELKHHJ")->GetStaticField(0x39438);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KOJGMELKHHJ")->GetStaticField(0x39440);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KOJGMELKHHJ")->GetStaticField(0xC400);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KOJGMELKHHJ")->GetStaticField(0xC401);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOJGMELKHHJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOJGMELKHHJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOJGMELKHHJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOJGMELKHHJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KOJGMELKHHJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOJGMELKHHJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KOJGMELKHHJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyWorkingBuffConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyWorkingBuffConfigRow*))((::PBYTE)hIl2Cpp + KOJGMELKHHJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KOJGMELKHHJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOJGMELKHHJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + KOJGMELKHHJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyWorkingBuffConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyWorkingBuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KOJGMELKHHJ_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
