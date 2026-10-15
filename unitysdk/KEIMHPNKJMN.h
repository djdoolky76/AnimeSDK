#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PunkLordGroupType.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PunkLordRareConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KEIMHPNKJMN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D05CD50)
#define KEIMHPNKJMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D05D350)
#define KEIMHPNKJMN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D05CEC0)
#define KEIMHPNKJMN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D05C770)
#define KEIMHPNKJMN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D05CA00)
#define KEIMHPNKJMN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D05CF60)
#define KEIMHPNKJMN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D05CFB0)
#define KEIMHPNKJMN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D05CD90)
#define KEIMHPNKJMN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D05C9A0)
#define KEIMHPNKJMN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D05CB70)
#define KEIMHPNKJMN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D05CE20)
#define KEIMHPNKJMN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D05C6F0)

inline static constexpr unsigned int KEIMHPNKJMN_TypeDefinitionIndex = 12302;

	class KEIMHPNKJMN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KEIMHPNKJMN")->GetStaticField(0x342A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KEIMHPNKJMN")->GetStaticField(0x342A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>**)UnitySDK::FromName("", "KEIMHPNKJMN")->GetStaticField(0x342B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KEIMHPNKJMN")->GetStaticField(0xA970);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KEIMHPNKJMN")->GetStaticField(0xA971);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEIMHPNKJMN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KEIMHPNKJMN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KEIMHPNKJMN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>(*)())((::PBYTE)hIl2Cpp + KEIMHPNKJMN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PunkLordRareConfigRow* LMBKNCAIDLC(::RPG::GameCore::PunkLordGroupType a1, ::RPG::GameCore::PunkLordMonsterRare a2)
		{
			return ((::RPG::GameCore::PunkLordRareConfigRow*(*)(::RPG::GameCore::PunkLordGroupType, ::RPG::GameCore::PunkLordMonsterRare))((::PBYTE)hIl2Cpp + KEIMHPNKJMN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KEIMHPNKJMN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEIMHPNKJMN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEIMHPNKJMN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KEIMHPNKJMN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KEIMHPNKJMN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KEIMHPNKJMN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PunkLordRareConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PunkLordRareConfigRow*))((::PBYTE)hIl2Cpp + KEIMHPNKJMN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
