#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class Anniversary2NDContentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKDIABPCAPG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1B9200)
#define MKDIABPCAPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B97D0)
#define MKDIABPCAPG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1B9370)
#define MKDIABPCAPG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1B8C70)
#define MKDIABPCAPG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1B8F00)
#define MKDIABPCAPG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1B9410)
#define MKDIABPCAPG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1B9460)
#define MKDIABPCAPG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1B9240)
#define MKDIABPCAPG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1B8EA0)
#define MKDIABPCAPG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1B9070)
#define MKDIABPCAPG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1B92D0)
#define MKDIABPCAPG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1B8BF0)

inline static constexpr unsigned int MKDIABPCAPG_TypeDefinitionIndex = 12660;

	class MKDIABPCAPG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MKDIABPCAPG")->GetStaticField(0x4DD00);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDContentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDContentConfigRow*>**)UnitySDK::FromName("", "MKDIABPCAPG")->GetStaticField(0x4DD08);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MKDIABPCAPG")->GetStaticField(0x4DD10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MKDIABPCAPG")->GetStaticField(0x11EB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MKDIABPCAPG")->GetStaticField(0x11EB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDIABPCAPG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDContentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDContentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MKDIABPCAPG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKDIABPCAPG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDContentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDContentConfigRow*>(*)())((::PBYTE)hIl2Cpp + MKDIABPCAPG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::Anniversary2NDContentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::Anniversary2NDContentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MKDIABPCAPG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKDIABPCAPG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDIABPCAPG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDIABPCAPG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MKDIABPCAPG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MKDIABPCAPG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MKDIABPCAPG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::Anniversary2NDContentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::Anniversary2NDContentConfigRow*))((::PBYTE)hIl2Cpp + MKDIABPCAPG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
