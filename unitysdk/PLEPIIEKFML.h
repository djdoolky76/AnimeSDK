#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CruiseSpeedSignType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/RPG/GameCore/SoftDeathAreaState.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BHJLLBNDCLL;
class MABKFJCEPFH;
class NAFGDKPCCOA;
class NEOCEOCDEAF;
class NKAAAAHDBEG;
class OEPOKOJHKEL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define PLEPIIEKFML_AMJDEFILLEA_OFFSET UNITYSDK_OFFSET(0xCC30C30)
#define PLEPIIEKFML_BBBHGNPCJLC_OFFSET UNITYSDK_OFFSET(0xCC338E0)
#define PLEPIIEKFML_COFNNHDFCCN_OFFSET UNITYSDK_OFFSET(0xCC321C0)
#define PLEPIIEKFML_CTOR_OFFSET UNITYSDK_OFFSET(0xCC34100)
#define PLEPIIEKFML_DEOHIGOGJAC_OFFSET UNITYSDK_OFFSET(0xCC337C0)
#define PLEPIIEKFML_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC31A90)
#define PLEPIIEKFML_DMOBPKLKLII_OFFSET UNITYSDK_OFFSET(0xCC33C30)
#define PLEPIIEKFML_EPHMADCJPHH_OFFSET UNITYSDK_OFFSET(0xCC32E60)
#define PLEPIIEKFML_FEKEMGHHHFN_OFFSET UNITYSDK_OFFSET(0xCC33BB0)
#define PLEPIIEKFML_FLLIMMFILIA_OFFSET UNITYSDK_OFFSET(0xCC32AE0)
#define PLEPIIEKFML_GET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0xCC340C0)
#define PLEPIIEKFML_GET_LASTDIRECTIONFLAG_OFFSET UNITYSDK_OFFSET(0xCC340A0)
#define PLEPIIEKFML_HGEIFFBIJGN_OFFSET UNITYSDK_OFFSET(0xCC33430)
#define PLEPIIEKFML_HIMDEGFDMCP_OFFSET UNITYSDK_OFFSET(0xCC33690)
#define PLEPIIEKFML_HMHCJNCMKMJ_OFFSET UNITYSDK_OFFSET(0xCC33A30)
#define PLEPIIEKFML_IBHDEIDLMGM_OFFSET UNITYSDK_OFFSET(0xCC31780)
#define PLEPIIEKFML_IHDDNJBKACI_OFFSET UNITYSDK_OFFSET(0xCC31C20)
#define PLEPIIEKFML_JICCMCOKECD_OFFSET UNITYSDK_OFFSET(0xCC31160)
#define PLEPIIEKFML_JJACKELIMGH_OFFSET UNITYSDK_OFFSET(0xCC33C90)
#define PLEPIIEKFML_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCC31700)
#define PLEPIIEKFML_MEBEHCFBJFI_OFFSET UNITYSDK_OFFSET(0xCC31560)
#define PLEPIIEKFML_NCNCJINKGFP_OFFSET UNITYSDK_OFFSET(0xCC32EC0)
#define PLEPIIEKFML_NGMGIGFBLEN_OFFSET UNITYSDK_OFFSET(0xCC339B0)
#define PLEPIIEKFML_NMEAFIOHGCL_OFFSET UNITYSDK_OFFSET(0xCC32230)
#define PLEPIIEKFML_NOLNFEKAOME_OFFSET UNITYSDK_OFFSET(0xCC33830)
#define PLEPIIEKFML_PADMHEPMNPM_OFFSET UNITYSDK_OFFSET(0xCC30F20)
#define PLEPIIEKFML_PAJACIKAEJH_OFFSET UNITYSDK_OFFSET(0xCC31150)
#define PLEPIIEKFML_PIDOCOIJJAA_OFFSET UNITYSDK_OFFSET(0xCC311E0)
#define PLEPIIEKFML_SET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0xCC340E0)
#define PLEPIIEKFML_SET_LASTDIRECTIONFLAG_OFFSET UNITYSDK_OFFSET(0xCC340B0)
#define PLEPIIEKFML_TICK_OFFSET UNITYSDK_OFFSET(0xCC30B60)

inline static constexpr unsigned int PLEPIIEKFML_TypeDefinitionIndex = 58872;

	class PLEPIIEKFML : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* MIPPBPEPDDK; // 0x18
		::System::String* KNFOCKAOEPD; // 0x20
		::NAFGDKPCCOA* COMIPKMGLGF; // 0x28
		::RPG::GameCore::GameEntity* PALLHGIEPNJ; // 0x30
		::System::String* PMGAOMKHAPF; // 0x38
		::NAFGDKPCCOA* ELHPNDFJBJB; // 0x40
		::NEOCEOCDEAF* CCDGFLFIEJP; // 0x48
		::UnityEngine::AnimationCurve* FNGLICACAHF; // 0x50
		::NKAAAAHDBEG* CDIDJDCHOEA; // 0x58
		::UnityEngine::AnimationCurve* ANJLJICAKLE; // 0x60
		::System::Int32 DGGFEHLANFN; // 0x68
		::System::Int32 NLGCHCLAKBO; // 0x6C
		::RPG::GameCore::SoftDeathAreaState FELFGEOJJFK; // 0x70
		::System::Single HAECODGLOEH; // 0x74
		::UnityEngine::Vector3 COKCDIJPKKE; // 0x78
		::System::Single CKAHGFPOPCG; // 0x84
		::RPG::MVector3 _AnimMotionDelta_k__BackingField; // 0x88
		::System::Int32 MIBPLMILJKC; // 0x94
		::System::Int32 _LastDirectionFlag_k__BackingField; // 0x98
		::UnityEngine::Vector3 OGMHJBILMEG; // 0x9C
		::System::Single CDCDJAMDHDC; // 0xA8
		::System::Single FKBKJDAIDNC; // 0xAC
		::System::Boolean BAFEMNFGPNC; // 0xB0
		::System::Byte _padding0[0x3];
		::RPG::GameCore::StringHash KJMBMAOEIGO; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_TICK_OFFSET))(this, a1);
		}

		::System::Void MEBEHCFBJFI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLEPIIEKFML_MEBEHCFBJFI_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_DISPOSE_OFFSET))(this);
		}

		::System::Void IHDDNJBKACI(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3, ::BHJLLBNDCLL* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::BHJLLBNDCLL*))((::PBYTE)hIl2Cpp + PLEPIIEKFML_IHDDNJBKACI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NMEAFIOHGCL(::RPG::GameCore::TaskContext* a1, ::OEPOKOJHKEL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OEPOKOJHKEL*))((::PBYTE)hIl2Cpp + PLEPIIEKFML_NMEAFIOHGCL_OFFSET))(this, a1, a2);
		}

		::System::Void NCNCJINKGFP(::RPG::GameCore::TaskContext* a1, ::MABKFJCEPFH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MABKFJCEPFH*))((::PBYTE)hIl2Cpp + PLEPIIEKFML_NCNCJINKGFP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::OrbitAreaState DEOHIGOGJAC()
		{
			return ((::RPG::GameCore::OrbitAreaState(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_DEOHIGOGJAC_OFFSET))(this);
		}

		::RPG::MVector3 NOLNFEKAOME(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + PLEPIIEKFML_NOLNFEKAOME_OFFSET))(this, a1);
		}

		::System::Void COFNNHDFCCN(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_COFNNHDFCCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PADMHEPMNPM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_PADMHEPMNPM_OFFSET))(this, a1);
		}

		::System::Void FEKEMGHHHFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_FEKEMGHHHFN_OFFSET))(this);
		}

		::System::Void BBBHGNPCJLC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_BBBHGNPCJLC_OFFSET))(this, a1);
		}

		::System::Void NGMGIGFBLEN(::NAFGDKPCCOA* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::NAFGDKPCCOA*, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_NGMGIGFBLEN_OFFSET))(this, a1, a2);
		}

		::System::Void HIMDEGFDMCP(::NAFGDKPCCOA* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::NAFGDKPCCOA*, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_HIMDEGFDMCP_OFFSET))(this, a1, a2);
		}

		::System::Void HMHCJNCMKMJ(::NAFGDKPCCOA* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::NAFGDKPCCOA*, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_HMHCJNCMKMJ_OFFSET))(this, a1, a2);
		}

		::System::Void EPHMADCJPHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_EPHMADCJPHH_OFFSET))(this);
		}

		::System::Void AMJDEFILLEA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_AMJDEFILLEA_OFFSET))(this, a1);
		}

		::System::Int32 HGEIFFBIJGN(::RPG::GameCore::CruiseSpeedSignType a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CruiseSpeedSignType, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_HGEIFFBIJGN_OFFSET))(this, a1, a2);
		}

		::System::Void FLLIMMFILIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_FLLIMMFILIA_OFFSET))(this);
		}

		::System::Void JICCMCOKECD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_JICCMCOKECD_OFFSET))(this);
		}

		::System::Void PIDOCOIJJAA(::NAFGDKPCCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAFGDKPCCOA*))((::PBYTE)hIl2Cpp + PLEPIIEKFML_PIDOCOIJJAA_OFFSET))(this, a1);
		}

		::System::Void JJACKELIMGH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLEPIIEKFML_JJACKELIMGH_OFFSET))(this, a1);
		}

		::System::Void IBHDEIDLMGM(::NAFGDKPCCOA* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::NAFGDKPCCOA*, ::System::Single))((::PBYTE)hIl2Cpp + PLEPIIEKFML_IBHDEIDLMGM_OFFSET))(this, a1, a2);
		}

		::System::Boolean PAJACIKAEJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_PAJACIKAEJH_OFFSET))(this);
		}

		::System::Int32 get_LastDirectionFlag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_GET_LASTDIRECTIONFLAG_OFFSET))(this);
		}

		::System::Void set_LastDirectionFlag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLEPIIEKFML_SET_LASTDIRECTIONFLAG_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_AnimMotionDelta()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_GET_ANIMMOTIONDELTA_OFFSET))(this);
		}

		::System::Void set_AnimMotionDelta(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + PLEPIIEKFML_SET_ANIMMOTIONDELTA_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* DMOBPKLKLII()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEPIIEKFML_DMOBPKLKLII_OFFSET))(this);
		}

	};
