#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BKMGMFCJMFP;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMCGOPKLLJD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D305D80)
#define PMCGOPKLLJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D306350)
#define PMCGOPKLLJD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D305EF0)
#define PMCGOPKLLJD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D3057F0)
#define PMCGOPKLLJD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D305A80)
#define PMCGOPKLLJD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D305F90)
#define PMCGOPKLLJD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D305FE0)
#define PMCGOPKLLJD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D305DC0)
#define PMCGOPKLLJD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D305A20)
#define PMCGOPKLLJD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D305BF0)
#define PMCGOPKLLJD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D305E50)
#define PMCGOPKLLJD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D305770)

	class PMCGOPKLLJD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BKMGMFCJMFP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BKMGMFCJMFP*>**)UnitySDK::FromName("", "PMCGOPKLLJD")->GetStaticField(0x45D90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PMCGOPKLLJD")->GetStaticField(0x45D98);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PMCGOPKLLJD")->GetStaticField(0x45DA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PMCGOPKLLJD")->GetStaticField(0x10B40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PMCGOPKLLJD")->GetStaticField(0x10B41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMCGOPKLLJD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BKMGMFCJMFP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BKMGMFCJMFP*>*(*)())((::PBYTE)hIl2Cpp + PMCGOPKLLJD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMCGOPKLLJD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BKMGMFCJMFP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BKMGMFCJMFP*>(*)())((::PBYTE)hIl2Cpp + PMCGOPKLLJD_FPHGMAMDFHE_OFFSET))();
		}

		static ::BKMGMFCJMFP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BKMGMFCJMFP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PMCGOPKLLJD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMCGOPKLLJD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMCGOPKLLJD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMCGOPKLLJD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMCGOPKLLJD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMCGOPKLLJD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PMCGOPKLLJD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BKMGMFCJMFP* a1)
		{
			return ((::System::Void(*)(::BKMGMFCJMFP*))((::PBYTE)hIl2Cpp + PMCGOPKLLJD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
