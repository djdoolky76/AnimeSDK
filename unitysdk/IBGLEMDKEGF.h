#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BPIGEIIACAM;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBGLEMDKEGF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEB0520)
#define IBGLEMDKEGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB0AA0)
#define IBGLEMDKEGF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEB0690)
#define IBGLEMDKEGF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEB0010)
#define IBGLEMDKEGF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEB02A0)
#define IBGLEMDKEGF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEB0730)
#define IBGLEMDKEGF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEB0780)
#define IBGLEMDKEGF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEB0560)
#define IBGLEMDKEGF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEB0240)
#define IBGLEMDKEGF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEB03D0)
#define IBGLEMDKEGF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEB05F0)
#define IBGLEMDKEGF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEAFF90)

inline static constexpr unsigned int IBGLEMDKEGF_TypeDefinitionIndex = 14128;

	class IBGLEMDKEGF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BPIGEIIACAM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BPIGEIIACAM*>**)UnitySDK::FromName("", "IBGLEMDKEGF")->GetStaticField(0x1F0E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IBGLEMDKEGF")->GetStaticField(0x1F0E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IBGLEMDKEGF")->GetStaticField(0x1F0F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IBGLEMDKEGF")->GetStaticField(0x7000);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IBGLEMDKEGF")->GetStaticField(0x7001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBGLEMDKEGF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BPIGEIIACAM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BPIGEIIACAM*>*(*)())((::PBYTE)hIl2Cpp + IBGLEMDKEGF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBGLEMDKEGF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BPIGEIIACAM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BPIGEIIACAM*>(*)())((::PBYTE)hIl2Cpp + IBGLEMDKEGF_FPHGMAMDFHE_OFFSET))();
		}

		static ::BPIGEIIACAM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BPIGEIIACAM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IBGLEMDKEGF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBGLEMDKEGF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBGLEMDKEGF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBGLEMDKEGF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IBGLEMDKEGF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IBGLEMDKEGF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IBGLEMDKEGF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BPIGEIIACAM* a1)
		{
			return ((::System::Void(*)(::BPIGEIIACAM*))((::PBYTE)hIl2Cpp + IBGLEMDKEGF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
