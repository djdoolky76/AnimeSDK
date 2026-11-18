#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/KDCOHGFJLCM.h"
#include "unitysdk/KPBPGBNIDOK.h"
#include "unitysdk/LOKCOCGDLJM.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/NPCCrowd/CrowdPhysics/DitherState.h"
#include "unitysdk/PGCOGLDHMNF.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CNCDJPDKPBG;
class DHBPMCNNLCJ;
class HGGBGKKEBCC;
class JHACLFNMIKO;
class KFGGFDDILAG;
class KIKBNICCMDG;
class NCCGOIBPBGE;
namespace MoleMole { class FeaturePoint; }
namespace MoleMole { class InteractionPoint; }
namespace MoleMole { class MonoFeaturePoint; }
namespace MoleMole { class MonoInteractionPoint; }
namespace MoleMole { class MonoNpcLookIKParameter; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define BBMEACCONNF_AELNCFLIPGN_OFFSET UNITYSDK_OFFSET(0x182256F0)
#define BBMEACCONNF_DCJKBOAJEHJ_OFFSET UNITYSDK_OFFSET(0x18225370)
#define BBMEACCONNF_DMNCJCLDEGM_OFFSET UNITYSDK_OFFSET(0x18225310)
#define BBMEACCONNF_EFHKODFKGNA_OFFSET UNITYSDK_OFFSET(0x182254D0)
#define BBMEACCONNF_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x18225590)
#define BBMEACCONNF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18224C60)
#define BBMEACCONNF_GET_CHECKSTANDPOS_OFFSET UNITYSDK_OFFSET(0x18224A40)
#define BBMEACCONNF_GET_CHECKSTANDTIMER_OFFSET UNITYSDK_OFFSET(0x18224A20)
#define BBMEACCONNF_GET_CHECKSTANDTIME_OFFSET UNITYSDK_OFFSET(0x18224A00)
#define BBMEACCONNF_GET_CURINTERACTID_OFFSET UNITYSDK_OFFSET(0x18224AE0)
#define BBMEACCONNF_GET_INTERACTADVANCE_OFFSET UNITYSDK_OFFSET(0x18224AC0)
#define BBMEACCONNF_GET_INTERACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x18224B00)
#define BBMEACCONNF_GET_ISINTERACTING_OFFSET UNITYSDK_OFFSET(0x18224BE0)
#define BBMEACCONNF_GET_MAXWAITIDLETIME_OFFSET UNITYSDK_OFFSET(0x182249C0)
#define BBMEACCONNF_GET_MONOINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x18224750)
#define BBMEACCONNF_GET_MOVEDIRECTIONANGLEOFFSETINITIALIZED_OFFSET UNITYSDK_OFFSET(0x182247C0)
#define BBMEACCONNF_GET_MOVEDIRECTIONANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x182247A0)
#define BBMEACCONNF_GET_NAVFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18224720)
#define BBMEACCONNF_GET_NAVFLAGS_OFFSET UNITYSDK_OFFSET(0x182248C0)
#define BBMEACCONNF_GET_NAVINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x182247E0)
#define BBMEACCONNF_GET_NAVLOCK_OFFSET UNITYSDK_OFFSET(0x18224740)
#define BBMEACCONNF_GET_NAVPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x182248D0)
#define BBMEACCONNF_GET_NAVPLAYERMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x182248A0)
#define BBMEACCONNF_GET_NEEDDETOUR_OFFSET UNITYSDK_OFFSET(0x18224A80)
#define BBMEACCONNF_GET_NEEDRESETROTATE_OFFSET UNITYSDK_OFFSET(0x18224B80)
#define BBMEACCONNF_GET_NOTURNANIM_OFFSET UNITYSDK_OFFSET(0x182249A0)
#define BBMEACCONNF_GET_ORIFORWARD_OFFSET UNITYSDK_OFFSET(0x18224BA0)
#define BBMEACCONNF_GET_ORIGINALDIRECTION_OFFSET UNITYSDK_OFFSET(0x18224C20)
#define BBMEACCONNF_GET_OVERRIDERADIUS_OFFSET UNITYSDK_OFFSET(0x18224700)
#define BBMEACCONNF_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x18224770)
#define BBMEACCONNF_GET_ROTATETOORIGNALDIRECTIONWHENEXITINTERACT_OFFSET UNITYSDK_OFFSET(0x18224C00)
#define BBMEACCONNF_GET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x18224AA0)
#define BBMEACCONNF_GET_SAVEDSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x18224780)
#define BBMEACCONNF_GET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0x18224990)
#define BBMEACCONNF_GET_WAITIDLEREMAININGTIME_OFFSET UNITYSDK_OFFSET(0x182249E0)
#define BBMEACCONNF_HAACOIHBLJM_OFFSET UNITYSDK_OFFSET(0x182256A0)
#define BBMEACCONNF_HANDLEPLAYERNAVIGATEDONE_OFFSET UNITYSDK_OFFSET(0x182248F0)
#define BBMEACCONNF_HGNCFAPBMEC_OFFSET UNITYSDK_OFFSET(0x182251F0)
#define BBMEACCONNF_JEMNKNCDLNN_OFFSET UNITYSDK_OFFSET(0x18224460)
#define BBMEACCONNF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x18225450)
#define BBMEACCONNF_LIGPIGEJJLI_OFFSET UNITYSDK_OFFSET(0x18225440)
#define BBMEACCONNF_MBIKANHJFEF_OFFSET UNITYSDK_OFFSET(0x18225240)
#define BBMEACCONNF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x18225610)
#define BBMEACCONNF_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x18225530)
#define BBMEACCONNF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18223F70)
#define BBMEACCONNF_SET_CHECKSTANDPOS_OFFSET UNITYSDK_OFFSET(0x18224A60)
#define BBMEACCONNF_SET_CHECKSTANDTIMER_OFFSET UNITYSDK_OFFSET(0x18224A30)
#define BBMEACCONNF_SET_CHECKSTANDTIME_OFFSET UNITYSDK_OFFSET(0x18224A10)
#define BBMEACCONNF_SET_CURINTERACTID_OFFSET UNITYSDK_OFFSET(0x18224AF0)
#define BBMEACCONNF_SET_INTERACTADVANCE_OFFSET UNITYSDK_OFFSET(0x18224AD0)
#define BBMEACCONNF_SET_INTERACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x18224B10)
#define BBMEACCONNF_SET_ISINTERACTING_OFFSET UNITYSDK_OFFSET(0x18224BF0)
#define BBMEACCONNF_SET_MAXWAITIDLETIME_OFFSET UNITYSDK_OFFSET(0x182249D0)
#define BBMEACCONNF_SET_MONOINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x18224760)
#define BBMEACCONNF_SET_MOVEDIRECTIONANGLEOFFSETINITIALIZED_OFFSET UNITYSDK_OFFSET(0x182247D0)
#define BBMEACCONNF_SET_MOVEDIRECTIONANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x182247B0)
#define BBMEACCONNF_SET_NAVFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18224730)
#define BBMEACCONNF_SET_NAVINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x182247F0)
#define BBMEACCONNF_SET_NAVPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x182248E0)
#define BBMEACCONNF_SET_NAVPLAYERMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x182248B0)
#define BBMEACCONNF_SET_NEEDDETOUR_OFFSET UNITYSDK_OFFSET(0x18224A90)
#define BBMEACCONNF_SET_NEEDRESETROTATE_OFFSET UNITYSDK_OFFSET(0x18224B90)
#define BBMEACCONNF_SET_NOTURNANIM_OFFSET UNITYSDK_OFFSET(0x182249B0)
#define BBMEACCONNF_SET_ORIFORWARD_OFFSET UNITYSDK_OFFSET(0x18224BC0)
#define BBMEACCONNF_SET_ORIGINALDIRECTION_OFFSET UNITYSDK_OFFSET(0x18224C40)
#define BBMEACCONNF_SET_OVERRIDERADIUS_OFFSET UNITYSDK_OFFSET(0x18224710)
#define BBMEACCONNF_SET_ROTATETOORIGNALDIRECTIONWHENEXITINTERACT_OFFSET UNITYSDK_OFFSET(0x18224C10)
#define BBMEACCONNF_SET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x18224AB0)
#define BBMEACCONNF_SET_SAVEDSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x18224790)
#define BBMEACCONNF_SET_WAITIDLEREMAININGTIME_OFFSET UNITYSDK_OFFSET(0x182249F0)
#define BBMEACCONNF_TRIGGERINTERACTDIRECTLY_OFFSET UNITYSDK_OFFSET(0x18224B20)
#define BBMEACCONNF__CCTOR_OFFSET UNITYSDK_OFFSET(0x18224CB0)
#define BBMEACCONNF__CTOR_OFFSET UNITYSDK_OFFSET(0x18224D50)

inline static constexpr unsigned int BBMEACCONNF_TypeDefinitionIndex = 47185;

class BBMEACCONNF : public ::MJHDNMKGLBJ
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_LIMGOODCOBC()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(BBMEACCONNF_TypeDefinitionIndex)->GetStaticField(0x4CF30);
	}
	// static const ::System::Int32 AAGJDCAKHFF = 0x1; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x65; // 0x0
	::System::String* LBLIIIDHLHM; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* OLALCJMKLNG; // 0x50
	::NCCGOIBPBGE* OJNOHDMHFFB; // 0x58
	::MoleMole::MonoNpcLookIKParameter* DEBJCCCPENJ; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* GMJMEELBFHG; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* MACABFPPBGB; // 0x70
	::MoleMole::Battle::Entity* CDODPBDOIFF; // 0x78
	::MoleMole::InteractionPoint* JGKJLGNOPFB; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GHGCIKNEGBI; // 0x88
	::HGGBGKKEBCC* EHFBAPOFEDN; // 0x90
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DGCGLIJKGOD; // 0x98
	::CNCDJPDKPBG* EPFDMKNHFBH; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* BEKBLEHDPBO; // 0xA8
	::MoleMole::MonoInteractionPoint* NMMOPILALHI; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::Int32>* EDKIHOPOLCL; // 0xB8
	::System::Collections::Generic::List_1<::System::Int32>* NAOPOODFFGB; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* AKFGKHAEBPM; // 0xC8
	::KFGGFDDILAG* BLDIPJGBKOG; // 0xD0
	::MoleMole::MonoFeaturePoint* MCEGPMHCECM; // 0xD8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* MONADEDDPGJ; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>* KDHOHKMKFFP; // 0xE8
	::System::Action* GPKCCJLNMEA; // 0xF0
	::MoleMole::FeaturePoint* PLHLFBIJDNH; // 0xF8
	::System::Single _IJMKAPMCODJ_k__BackingField; // 0x100
	::System::Single _KHKBLHPDIIA_k__BackingField; // 0x104
	::System::Int32 BGBFNOKLOBI; // 0x108
	::System::Boolean EJPLKOJHCOJ; // 0x10C
	::System::Boolean _NMNLMEGMJHM_k__BackingField; // 0x10D
	::System::Boolean PGADHJLDJAN; // 0x10E
	::System::Boolean JEDFFOMIGMM; // 0x10F
	::System::Single ADIDNGEABBD; // 0x110
	::System::Single ADABLFLNODL; // 0x114
	::UnityEngine::Vector3 OANHPHOGPJI; // 0x118
	::System::Boolean OOMAAFKCCKA; // 0x124
	::System::Boolean CDPEIHNPCMH; // 0x125
	::PGCOGLDHMNF LBLPPBKKCAM; // 0x126
	::System::Boolean JFOELMNEHDF; // 0x127
	::System::UInt32 ACMIEHLNKEI; // 0x128
	::UnityEngine::Vector3 ECKILCNDCMP; // 0x12C
	::NPCCrowd::CrowdPhysics::DitherState NPDHDGLDDON; // 0x138
	::System::Boolean FIBDHFDNIEB; // 0x144
	::System::Boolean _BDANLHFDJEO_k__BackingField; // 0x145
	::System::Boolean DCMFBGBBKKJ; // 0x146
	::System::Byte _padding0[0x1];
	::System::Single _ECHGHIHBHDK_k__BackingField; // 0x148
	::System::Byte _padding1[0x4];
	::System::UInt64 MGMDJCCEAIB; // 0x150
	::UnityEngine::Vector2 _AKFMAPCCOOA_k__BackingField; // 0x158
	::System::Single GBEFNDPENOA; // 0x160
	::KDCOHGFJLCM EEOGIAMKCHJ; // 0x164
	::LOKCOCGDLJM JKBLDFBGBPK; // 0x168
	::System::Single _EGPCHCMGMCA_k__BackingField; // 0x16C
	::System::Boolean MPFMOGCPKKI; // 0x170
	::System::Boolean NPCFILCEPDN; // 0x171
	::System::Byte _padding2[0x2];
	::System::Single _HGNANPPGNMB_k__BackingField; // 0x174
	::UnityEngine::Vector3 _NDHGOMFOCGO_k__BackingField; // 0x178
	::Foundation::Coroutine::CoroutineHandle BELKCKIINHL; // 0x184
	::System::Single _BJPCGFBPKAC_k__BackingField; // 0x188
	::System::Int32 KPHDFNINFHK; // 0x18C
	::System::Boolean _OMDBCEGOCPI_k__BackingField; // 0x190
	::System::Boolean NMJHOINIACL; // 0x191
	::System::Boolean COANIBDJLCI; // 0x192
	::System::Boolean MNKDKFKCKKB; // 0x193
	::System::Single CAOGFGOGMDP; // 0x194
	::System::Int32 ECKHPAEOOMA; // 0x198

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBMEACCONNF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_ONCLEAN_OFFSET))(this);
	}

	::System::Single get_OverrideRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_OVERRIDERADIUS_OFFSET))(this);
	}

	::System::Void set_OverrideRadius(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_OVERRIDERADIUS_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Action* get_NavFinishedCallback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_NAVFINISHEDCALLBACK_OFFSET))(this);
	}

	::System::Void set_NavFinishedCallback(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_NAVFINISHEDCALLBACK_OFFSET))(this, EGEGIMGMJHN);
	}

	::PGCOGLDHMNF& get_NavLock()
	{
		return ((::PGCOGLDHMNF&(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_NAVLOCK_OFFSET))(this);
	}

	::MoleMole::MonoInteractionPoint* get_MonoInteractionPoint()
	{
		return ((::MoleMole::MonoInteractionPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_MONOINTERACTIONPOINT_OFFSET))(this);
	}

	::System::Void set_MonoInteractionPoint(::MoleMole::MonoInteractionPoint* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInteractionPoint*))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_MONOINTERACTIONPOINT_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Battle::Entity* get_OwnerEntity()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_OWNERENTITY_OFFSET))(this);
	}

	::UnityEngine::Vector2 get_SavedSpeedRatio()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_SAVEDSPEEDRATIO_OFFSET))(this);
	}

	::System::Void set_SavedSpeedRatio(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_SAVEDSPEEDRATIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single get_MoveDirectionAngleOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_MOVEDIRECTIONANGLEOFFSET_OFFSET))(this);
	}

	::System::Void set_MoveDirectionAngleOffset(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_MOVEDIRECTIONANGLEOFFSET_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean get_MoveDirectionAngleOffsetInitialized()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_MOVEDIRECTIONANGLEOFFSETINITIALIZED_OFFSET))(this);
	}

	::System::Void set_MoveDirectionAngleOffsetInitialized(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_MOVEDIRECTIONANGLEOFFSETINITIALIZED_OFFSET))(this, EGEGIMGMJHN);
	}

	::DHBPMCNNLCJ* get_NavInteractionPoint()
	{
		return ((::DHBPMCNNLCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_NAVINTERACTIONPOINT_OFFSET))(this);
	}

	::System::Void set_NavInteractionPoint(::DHBPMCNNLCJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DHBPMCNNLCJ*))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_NAVINTERACTIONPOINT_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 get_NavPlayerMoveIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_NAVPLAYERMOVEINDEX_OFFSET))(this);
	}

	::System::Void set_NavPlayerMoveIndex(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_NAVPLAYERMOVEINDEX_OFFSET))(this, EGEGIMGMJHN);
	}

	::KDCOHGFJLCM& get_NavFlags()
	{
		return ((::KDCOHGFJLCM&(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_NAVFLAGS_OFFSET))(this);
	}

	::CNCDJPDKPBG* get_NavPathFollow()
	{
		return ((::CNCDJPDKPBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_NAVPATHFOLLOW_OFFSET))(this);
	}

	::System::Void set_NavPathFollow(::CNCDJPDKPBG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CNCDJPDKPBG*))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_NAVPATHFOLLOW_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HandlePlayerNavigateDone(::MoleMole::Battle::Entity* BDHOILPIGKB, ::System::Boolean GABGACBGGMB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_HANDLEPLAYERNAVIGATEDONE_OFFSET))(this, BDHOILPIGKB, GABGACBGGMB);
	}

	::System::Boolean get_UseNavMesh()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_USENAVMESH_OFFSET))(this);
	}

	::System::Boolean get_NoTurnAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_NOTURNANIM_OFFSET))(this);
	}

	::System::Void set_NoTurnAnim(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_NOTURNANIM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single get_MaxWaitIdleTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_MAXWAITIDLETIME_OFFSET))(this);
	}

	::System::Void set_MaxWaitIdleTime(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_MAXWAITIDLETIME_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single get_WaitIdleRemainingTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_WAITIDLEREMAININGTIME_OFFSET))(this);
	}

	::System::Void set_WaitIdleRemainingTime(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_WAITIDLEREMAININGTIME_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single get_CheckStandTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_CHECKSTANDTIME_OFFSET))(this);
	}

	::System::Void set_CheckStandTime(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_CHECKSTANDTIME_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single get_CheckStandTimer()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_CHECKSTANDTIMER_OFFSET))(this);
	}

	::System::Void set_CheckStandTimer(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_CHECKSTANDTIMER_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 get_CheckStandPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_CHECKSTANDPOS_OFFSET))(this);
	}

	::System::Void set_CheckStandPos(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_CHECKSTANDPOS_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean get_NeedDetour()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_NEEDDETOUR_OFFSET))(this);
	}

	::System::Void set_NeedDetour(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_NEEDDETOUR_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 get_SavedMuteAnimatorMoveIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET))(this);
	}

	::System::Void set_SavedMuteAnimatorMoveIndex(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean get_InteractAdvance()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_INTERACTADVANCE_OFFSET))(this);
	}

	::System::Void set_InteractAdvance(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_INTERACTADVANCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 get_CurInteractID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_CURINTERACTID_OFFSET))(this);
	}

	::System::Void set_CurInteractID(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_CURINTERACTID_OFFSET))(this, EGEGIMGMJHN);
	}

	::LOKCOCGDLJM get_InteractiveState()
	{
		return ((::LOKCOCGDLJM(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_INTERACTIVESTATE_OFFSET))(this);
	}

	::System::Void set_InteractiveState(::LOKCOCGDLJM EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LOKCOCGDLJM))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_INTERACTIVESTATE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void TriggerInteractDirectly(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BBMEACCONNF_TRIGGERINTERACTDIRECTLY_OFFSET))(this, BCCENALHBHL, KECKGDFIALJ);
	}

	::System::Boolean get_NeedResetRotate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_NEEDRESETROTATE_OFFSET))(this);
	}

	::System::Void set_NeedResetRotate(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_NEEDRESETROTATE_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 get_OriForward()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_ORIFORWARD_OFFSET))(this);
	}

	::System::Void set_OriForward(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_ORIFORWARD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean get_IsInteracting()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_ISINTERACTING_OFFSET))(this);
	}

	::System::Void set_IsInteracting(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_ISINTERACTING_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean get_rotateToOrignalDirectionWhenExitInteract()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_ROTATETOORIGNALDIRECTIONWHENEXITINTERACT_OFFSET))(this);
	}

	::System::Void set_rotateToOrignalDirectionWhenExitInteract(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_ROTATETOORIGNALDIRECTIONWHENEXITINTERACT_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 get_OriginalDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GET_ORIGINALDIRECTION_OFFSET))(this);
	}

	::System::Void set_OriginalDirection(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BBMEACCONNF_SET_ORIGINALDIRECTION_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_GETCLASSID_OFFSET))(this);
	}

	::System::Void HGNCFAPBMEC(::HGGBGKKEBCC* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::HGGBGKKEBCC*))((::PBYTE)hIl2Cpp + BBMEACCONNF_HGNCFAPBMEC_OFFSET))(this, HMMMOCJAEOA);
	}

	::JHACLFNMIKO* MBIKANHJFEF()
	{
		return ((::JHACLFNMIKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_MBIKANHJFEF_OFFSET))(this);
	}

	::System::Void DMNCJCLDEGM(::KPBPGBNIDOK KKOGCPPLPNJ)
	{
		return ((::System::Void(*)(::PVOID, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + BBMEACCONNF_DMNCJCLDEGM_OFFSET))(this, KKOGCPPLPNJ);
	}

	::KIKBNICCMDG* DCJKBOAJEHJ()
	{
		return ((::KIKBNICCMDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_DCJKBOAJEHJ_OFFSET))(this);
	}

	::HGGBGKKEBCC* LIGPIGEJJLI()
	{
		return ((::HGGBGKKEBCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_LIGPIGEJJLI_OFFSET))(this);
	}

	static ::BBMEACCONNF* JFDOOELFAOA()
	{
		return ((::BBMEACCONNF*(*)())((::PBYTE)hIl2Cpp + BBMEACCONNF_JFDOOELFAOA_OFFSET))();
	}

	::System::Void EFHKODFKGNA(::KPBPGBNIDOK KKOGCPPLPNJ)
	{
		return ((::System::Void(*)(::PVOID, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + BBMEACCONNF_EFHKODFKGNA_OFFSET))(this, KKOGCPPLPNJ);
	}

	::System::UInt32 MFPMIFLLCAJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_MFPMIFLLCAJ_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::HGGBGKKEBCC* HMMMOCJAEOA, ::KFGGFDDILAG* DKKGNCNNBGJ)
	{
		return ((::System::Void(*)(::PVOID, ::HGGBGKKEBCC*, ::KFGGFDDILAG*))((::PBYTE)hIl2Cpp + BBMEACCONNF_GALGFCPKMGC_OFFSET))(this, HMMMOCJAEOA, DKKGNCNNBGJ);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean HAACOIHBLJM(::KPBPGBNIDOK KKOGCPPLPNJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + BBMEACCONNF_HAACOIHBLJM_OFFSET))(this, KKOGCPPLPNJ);
	}

	::System::Void JEMNKNCDLNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_JEMNKNCDLNN_OFFSET))(this);
	}

	::KFGGFDDILAG* AELNCFLIPGN()
	{
		return ((::KFGGFDDILAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_AELNCFLIPGN_OFFSET))(this);
	}
};
