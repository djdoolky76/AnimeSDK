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

#define OFJNLGMCIDH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E615750)
#define OFJNLGMCIDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E615D20)
#define OFJNLGMCIDH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6158C0)
#define OFJNLGMCIDH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6151C0)
#define OFJNLGMCIDH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E615450)
#define OFJNLGMCIDH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E615960)
#define OFJNLGMCIDH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6159B0)
#define OFJNLGMCIDH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E615790)
#define OFJNLGMCIDH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6153F0)
#define OFJNLGMCIDH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6155C0)
#define OFJNLGMCIDH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E615820)
#define OFJNLGMCIDH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E615140)

inline static constexpr unsigned int OFJNLGMCIDH_TypeDefinitionIndex = 11757;

	class OFJNLGMCIDH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSubNodeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSubNodeRow*>**)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x566A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x566A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x566B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x126D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OFJNLGMCIDH")->GetStaticField(0x126D1);
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
