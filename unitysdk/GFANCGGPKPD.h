#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EraEntityType.h"
#include "unitysdk/RPG/Client/EraVisibleReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class DEBEAKKOHLN;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class ProxyEffectProp; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define GFANCGGPKPD_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x17CE8230)
#define GFANCGGPKPD_BOCPHJPFJAA_OFFSET UNITYSDK_OFFSET(0x17CE9200)
#define GFANCGGPKPD_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0x17CE85B0)
#define GFANCGGPKPD_CNBJICANEMC_OFFSET UNITYSDK_OFFSET(0x17CE9A20)
#define GFANCGGPKPD_CTOR_OFFSET UNITYSDK_OFFSET(0x17CEA3D0)
#define GFANCGGPKPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17CE8650)
#define GFANCGGPKPD_EGMLKMJJCMD_OFFSET UNITYSDK_OFFSET(0x17CEA220)
#define GFANCGGPKPD_EPOBAPMMBLE_OFFSET UNITYSDK_OFFSET(0x17CE7CD0)
#define GFANCGGPKPD_FKBPGNGJAJG_OFFSET UNITYSDK_OFFSET(0x17CE92D0)
#define GFANCGGPKPD_GHHOOCLEENA_OFFSET UNITYSDK_OFFSET(0x17CE81E0)
#define GFANCGGPKPD_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0x17CE96C0)
#define GFANCGGPKPD_HACIMAKAAIL_OFFSET UNITYSDK_OFFSET(0x17CE9250)
#define GFANCGGPKPD_HGGCEIACJAL_OFFSET UNITYSDK_OFFSET(0x17CEA1C0)
#define GFANCGGPKPD_IPBKLOKFDAI_OFFSET UNITYSDK_OFFSET(0x17CEA330)
#define GFANCGGPKPD_IPGKMKFKMPB_OFFSET UNITYSDK_OFFSET(0x17CE7280)
#define GFANCGGPKPD_JHCLDJJNJNH_OFFSET UNITYSDK_OFFSET(0x17CE90E0)
#define GFANCGGPKPD_KKJLLGLHEOL_OFFSET UNITYSDK_OFFSET(0x17CE9BD0)
#define GFANCGGPKPD_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x17CE6D90)
#define GFANCGGPKPD_MMHKHLMDMGE_OFFSET UNITYSDK_OFFSET(0x17CE9EE0)
#define GFANCGGPKPD_NBDLMJNCBHB_OFFSET UNITYSDK_OFFSET(0x17CE8830)
#define GFANCGGPKPD_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x17CE9150)
#define GFANCGGPKPD_NLBCIGPNDEN_OFFSET UNITYSDK_OFFSET(0x17CEA390)
#define GFANCGGPKPD_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x17CE8D90)
#define GFANCGGPKPD_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x17CE8B80)
#define GFANCGGPKPD_PIJIAKLEJPN_OFFSET UNITYSDK_OFFSET(0x17CEA280)
#define GFANCGGPKPD_TICK_OFFSET UNITYSDK_OFFSET(0x17CE7CE0)
#define GFANCGGPKPD__BEFOREDISPOSE_B__4_0_OFFSET UNITYSDK_OFFSET(0x17CEA480)
#define GFANCGGPKPD__INITCOMPONENT_B__0_0_OFFSET UNITYSDK_OFFSET(0x17CEA3E0)
#define GFANCGGPKPD__INITCOMPONENT_B__0_1_OFFSET UNITYSDK_OFFSET(0x17CEA410)
#define GFANCGGPKPD__INITCOMPONENT_B__0_2_OFFSET UNITYSDK_OFFSET(0x17CEA450)

inline static constexpr unsigned int GFANCGGPKPD_TypeDefinitionIndex = 75432;

	class GFANCGGPKPD : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::EraFlipperManager* KLKIMALJKKE; // 0x18
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x20
		::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x28
		::RPG::Client::EraFlipperCommonConfig* IGHAHBNLIJA; // 0x30
		::System::String* MBJBPGDIJOE; // 0x38
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x40
		::RPG::Client::ReasonBool_1<::RPG::Client::EraVisibleReason> EPBLIMCONGG; // 0x48
		::System::Nullable_1<::System::Object*> HMNJLMFDCAL; // 0x50
		::System::UInt32 KOAIMKCDOIM; // 0x58
		::RPG::Client::EraEntityType LLGKKKFKBBC; // 0x5C
		::System::Boolean JNMNBBAJFEG; // 0x60
		::System::Boolean JBNGIGALLIJ; // 0x61
		::System::Boolean LJNPFDGIOJA; // 0x62
		::System::Byte _padding0[0x1];
		::RPG::GameCore::EraStateType BGDKFBODOEO; // 0x64
		::System::Boolean GLOGHGMLHFA; // 0x68
		::System::Boolean NOMAHDHHAOC; // 0x69
		::System::Boolean EPOBAPFJGBE; // 0x6A
		::System::Boolean GPPNKACPDEK; // 0x6B
		::System::UInt32 BGJGFPDIBBD; // 0x6C
		// static const ::System::Object OAIHHECNKNF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANCGGPKPD_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::GameEntity* a1, ::RPG::Client::EraEntityType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::EraEntityType))((::PBYTE)hIl2Cpp + GFANCGGPKPD_LMCEDCHJKFF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EraEntityType EPOBAPMMBLE()
		{
			return ((::RPG::Client::EraEntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANCGGPKPD_EPOBAPMMBLE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFANCGGPKPD_TICK_OFFSET))(this, a1);
		}

		::System::Void BeforeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANCGGPKPD_BEFOREDISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANCGGPKPD_DISPOSE_OFFSET))(this);
		}

		::System::Void NBDLMJNCBHB(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + GFANCGGPKPD_NBDLMJNCBHB_OFFSET))(this, a1);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GFANCGGPKPD_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GFANCGGPKPD_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void JHCLDJJNJNH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFANCGGPKPD_JHCLDJJNJNH_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1, ::RPG::Client::EraVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::EraVisibleReason))((::PBYTE)hIl2Cpp + GFANCGGPKPD_NHPDCPKMNAM_OFFSET))(this, a1, a2);
		}

		::System::Boolean GHHOOCLEENA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANCGGPKPD_GHHOOCLEENA_OFFSET))(this);
		}

		::System::Void IPGKMKFKMPB(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GFANCGGPKPD_IPGKMKFKMPB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FKBPGNGJAJG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFANCGGPKPD_FKBPGNGJAJG_OFFSET))(this, a1);
		}

		::System::Void CNBJICANEMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANCGGPKPD_CNBJICANEMC_OFFSET))(this);
		}

		::System::Void KKJLLGLHEOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFANCGGPKPD_KKJLLGLHEOL_OFFSET))(this, a1);
		}

		::System::Void MMHKHLMDMGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFANCGGPKPD_MMHKHLMDMGE_OFFSET))(this, a1);
		}

		::System::Void HGGCEIACJAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFANCGGPKPD_HGGCEIACJAL_OFFSET))(this, a1);
		}

		::System::Void EGMLKMJJCMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFANCGGPKPD_EGMLKMJJCMD_OFFSET))(this, a1);
		}

		::System::Void PIJIAKLEJPN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFANCGGPKPD_PIJIAKLEJPN_OFFSET))(this, a1);
		}

		::System::Void IPBKLOKFDAI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFANCGGPKPD_IPBKLOKFDAI_OFFSET))(this, a1);
		}

		::System::UInt32 GHIFMGPKFPF(::System::String* a1, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a2, ::System::Boolean a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GFANCGGPKPD_GHIFMGPKFPF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CEPJHGNMKJD(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GFANCGGPKPD_CEPJHGNMKJD_OFFSET))(this, a1, a2);
		}

		::System::Void NLBCIGPNDEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANCGGPKPD_NLBCIGPNDEN_OFFSET))(this);
		}

		::System::Boolean BOCPHJPFJAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANCGGPKPD_BOCPHJPFJAA_OFFSET))(this);
		}

		::System::Void HACIMAKAAIL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFANCGGPKPD_HACIMAKAAIL_OFFSET))(this, a1);
		}

		::System::Boolean _InitComponent_b__0_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFANCGGPKPD__INITCOMPONENT_B__0_0_OFFSET))(this, a1);
		}

		::System::Boolean _InitComponent_b__0_1(::RPG::Client::ProxyEffectProp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ProxyEffectProp*))((::PBYTE)hIl2Cpp + GFANCGGPKPD__INITCOMPONENT_B__0_1_OFFSET))(this, a1);
		}

		::System::Boolean _InitComponent_b__0_2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFANCGGPKPD__INITCOMPONENT_B__0_2_OFFSET))(this, a1);
		}

		::System::Boolean _BeforeDispose_b__4_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFANCGGPKPD__BEFOREDISPOSE_B__4_0_OFFSET))(this, a1);
		}

	};
