#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirAreaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHOAKLIJCFG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE7E190)
#define HHOAKLIJCFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE7E710)
#define HHOAKLIJCFG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE7E300)
#define HHOAKLIJCFG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE7DC80)
#define HHOAKLIJCFG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE7DF10)
#define HHOAKLIJCFG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE7E3A0)
#define HHOAKLIJCFG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE7E3F0)
#define HHOAKLIJCFG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE7E1D0)
#define HHOAKLIJCFG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE7DEB0)
#define HHOAKLIJCFG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE7E040)
#define HHOAKLIJCFG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE7E260)
#define HHOAKLIJCFG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE7DC00)

inline static constexpr unsigned int HHOAKLIJCFG_TypeDefinitionIndex = 12130;

	class HHOAKLIJCFG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HHOAKLIJCFG")->GetStaticField(0x1BC40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAreaRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAreaRow*>**)UnitySDK::FromName("", "HHOAKLIJCFG")->GetStaticField(0x1BC48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HHOAKLIJCFG")->GetStaticField(0x1BC50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HHOAKLIJCFG")->GetStaticField(0x5FD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HHOAKLIJCFG")->GetStaticField(0x5FD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHOAKLIJCFG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAreaRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAreaRow*>*(*)())((::PBYTE)hIl2Cpp + HHOAKLIJCFG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHOAKLIJCFG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAreaRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirAreaRow*>(*)())((::PBYTE)hIl2Cpp + HHOAKLIJCFG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirAreaRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirAreaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HHOAKLIJCFG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHOAKLIJCFG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHOAKLIJCFG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHOAKLIJCFG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HHOAKLIJCFG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHOAKLIJCFG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HHOAKLIJCFG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirAreaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirAreaRow*))((::PBYTE)hIl2Cpp + HHOAKLIJCFG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
