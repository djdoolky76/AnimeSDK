#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageBattleEventRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDPEDDGJDNI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1FBE20)
#define NDPEDDGJDNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1FCA00)
#define NDPEDDGJDNI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1FC1C0)
#define NDPEDDGJDNI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1FBE60)
#define NDPEDDGJDNI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1FC700)
#define NDPEDDGJDNI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1FC260)
#define NDPEDDGJDNI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1FC2B0)
#define NDPEDDGJDNI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1FC090)
#define NDPEDDGJDNI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1FC6A0)
#define NDPEDDGJDNI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1FC870)
#define NDPEDDGJDNI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1FC120)
#define NDPEDDGJDNI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1FC620)

	class NDPEDDGJDNI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NDPEDDGJDNI")->GetStaticField(0x2DBD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NDPEDDGJDNI")->GetStaticField(0x2DBD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageBattleEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageBattleEventRow*>**)UnitySDK::FromName("", "NDPEDDGJDNI")->GetStaticField(0x2DBE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NDPEDDGJDNI")->GetStaticField(0x95A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NDPEDDGJDNI")->GetStaticField(0x95A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDPEDDGJDNI_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDPEDDGJDNI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDPEDDGJDNI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDPEDDGJDNI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NDPEDDGJDNI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NDPEDDGJDNI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NDPEDDGJDNI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageBattleEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + NDPEDDGJDNI_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageBattleEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageBattleEventRow*>*(*)())((::PBYTE)hIl2Cpp + NDPEDDGJDNI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDPEDDGJDNI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageBattleEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageBattleEventRow*>(*)())((::PBYTE)hIl2Cpp + NDPEDDGJDNI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageBattleEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageBattleEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NDPEDDGJDNI_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
