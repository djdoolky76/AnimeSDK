#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubNavMapNameRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOHCHMHBOAP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9F0520)
#define BOHCHMHBOAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9F0AE0)
#define BOHCHMHBOAP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9F0690)
#define BOHCHMHBOAP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9EFF80)
#define BOHCHMHBOAP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9F0210)
#define BOHCHMHBOAP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9F0730)
#define BOHCHMHBOAP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9F0780)
#define BOHCHMHBOAP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9F0560)
#define BOHCHMHBOAP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9F01B0)
#define BOHCHMHBOAP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9F0380)
#define BOHCHMHBOAP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9F05F0)
#define BOHCHMHBOAP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9EFF00)

inline static constexpr unsigned int BOHCHMHBOAP_TypeDefinitionIndex = 14021;

	class BOHCHMHBOAP : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BOHCHMHBOAP")->GetStaticField(0x39050);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BOHCHMHBOAP")->GetStaticField(0x39058);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapNameRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapNameRow*>**)UnitySDK::FromName("", "BOHCHMHBOAP")->GetStaticField(0x39060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BOHCHMHBOAP")->GetStaticField(0xC2D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BOHCHMHBOAP")->GetStaticField(0xC2D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOHCHMHBOAP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapNameRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapNameRow*>*(*)())((::PBYTE)hIl2Cpp + BOHCHMHBOAP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOHCHMHBOAP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapNameRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapNameRow*>(*)())((::PBYTE)hIl2Cpp + BOHCHMHBOAP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SubNavMapNameRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::SubNavMapNameRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BOHCHMHBOAP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOHCHMHBOAP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOHCHMHBOAP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOHCHMHBOAP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BOHCHMHBOAP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BOHCHMHBOAP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BOHCHMHBOAP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SubNavMapNameRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SubNavMapNameRow*))((::PBYTE)hIl2Cpp + BOHCHMHBOAP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
