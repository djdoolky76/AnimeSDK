#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRandomBonusPoolConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBMMFHHDLHF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C69B0)
#define PBMMFHHDLHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C6F80)
#define PBMMFHHDLHF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C6B20)
#define PBMMFHHDLHF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C6420)
#define PBMMFHHDLHF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C66B0)
#define PBMMFHHDLHF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C6BC0)
#define PBMMFHHDLHF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C6C10)
#define PBMMFHHDLHF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C69F0)
#define PBMMFHHDLHF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C6650)
#define PBMMFHHDLHF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C6820)
#define PBMMFHHDLHF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C6A80)
#define PBMMFHHDLHF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C63A0)

	class PBMMFHHDLHF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PBMMFHHDLHF")->GetStaticField(0x3E140);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PBMMFHHDLHF")->GetStaticField(0x3E148);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>**)UnitySDK::FromName("", "PBMMFHHDLHF")->GetStaticField(0x3E150);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PBMMFHHDLHF")->GetStaticField(0xD490);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PBMMFHHDLHF")->GetStaticField(0xD491);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBMMFHHDLHF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PBMMFHHDLHF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBMMFHHDLHF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>(*)())((::PBYTE)hIl2Cpp + PBMMFHHDLHF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRandomBonusPoolConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightRandomBonusPoolConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PBMMFHHDLHF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBMMFHHDLHF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBMMFHHDLHF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBMMFHHDLHF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PBMMFHHDLHF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBMMFHHDLHF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PBMMFHHDLHF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRandomBonusPoolConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRandomBonusPoolConfigRow*))((::PBYTE)hIl2Cpp + PBMMFHHDLHF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
