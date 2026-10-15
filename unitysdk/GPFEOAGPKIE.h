#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Agent/AgentCurveNavigationParams.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FKDIDBGBGMF.h"
class AGJHAIDADBA;
class MOAAMGJICCD;
class NGLFOJKOKBH;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define GPFEOAGPKIE_APLFKDMICPL_OFFSET UNITYSDK_OFFSET(0x15B53F20)
#define GPFEOAGPKIE_BDDPMCBGGLI_OFFSET UNITYSDK_OFFSET(0x15B57E80)
#define GPFEOAGPKIE_BOOHHGMEONG_OFFSET UNITYSDK_OFFSET(0x15B57CB0)
#define GPFEOAGPKIE_CLOCFNBJLFE_OFFSET UNITYSDK_OFFSET(0x15B57E70)
#define GPFEOAGPKIE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B53D00)
#define GPFEOAGPKIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B53DE0)
#define GPFEOAGPKIE_DPIPOHBIJAM_OFFSET UNITYSDK_OFFSET(0x15B55300)
#define GPFEOAGPKIE_FMFIPMDNDOF_OFFSET UNITYSDK_OFFSET(0x15B559A0)
#define GPFEOAGPKIE_FPHBEPKCANO_OFFSET UNITYSDK_OFFSET(0x15B543F0)
#define GPFEOAGPKIE_GDOAONAHJHD_OFFSET UNITYSDK_OFFSET(0x15B57BA0)
#define GPFEOAGPKIE_GET_AGENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x15B57EA0)
#define GPFEOAGPKIE_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0x15B57E90)
#define GPFEOAGPKIE_GET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x15B57E50)
#define GPFEOAGPKIE_ILMGEGNIKLC_OFFSET UNITYSDK_OFFSET(0x15B55FC0)
#define GPFEOAGPKIE_JDDGOLCOPKG_OFFSET UNITYSDK_OFFSET(0x15B56100)
#define GPFEOAGPKIE_JGGMBAKHOIC_OFFSET UNITYSDK_OFFSET(0x15B57F00)
#define GPFEOAGPKIE_KCLKFLBNFIP_OFFSET UNITYSDK_OFFSET(0x15B57EB0)
#define GPFEOAGPKIE_KLEOOGEHDKN_OFFSET UNITYSDK_OFFSET(0x15B54750)
#define GPFEOAGPKIE_LADLGEJDJGG_OFFSET UNITYSDK_OFFSET(0x15B54F20)
#define GPFEOAGPKIE_LEKNNKAOIKM_OFFSET UNITYSDK_OFFSET(0x15B54D60)
#define GPFEOAGPKIE_LFOANHDCNPD_OFFSET UNITYSDK_OFFSET(0x15B55E20)
#define GPFEOAGPKIE_NKLGMKPELJL_OFFSET UNITYSDK_OFFSET(0x15B547A0)
#define GPFEOAGPKIE_NOIIDIBKOBK_OFFSET UNITYSDK_OFFSET(0x15B54440)
#define GPFEOAGPKIE_OGGCBJKOJIK_OFFSET UNITYSDK_OFFSET(0x15B55F60)
#define GPFEOAGPKIE_OOCNHBAAHOK_OFFSET UNITYSDK_OFFSET(0x15B55C70)
#define GPFEOAGPKIE_SET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x15B57E60)

inline static constexpr unsigned int GPFEOAGPKIE_TypeDefinitionIndex = 48904;

	class GPFEOAGPKIE : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* PNOHBBMHGLB; // 0x10
		::System::Collections::Generic::List_1<::MOAAMGJICCD*>* OINCGJJMAEF; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>* OEAFOKMCOGH; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IMDMBCFBKKE; // 0x28
		::AGJHAIDADBA* DHOBMFLDLAN; // 0x30
		::BansheeGz::BGSpline::Components::BGCcMath* JPEGGCCPIEG; // 0x38
		::UnityEngine::GameObject* CMLIHCEJFDG; // 0x40
		::Il2CppArray<::NGLFOJKOKBH*>* IOFHPGIJANO; // 0x48
		::UnityEngine::Vector3 DEIMGIGLHLK; // 0x50
		::System::Single _AgentRadius_k__BackingField; // 0x5C
		::System::Boolean _IsPostSmooth_k__BackingField; // 0x60
		::System::Boolean AFLJILDNMHA; // 0x61
		::System::Boolean HHBGOBMFMML; // 0x62
		::System::Byte _padding0[0x1];
		::System::Int32 ECMGHKJIKNL; // 0x64
		::UnityEngine::LayerMask _AgentLayerMask_k__BackingField; // 0x68
		::RPGTools::Octree::Agent::AgentCurveNavigationParams IJIHPGHKLIF; // 0x6C
		::UnityEngine::Vector3 GLDEBFOKEMJ; // 0x74
		// static const ::System::Object BFMOKCBGHKO; // 0x0
		// static const ::System::Object LLBLHENJGKJ; // 0x0
		::System::Void _ctor(::System::Single a1, ::UnityEngine::LayerMask a2, ::Il2CppArray<::NGLFOJKOKBH*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::LayerMask, ::Il2CppArray<::NGLFOJKOKBH*>*))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean APLFKDMICPL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentCurveNavigationParams a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentCurveNavigationParams))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_APLFKDMICPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NKLGMKPELJL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentCurveNavigationParams a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentCurveNavigationParams))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_NKLGMKPELJL_OFFSET))(this, a1, a2, a3);
		}

		::FKDIDBGBGMF NOIIDIBKOBK(::UnityEngine::Vector3 a1)
		{
			return ((::FKDIDBGBGMF(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_NOIIDIBKOBK_OFFSET))(this, a1);
		}

		::System::Void FPHBEPKCANO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_FPHBEPKCANO_OFFSET))(this);
		}

		::System::Boolean LADLGEJDJGG(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_LADLGEJDJGG_OFFSET))(this, a1);
		}

		::System::Void DPIPOHBIJAM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_DPIPOHBIJAM_OFFSET))(this, a1);
		}

		::System::Void FMFIPMDNDOF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_FMFIPMDNDOF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OOCNHBAAHOK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_OOCNHBAAHOK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LFOANHDCNPD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_LFOANHDCNPD_OFFSET))(this, a1);
		}

		::System::Void OGGCBJKOJIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_OGGCBJKOJIK_OFFSET))(this);
		}

		::System::Void ILMGEGNIKLC(::System::Collections::Generic::List_1<::MOAAMGJICCD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MOAAMGJICCD*>*))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_ILMGEGNIKLC_OFFSET))(this, a1);
		}

		::System::Void JDDGOLCOPKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_JDDGOLCOPKG_OFFSET))(this);
		}

		::System::Void KLEOOGEHDKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_KLEOOGEHDKN_OFFSET))(this);
		}

		::System::Void LEKNNKAOIKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_LEKNNKAOIKM_OFFSET))(this, a1);
		}

		::System::Boolean GDOAONAHJHD(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_GDOAONAHJHD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BOOHHGMEONG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_BOOHHGMEONG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsPostSmooth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_GET_ISPOSTSMOOTH_OFFSET))(this);
		}

		::System::Void set_IsPostSmooth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_SET_ISPOSTSMOOTH_OFFSET))(this, a1);
		}

		::System::Boolean CLOCFNBJLFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_CLOCFNBJLFE_OFFSET))(this);
		}

		::System::Boolean BDDPMCBGGLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_BDDPMCBGGLI_OFFSET))(this);
		}

		::System::Single get_AgentRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_GET_AGENTRADIUS_OFFSET))(this);
		}

		::UnityEngine::LayerMask get_AgentLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_GET_AGENTLAYERMASK_OFFSET))(this);
		}

		::System::Single KCLKFLBNFIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_KCLKFLBNFIP_OFFSET))(this);
		}

		::System::Single JGGMBAKHOIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEOAGPKIE_JGGMBAKHOIC_OFFSET))(this);
		}

	};
