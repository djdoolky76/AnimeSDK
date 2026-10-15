#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupSystemUnlockDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMKKFOFEEID_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E2140)
#define BMKKFOFEEID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E2710)
#define BMKKFOFEEID_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E22B0)
#define BMKKFOFEEID_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E1BB0)
#define BMKKFOFEEID_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E1E40)
#define BMKKFOFEEID_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E2350)
#define BMKKFOFEEID_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E23A0)
#define BMKKFOFEEID_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E2180)
#define BMKKFOFEEID_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E1DE0)
#define BMKKFOFEEID_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E1FB0)
#define BMKKFOFEEID_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E2210)
#define BMKKFOFEEID_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E1B30)

inline static constexpr unsigned int BMKKFOFEEID_TypeDefinitionIndex = 13336;

	class BMKKFOFEEID : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BMKKFOFEEID")->GetStaticField(0x38180);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>**)UnitySDK::FromName("", "BMKKFOFEEID")->GetStaticField(0x38188);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMKKFOFEEID")->GetStaticField(0x38190);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BMKKFOFEEID")->GetStaticField(0xBF80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BMKKFOFEEID")->GetStaticField(0xBF81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMKKFOFEEID_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>*(*)())((::PBYTE)hIl2Cpp + BMKKFOFEEID_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMKKFOFEEID_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>(*)())((::PBYTE)hIl2Cpp + BMKKFOFEEID_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GroupSystemUnlockDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GroupSystemUnlockDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BMKKFOFEEID_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMKKFOFEEID_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMKKFOFEEID_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMKKFOFEEID_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BMKKFOFEEID_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMKKFOFEEID_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BMKKFOFEEID_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GroupSystemUnlockDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GroupSystemUnlockDataRow*))((::PBYTE)hIl2Cpp + BMKKFOFEEID_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
