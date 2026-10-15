#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRebateConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHHJJJBAHKL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0004D0)
#define JHHJJJBAHKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D000A50)
#define JHHJJJBAHKL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D000640)
#define JHHJJJBAHKL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CFFFFC0)
#define JHHJJJBAHKL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D000250)
#define JHHJJJBAHKL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0006E0)
#define JHHJJJBAHKL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D000730)
#define JHHJJJBAHKL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D000510)
#define JHHJJJBAHKL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0001F0)
#define JHHJJJBAHKL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D000380)
#define JHHJJJBAHKL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0005A0)
#define JHHJJJBAHKL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CFFFF40)

inline static constexpr unsigned int JHHJJJBAHKL_TypeDefinitionIndex = 12330;

	class JHHJJJBAHKL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JHHJJJBAHKL")->GetStaticField(0x2E3E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JHHJJJBAHKL")->GetStaticField(0x2E3E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateConfigRow*>**)UnitySDK::FromName("", "JHHJJJBAHKL")->GetStaticField(0x2E3F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JHHJJJBAHKL")->GetStaticField(0x9940);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JHHJJJBAHKL")->GetStaticField(0x9941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHHJJJBAHKL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JHHJJJBAHKL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHHJJJBAHKL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateConfigRow*>(*)())((::PBYTE)hIl2Cpp + JHHJJJBAHKL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRebateConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRebateConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JHHJJJBAHKL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHHJJJBAHKL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHHJJJBAHKL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHHJJJBAHKL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JHHJJJBAHKL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JHHJJJBAHKL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JHHJJJBAHKL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRebateConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRebateConfigRow*))((::PBYTE)hIl2Cpp + JHHJJJBAHKL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
