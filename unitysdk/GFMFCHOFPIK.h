#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelChimeraLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFMFCHOFPIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE0F3B0)
#define GFMFCHOFPIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE0F970)
#define GFMFCHOFPIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE0F520)
#define GFMFCHOFPIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE0EE50)
#define GFMFCHOFPIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE0F0E0)
#define GFMFCHOFPIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE0F5C0)
#define GFMFCHOFPIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE0F610)
#define GFMFCHOFPIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE0F3F0)
#define GFMFCHOFPIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE0F080)
#define GFMFCHOFPIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE0F210)
#define GFMFCHOFPIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE0F480)
#define GFMFCHOFPIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE0EDD0)

inline static constexpr unsigned int GFMFCHOFPIK_TypeDefinitionIndex = 11116;

	class GFMFCHOFPIK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*>**)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x153B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x153B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x153C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x4840);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GFMFCHOFPIK")->GetStaticField(0x4841);
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
