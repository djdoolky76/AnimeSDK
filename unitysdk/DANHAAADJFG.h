#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FirstPerformanceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DANHAAADJFG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EBA0CE0)
#define DANHAAADJFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA12B0)
#define DANHAAADJFG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EBA0E50)
#define DANHAAADJFG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EBA0750)
#define DANHAAADJFG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EBA09E0)
#define DANHAAADJFG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EBA0EF0)
#define DANHAAADJFG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EBA0F40)
#define DANHAAADJFG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EBA0D20)
#define DANHAAADJFG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EBA0980)
#define DANHAAADJFG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EBA0B50)
#define DANHAAADJFG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EBA0DB0)
#define DANHAAADJFG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EBA06D0)

inline static constexpr unsigned int DANHAAADJFG_TypeDefinitionIndex = 13215;

	class DANHAAADJFG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FirstPerformanceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FirstPerformanceRow*>**)UnitySDK::FromName("", "DANHAAADJFG")->GetStaticField(0x38A90);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DANHAAADJFG")->GetStaticField(0x38A98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DANHAAADJFG")->GetStaticField(0x38AA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DANHAAADJFG")->GetStaticField(0xB2E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DANHAAADJFG")->GetStaticField(0xB2E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DANHAAADJFG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FirstPerformanceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FirstPerformanceRow*>*(*)())((::PBYTE)hIl2Cpp + DANHAAADJFG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DANHAAADJFG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FirstPerformanceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FirstPerformanceRow*>(*)())((::PBYTE)hIl2Cpp + DANHAAADJFG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FirstPerformanceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FirstPerformanceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DANHAAADJFG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DANHAAADJFG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DANHAAADJFG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DANHAAADJFG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DANHAAADJFG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DANHAAADJFG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DANHAAADJFG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FirstPerformanceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FirstPerformanceRow*))((::PBYTE)hIl2Cpp + DANHAAADJFG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
