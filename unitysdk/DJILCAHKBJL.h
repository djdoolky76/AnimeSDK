#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBillboardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJILCAHKBJL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD01140)
#define DJILCAHKBJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD016C0)
#define DJILCAHKBJL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD012B0)
#define DJILCAHKBJL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD00BF0)
#define DJILCAHKBJL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD00E80)
#define DJILCAHKBJL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD01350)
#define DJILCAHKBJL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD013A0)
#define DJILCAHKBJL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD01180)
#define DJILCAHKBJL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD00E20)
#define DJILCAHKBJL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD00FF0)
#define DJILCAHKBJL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD01210)
#define DJILCAHKBJL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD00B70)

inline static constexpr unsigned int DJILCAHKBJL_TypeDefinitionIndex = 12554;

	class DJILCAHKBJL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJILCAHKBJL")->GetStaticField(0x47DF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimBillboardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimBillboardConfigRow*>**)UnitySDK::FromName("", "DJILCAHKBJL")->GetStaticField(0x47DF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DJILCAHKBJL")->GetStaticField(0x47E00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DJILCAHKBJL")->GetStaticField(0x10C30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DJILCAHKBJL")->GetStaticField(0x10C31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJILCAHKBJL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimBillboardConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimBillboardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DJILCAHKBJL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJILCAHKBJL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimBillboardConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimBillboardConfigRow*>(*)())((::PBYTE)hIl2Cpp + DJILCAHKBJL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FiveDimBillboardConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FiveDimBillboardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DJILCAHKBJL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJILCAHKBJL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJILCAHKBJL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJILCAHKBJL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DJILCAHKBJL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJILCAHKBJL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DJILCAHKBJL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FiveDimBillboardConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimBillboardConfigRow*))((::PBYTE)hIl2Cpp + DJILCAHKBJL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
