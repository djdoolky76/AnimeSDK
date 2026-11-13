#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyAreaConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOLOPNGDBGF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA38F40)
#define FOLOPNGDBGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA39A50)
#define FOLOPNGDBGF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA392E0)
#define FOLOPNGDBGF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA38F80)
#define FOLOPNGDBGF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA397D0)
#define FOLOPNGDBGF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA39380)
#define FOLOPNGDBGF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA393D0)
#define FOLOPNGDBGF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA391B0)
#define FOLOPNGDBGF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA39770)
#define FOLOPNGDBGF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA39900)
#define FOLOPNGDBGF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA39240)
#define FOLOPNGDBGF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA396F0)

inline static constexpr unsigned int FOLOPNGDBGF_TypeDefinitionIndex = 15508;

	class FOLOPNGDBGF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaConfigRow*>**)UnitySDK::FromName("", "FOLOPNGDBGF")->GetStaticField(0xAD90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FOLOPNGDBGF")->GetStaticField(0xAD98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FOLOPNGDBGF")->GetStaticField(0xADA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FOLOPNGDBGF")->GetStaticField(0x1320);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FOLOPNGDBGF")->GetStaticField(0x1321);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOLOPNGDBGF_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOLOPNGDBGF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOLOPNGDBGF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOLOPNGDBGF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOLOPNGDBGF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOLOPNGDBGF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FOLOPNGDBGF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyAreaConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyAreaConfigRow*))((::PBYTE)hIl2Cpp + FOLOPNGDBGF_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FOLOPNGDBGF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOLOPNGDBGF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaConfigRow*>(*)())((::PBYTE)hIl2Cpp + FOLOPNGDBGF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyAreaConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyAreaConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOLOPNGDBGF_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
