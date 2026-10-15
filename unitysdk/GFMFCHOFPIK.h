#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelChimeraLevelRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFMFCHOFPIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE3D470)
#define GFMFCHOFPIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE3DA30)
#define GFMFCHOFPIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE3D5E0)
#define GFMFCHOFPIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE3CF10)
#define GFMFCHOFPIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE3D1A0)
#define GFMFCHOFPIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE3D680)
#define GFMFCHOFPIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE3D6D0)
#define GFMFCHOFPIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE3D4B0)
#define GFMFCHOFPIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE3D140)
#define GFMFCHOFPIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE3D2D0)
#define GFMFCHOFPIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE3D540)
#define GFMFCHOFPIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE3CE90)

	class GFMFCHOFPIK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x17260);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x17268);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*>**)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x17270);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x5700);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x5701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMFCHOFPIK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*>*(*)())((::PBYTE)hIl2Cpp + GFMFCHOFPIK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GFMFCHOFPIK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*>(*)())((::PBYTE)hIl2Cpp + GFMFCHOFPIK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelChimeraLevelRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ChimeraDuelChimeraLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GFMFCHOFPIK_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GFMFCHOFPIK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMFCHOFPIK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMFCHOFPIK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GFMFCHOFPIK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GFMFCHOFPIK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GFMFCHOFPIK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelChimeraLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelChimeraLevelRow*))((::PBYTE)hIl2Cpp + GFMFCHOFPIK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
