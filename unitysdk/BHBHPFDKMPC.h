#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEffectRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHBHPFDKMPC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D8013B0)
#define BHBHPFDKMPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D801980)
#define BHBHPFDKMPC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D801520)
#define BHBHPFDKMPC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D800E20)
#define BHBHPFDKMPC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D8010B0)
#define BHBHPFDKMPC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D8015C0)
#define BHBHPFDKMPC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D801610)
#define BHBHPFDKMPC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D8013F0)
#define BHBHPFDKMPC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D801050)
#define BHBHPFDKMPC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D801220)
#define BHBHPFDKMPC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D801480)
#define BHBHPFDKMPC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D800DA0)

	class BHBHPFDKMPC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>**)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0x35440);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0x35448);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0x35450);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0xB310);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0xB311);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>*(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingEffectRow*))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
