#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FAILAJIHIAE;
class HOGIJPKICBF;
class KOAOAKKCCPK;
class KPEBKEODGAO;
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

#define FAILAJIHIAE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x156726A0)
#define FAILAJIHIAE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15672790)
#define FAILAJIHIAE_BCDEMCEHMHK_OFFSET UNITYSDK_OFFSET(0x156722E0)
#define FAILAJIHIAE_BDLPFMMILJK_OFFSET UNITYSDK_OFFSET(0x15671410)
#define FAILAJIHIAE_CCLHPIFFMCP_OFFSET UNITYSDK_OFFSET(0x15671160)
#define FAILAJIHIAE_CEMLFKJFMPC_OFFSET UNITYSDK_OFFSET(0x156711B0)
#define FAILAJIHIAE_CTOR_OFFSET UNITYSDK_OFFSET(0x15672860)
#define FAILAJIHIAE_DCALICAOPGE_OFFSET UNITYSDK_OFFSET(0x15671EB0)
#define FAILAJIHIAE_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15671C60)
#define FAILAJIHIAE_DIKPMMNBPNC_OFFSET UNITYSDK_OFFSET(0x15671B90)
#define FAILAJIHIAE_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x15670FF0)
#define FAILAJIHIAE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15671CF0)
#define FAILAJIHIAE_GKDOCLMPHJB_OFFSET UNITYSDK_OFFSET(0x156717E0)
#define FAILAJIHIAE_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0x15671660)
#define FAILAJIHIAE_IGNKKEBEGPJ_OFFSET UNITYSDK_OFFSET(0x15671200)
#define FAILAJIHIAE_JEOLCPKMIJB_OFFSET UNITYSDK_OFFSET(0x15671360)
#define FAILAJIHIAE_JFDLICPOHKP_OFFSET UNITYSDK_OFFSET(0x15671480)
#define FAILAJIHIAE_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x15670E30)
#define FAILAJIHIAE_NFOFGOFHKOO_OFFSET UNITYSDK_OFFSET(0x156714D0)
#define FAILAJIHIAE_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x15670FA0)
#define FAILAJIHIAE_PBOKHJKKGPN_OFFSET UNITYSDK_OFFSET(0x156725A0)
#define FAILAJIHIAE_PMCLCDGCNAM_OFFSET UNITYSDK_OFFSET(0x15671320)
#define FAILAJIHIAE__ONBIND_OFFSET UNITYSDK_OFFSET(0x15670B20)
#define FAILAJIHIAE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15671BF0)

inline static constexpr unsigned int FAILAJIHIAE_TypeDefinitionIndex = 72294;

	class FAILAJIHIAE : public ::FMPCODLIOLG
	{
	public:
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::PAJJJAKHEDF*>* PLGJPOCAPPN; // 0x68
		::UnityEngine::CanvasGroup* MLMFIEKIPHG; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HOGIJPKICBF*>* NAJEKBEDNMK; // 0x78
		::System::Action* IDDFLLPLNDG; // 0x80
		::RPG::Client::MonoClickOutsideDetect* AAFBCFCMAPI; // 0x88
		::RPG::UINavigation::UINavigationZoneManager* DJOAIHJIJKL; // 0x90
		::UnityEngine::Animation* KCOAILOHDND; // 0x98
		::UnityEngine::Transform* FHEMCAFOIKG; // 0xA0
		static ::FAILAJIHIAE** StaticGet_FMJPMFEDIJL()
		{
			return (::FAILAJIHIAE**)UnitySDK::FromName("", "FAILAJIHIAE")->GetStaticField(0x51520);
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

		::System::Void JFDLICPOHKP(::KPEBKEODGAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEBKEODGAO*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_JFDLICPOHKP_OFFSET))(this, a1);
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FAILAJIHIAE_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void DCALICAOPGE(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + FAILAJIHIAE_DCALICAOPGE_OFFSET))(this, a1);
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

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILAJIHIAE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
