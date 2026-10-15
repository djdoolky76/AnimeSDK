#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSubNodeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFJNLGMCIDH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D23BD40)
#define OFJNLGMCIDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D23C310)
#define OFJNLGMCIDH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D23BEB0)
#define OFJNLGMCIDH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D23B7B0)
#define OFJNLGMCIDH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D23BA40)
#define OFJNLGMCIDH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D23BF50)
#define OFJNLGMCIDH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D23BFA0)
#define OFJNLGMCIDH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D23BD80)
#define OFJNLGMCIDH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D23B9E0)
#define OFJNLGMCIDH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D23BBB0)
#define OFJNLGMCIDH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D23BE10)
#define OFJNLGMCIDH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D23B730)

inline static constexpr unsigned int OFJNLGMCIDH_TypeDefinitionIndex = 11700;

	class OFJNLGMCIDH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x45730);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x45738);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSubNodeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSubNodeRow*>**)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x45740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x10610);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x10611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFJNLGMCIDH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSubNodeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSubNodeRow*>*(*)())((::PBYTE)hIl2Cpp + OFJNLGMCIDH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFJNLGMCIDH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSubNodeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSubNodeRow*>(*)())((::PBYTE)hIl2Cpp + OFJNLGMCIDH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSubNodeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSubNodeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OFJNLGMCIDH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFJNLGMCIDH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFJNLGMCIDH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFJNLGMCIDH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OFJNLGMCIDH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFJNLGMCIDH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OFJNLGMCIDH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSubNodeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSubNodeRow*))((::PBYTE)hIl2Cpp + OFJNLGMCIDH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
