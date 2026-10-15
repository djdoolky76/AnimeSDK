#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpineUnlockRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHILHEMKNNI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E6FD0)
#define PHILHEMKNNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E75A0)
#define PHILHEMKNNI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E7140)
#define PHILHEMKNNI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E6A40)
#define PHILHEMKNNI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E6CD0)
#define PHILHEMKNNI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E71E0)
#define PHILHEMKNNI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E7230)
#define PHILHEMKNNI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E7010)
#define PHILHEMKNNI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E6C70)
#define PHILHEMKNNI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E6E40)
#define PHILHEMKNNI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E70A0)
#define PHILHEMKNNI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E69C0)

	class PHILHEMKNNI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PHILHEMKNNI")->GetStaticField(0x400F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHILHEMKNNI")->GetStaticField(0x400F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>**)UnitySDK::FromName("", "PHILHEMKNNI")->GetStaticField(0x40100);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHILHEMKNNI")->GetStaticField(0xDAC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHILHEMKNNI")->GetStaticField(0xDAC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHILHEMKNNI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + PHILHEMKNNI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHILHEMKNNI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>(*)())((::PBYTE)hIl2Cpp + PHILHEMKNNI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpineUnlockRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSpineUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHILHEMKNNI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHILHEMKNNI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHILHEMKNNI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHILHEMKNNI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHILHEMKNNI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHILHEMKNNI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHILHEMKNNI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpineUnlockRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpineUnlockRow*))((::PBYTE)hIl2Cpp + PHILHEMKNNI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
