#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionNPCMonsterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPIDKKCAEIP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D09CB60)
#define KPIDKKCAEIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09D6B0)
#define KPIDKKCAEIP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D09CF00)
#define KPIDKKCAEIP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D09CBA0)
#define KPIDKKCAEIP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D09D3F0)
#define KPIDKKCAEIP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D09CFA0)
#define KPIDKKCAEIP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D09CFF0)
#define KPIDKKCAEIP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D09CDD0)
#define KPIDKKCAEIP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D09D390)
#define KPIDKKCAEIP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D09D520)
#define KPIDKKCAEIP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D09CE60)
#define KPIDKKCAEIP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D09D310)

inline static constexpr unsigned int KPIDKKCAEIP_TypeDefinitionIndex = 15169;

	class KPIDKKCAEIP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KPIDKKCAEIP")->GetStaticField(0x37890);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPIDKKCAEIP")->GetStaticField(0x37898);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionNPCMonsterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionNPCMonsterRow*>**)UnitySDK::FromName("", "KPIDKKCAEIP")->GetStaticField(0x378A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPIDKKCAEIP")->GetStaticField(0xB3A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPIDKKCAEIP")->GetStaticField(0xB3A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPIDKKCAEIP_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPIDKKCAEIP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPIDKKCAEIP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPIDKKCAEIP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPIDKKCAEIP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPIDKKCAEIP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPIDKKCAEIP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageInvasionNPCMonsterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInvasionNPCMonsterRow*))((::PBYTE)hIl2Cpp + KPIDKKCAEIP_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionNPCMonsterRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionNPCMonsterRow*>*(*)())((::PBYTE)hIl2Cpp + KPIDKKCAEIP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPIDKKCAEIP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionNPCMonsterRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionNPCMonsterRow*>(*)())((::PBYTE)hIl2Cpp + KPIDKKCAEIP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageInvasionNPCMonsterRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionNPCMonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPIDKKCAEIP_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
