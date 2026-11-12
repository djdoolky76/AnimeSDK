#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BMFLJKAEIGP;
class FAILAJIHIAE;
class HOGIJPKICBF;
class KOAOAKKCCPK;
class KPEBKEODGAO;
class NGGJFGDIDBE;
class PAJJJAKHEDF;
namespace RPG::Client { class MonoClickOutsideDetect; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FAILAJIHIAE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x165926F0)
#define FAILAJIHIAE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16592830)
#define FAILAJIHIAE_BCDEMCEHMHK_OFFSET UNITYSDK_OFFSET(0x16591220)
#define FAILAJIHIAE_BDLPFMMILJK_OFFSET UNITYSDK_OFFSET(0x16590CC0)
#define FAILAJIHIAE_CCLHPIFFMCP_OFFSET UNITYSDK_OFFSET(0x16590A10)
#define FAILAJIHIAE_CEMLFKJFMPC_OFFSET UNITYSDK_OFFSET(0x16590A60)
#define FAILAJIHIAE_CTOR_OFFSET UNITYSDK_OFFSET(0x16592950)
#define FAILAJIHIAE_DCALICAOPGE_OFFSET UNITYSDK_OFFSET(0x16592160)
#define FAILAJIHIAE_DCFCFEBOBCJ_OFFSET UNITYSDK_OFFSET(0x16590D10)
#define FAILAJIHIAE_DIKPMMNBPNC_OFFSET UNITYSDK_OFFSET(0x16591DD0)
#define FAILAJIHIAE_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x165908A0)
#define FAILAJIHIAE_EJHBFHFCNDF_OFFSET UNITYSDK_OFFSET(0x16591B10)
#define FAILAJIHIAE_GKDOCLMPHJB_OFFSET UNITYSDK_OFFSET(0x16591660)
#define FAILAJIHIAE_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0x165914E0)
#define FAILAJIHIAE_IDEIJDAPMGE_OFFSET UNITYSDK_OFFSET(0x165925D0)
#define FAILAJIHIAE_IGNKKEBEGPJ_OFFSET UNITYSDK_OFFSET(0x16590AB0)
#define FAILAJIHIAE_JEOLCPKMIJB_OFFSET UNITYSDK_OFFSET(0x16590C10)
#define FAILAJIHIAE_JFDLICPOHKP_OFFSET UNITYSDK_OFFSET(0x16590DA0)
#define FAILAJIHIAE_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x165906E0)
#define FAILAJIHIAE_NFLGIFEKCFE_OFFSET UNITYSDK_OFFSET(0x16590FC0)
#define FAILAJIHIAE_NFOFGOFHKOO_OFFSET UNITYSDK_OFFSET(0x16590DF0)
#define FAILAJIHIAE_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x16590850)
#define FAILAJIHIAE_OGAFOLHHABE_OFFSET UNITYSDK_OFFSET(0x16590F60)
#define FAILAJIHIAE_PAMLMPPKAJO_OFFSET UNITYSDK_OFFSET(0x16591AA0)
#define FAILAJIHIAE_PBOKHJKKGPN_OFFSET UNITYSDK_OFFSET(0x165924D0)
#define FAILAJIHIAE_PMCLCDGCNAM_OFFSET UNITYSDK_OFFSET(0x16590BD0)
#define FAILAJIHIAE__ONBIND_OFFSET UNITYSDK_OFFSET(0x165902C0)
#define FAILAJIHIAE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16591E30)
#define FAILAJIHIAE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16591F00)
#define FAILAJIHIAE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16591FA0)

inline static constexpr unsigned int FAILAJIHIAE_TypeDefinitionIndex = 74372;

	class FAILAJIHIAE : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HOGIJPKICBF*>* NAJEKBEDNMK; // 0x60
		::UnityEngine::Animation* KCOAILOHDND; // 0x68
		::RPG::UINavigation::UINavigationZoneManager* DJOAIHJIJKL; // 0x70
		::UnityEngine::CanvasGroup* MLMFIEKIPHG; // 0x78
		::RPG::Client::MonoClickOutsideDetect* AAFBCFCMAPI; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::PAJJJAKHEDF*>* PLGJPOCAPPN; // 0x88
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x90
		::UnityEngine::Transform* FHEMCAFOIKG; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BMFLJKAEIGP*>* HMHEAKOHNMF; // 0xA0
		::System::Action* IDDFLLPLNDG; // 0xA8
		static ::FAILAJIHIAE** StaticGet_FMJPMFEDIJL()
		{
			return (::FAILAJIHIAE**)UnitySDK::FromName("", "FAILAJIHIAE")->GetStaticField(0x40640);
		}

		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* EFJMLJCGPCJ; // 0x0
		// static const ::System::String* HLKCHICNHJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE__ONBIND_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void CEMLFKJFMPC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_CEMLFKJFMPC_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* IGNKKEBEGPJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_IGNKKEBEGPJ_OFFSET))(this);
		}

		::System::Boolean PMCLCDGCNAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_PMCLCDGCNAM_OFFSET))(this);
		}

		::System::Boolean JEOLCPKMIJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_JEOLCPKMIJB_OFFSET))(this);
		}

		::System::Boolean BDLPFMMILJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_BDLPFMMILJK_OFFSET))(this);
		}

		::System::Boolean DCFCFEBOBCJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_DCFCFEBOBCJ_OFFSET))(this);
		}

		::System::Void JFDLICPOHKP(::KPEBKEODGAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEBKEODGAO*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_JFDLICPOHKP_OFFSET))(this, a1);
		}

		::System::Void OGAFOLHHABE(::NGGJFGDIDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGGJFGDIDBE*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_OGAFOLHHABE_OFFSET))(this, a1);
		}

		::System::Void NFLGIFEKCFE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_NFLGIFEKCFE_OFFSET))(this, a1);
		}

		::System::Void NFOFGOFHKOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_NFOFGOFHKOO_OFFSET))(this);
		}

		::System::Void GKDOCLMPHJB(::KPEBKEODGAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEBKEODGAO*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_GKDOCLMPHJB_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FAILAJIHIAE__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void DCALICAOPGE(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_DCALICAOPGE_OFFSET))(this, a1);
		}

		::System::Boolean PAMLMPPKAJO(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_PAMLMPPKAJO_OFFSET))(this, a1);
		}

		::System::Void EJHBFHFCNDF(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_EJHBFHFCNDF_OFFSET))(this, a1);
		}

		::System::Void BCDEMCEHMHK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_BCDEMCEHMHK_OFFSET))(this, a1);
		}

		::System::Void OCCIFHOEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_OCCIFHOEJMI_OFFSET))(this);
		}

		::System::Void CCLHPIFFMCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_CCLHPIFFMCP_OFFSET))(this);
		}

		::System::Void DIKPMMNBPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_DIKPMMNBPNC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightManager* HFOKMLIJFDK()
		{
			return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_HFOKMLIJFDK_OFFSET))(this);
		}

		::System::Void PBOKHJKKGPN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_PBOKHJKKGPN_OFFSET))(this, a1);
		}

		::System::Void IDEIJDAPMGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_IDEIJDAPMGE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
