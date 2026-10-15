#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEnhanceConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGHPHMBCLNA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCBDD30)
#define AGHPHMBCLNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBE300)
#define AGHPHMBCLNA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCBDEA0)
#define AGHPHMBCLNA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCBD7A0)
#define AGHPHMBCLNA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCBDA30)
#define AGHPHMBCLNA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCBDF40)
#define AGHPHMBCLNA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCBDF90)
#define AGHPHMBCLNA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCBDD70)
#define AGHPHMBCLNA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCBD9D0)
#define AGHPHMBCLNA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCBDBA0)
#define AGHPHMBCLNA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCBDE00)
#define AGHPHMBCLNA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCBD720)

	class AGHPHMBCLNA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AGHPHMBCLNA")->GetStaticField(0x382B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGHPHMBCLNA")->GetStaticField(0x382B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnhanceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnhanceConfigRow*>**)UnitySDK::FromName("", "AGHPHMBCLNA")->GetStaticField(0x382C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGHPHMBCLNA")->GetStaticField(0xBFF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGHPHMBCLNA")->GetStaticField(0xBFF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGHPHMBCLNA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnhanceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnhanceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AGHPHMBCLNA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGHPHMBCLNA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnhanceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnhanceConfigRow*>(*)())((::PBYTE)hIl2Cpp + AGHPHMBCLNA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightEnhanceConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightEnhanceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AGHPHMBCLNA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGHPHMBCLNA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGHPHMBCLNA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGHPHMBCLNA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGHPHMBCLNA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGHPHMBCLNA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGHPHMBCLNA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightEnhanceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightEnhanceConfigRow*))((::PBYTE)hIl2Cpp + AGHPHMBCLNA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
