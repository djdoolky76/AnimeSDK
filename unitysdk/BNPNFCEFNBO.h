#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GMAccountRelicConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNPNFCEFNBO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9BF7C0)
#define BNPNFCEFNBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9BFD90)
#define BNPNFCEFNBO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9BF930)
#define BNPNFCEFNBO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9BF230)
#define BNPNFCEFNBO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9BF4C0)
#define BNPNFCEFNBO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9BF9D0)
#define BNPNFCEFNBO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9BFA20)
#define BNPNFCEFNBO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9BF800)
#define BNPNFCEFNBO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9BF460)
#define BNPNFCEFNBO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9BF630)
#define BNPNFCEFNBO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9BF890)
#define BNPNFCEFNBO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9BF1B0)

inline static constexpr unsigned int BNPNFCEFNBO_TypeDefinitionIndex = 13343;

	class BNPNFCEFNBO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BNPNFCEFNBO")->GetStaticField(0x38B60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountRelicConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountRelicConfigRow*>**)UnitySDK::FromName("", "BNPNFCEFNBO")->GetStaticField(0x38B68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BNPNFCEFNBO")->GetStaticField(0x38B70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BNPNFCEFNBO")->GetStaticField(0xB680);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNPNFCEFNBO")->GetStaticField(0xB681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNPNFCEFNBO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountRelicConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountRelicConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BNPNFCEFNBO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNPNFCEFNBO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountRelicConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountRelicConfigRow*>(*)())((::PBYTE)hIl2Cpp + BNPNFCEFNBO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GMAccountRelicConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GMAccountRelicConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BNPNFCEFNBO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNPNFCEFNBO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNPNFCEFNBO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNPNFCEFNBO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BNPNFCEFNBO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNPNFCEFNBO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BNPNFCEFNBO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GMAccountRelicConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GMAccountRelicConfigRow*))((::PBYTE)hIl2Cpp + BNPNFCEFNBO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
