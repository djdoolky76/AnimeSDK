#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaNewsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAIDNEJDFLL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD97E40)
#define FAIDNEJDFLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD98400)
#define FAIDNEJDFLL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD97FB0)
#define FAIDNEJDFLL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD978B0)
#define FAIDNEJDFLL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD97B40)
#define FAIDNEJDFLL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD98050)
#define FAIDNEJDFLL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD980A0)
#define FAIDNEJDFLL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD97E80)
#define FAIDNEJDFLL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD97AE0)
#define FAIDNEJDFLL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD97C70)
#define FAIDNEJDFLL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD97F10)
#define FAIDNEJDFLL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD97830)

inline static constexpr unsigned int FAIDNEJDFLL_TypeDefinitionIndex = 13366;

	class FAIDNEJDFLL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FAIDNEJDFLL")->GetStaticField(0xEED0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FAIDNEJDFLL")->GetStaticField(0xEED8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>**)UnitySDK::FromName("", "FAIDNEJDFLL")->GetStaticField(0xEEE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FAIDNEJDFLL")->GetStaticField(0x3140);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAIDNEJDFLL")->GetStaticField(0x3141);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAIDNEJDFLL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>*(*)())((::PBYTE)hIl2Cpp + FAIDNEJDFLL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAIDNEJDFLL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>(*)())((::PBYTE)hIl2Cpp + FAIDNEJDFLL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GachaNewsRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GachaNewsRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FAIDNEJDFLL_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAIDNEJDFLL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAIDNEJDFLL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAIDNEJDFLL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FAIDNEJDFLL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAIDNEJDFLL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FAIDNEJDFLL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GachaNewsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GachaNewsRow*))((::PBYTE)hIl2Cpp + FAIDNEJDFLL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
