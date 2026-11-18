#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/MonoComicKeyEventBase.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ComicImgStyle; }
namespace MoleMole { class ComicPartInfo; }
namespace MoleMole { class ComicScreenInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class SplitScreenEvent; }

#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ALJNKBIPAEM_OFFSET UNITYSDK_OFFSET(0x127604A0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1275B5A0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_DEAGDCOOELJ_OFFSET UNITYSDK_OFFSET(0x1275EB40)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_EOKGEIOGBMF_OFFSET UNITYSDK_OFFSET(0x12760550)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_FFJJKPBHKPC_OFFSET UNITYSDK_OFFSET(0x1275C4F0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETBGNODESBYLOCATION_OFFSET UNITYSDK_OFFSET(0x1275E660)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGDECOROOT_OFFSET UNITYSDK_OFFSET(0x1275FEA0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGMOVEVECTORWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x1275FDF0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGOBJBYPART_OFFSET UNITYSDK_OFFSET(0x1275DCA0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x1275B580)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_SELFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1275D8E0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_SELFRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1275DA60)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GLFFPBONLCL_OFFSET UNITYSDK_OFFSET(0x1275FFD0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_HMODAHNFCNI_OFFSET UNITYSDK_OFFSET(0x1275CBA0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ICJNDBDMCCN_OFFSET UNITYSDK_OFFSET(0x1275CE00)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_IIOFIEGGMMG_OFFSET UNITYSDK_OFFSET(0x12760330)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_INITBYSTYLECONFIG_OFFSET UNITYSDK_OFFSET(0x1275CD90)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_IOODENDDGEG_OFFSET UNITYSDK_OFFSET(0x1275EFC0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_IOPABPJIMGE_OFFSET UNITYSDK_OFFSET(0x127605F0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0x1275E7C0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_MAONANOPIEJ_OFFSET UNITYSDK_OFFSET(0x1275C970)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_NCBIBDGHBPM_OFFSET UNITYSDK_OFFSET(0x1275FF20)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1275DC50)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RECORDNODESFORCURTAIN_OFFSET UNITYSDK_OFFSET(0x1275F550)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESETCURTAINSTATETODEFAULT_OFFSET UNITYSDK_OFFSET(0x1275F880)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1275B810)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESET_OFFSET UNITYSDK_OFFSET(0x1275CD40)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SAMESTYLE_OFFSET UNITYSDK_OFFSET(0x1275DBF0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SETIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1275DDE0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x1275B590)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SIMULATEANIMPROGRESSFOROUTER_OFFSET UNITYSDK_OFFSET(0x1275FE40)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_STARTCOMICANIMATION_OFFSET UNITYSDK_OFFSET(0x1275E810)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_STARTCURTAINANIMATION_OFFSET UNITYSDK_OFFSET(0x1275F7D0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_TRIGGERWHENSPLITSCREENFINISH_OFFSET UNITYSDK_OFFSET(0x1275F440)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x1275B640)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12760160)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicImgComponent_TypeDefinitionIndex = 49198;

	class MonoComicImgComponent : public ::MoleMole::Comic::MonoComicKeyEventBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>* JKDGOLCFAIB; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* FCACJEGLANK; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* NOLKEHCGGCM; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* CINNKLOCKEF; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* JBMJJAKJBMF; // 0x70
		::UnityEngine::Transform* NADLODANDGI; // 0x78
		::UnityEngine::Transform* MBGBEBFKDDL; // 0x80
		::UnityEngine::CanvasGroup* JHOEJAKPCMN; // 0x88
		::MoleMole::ComicImgStyle* DFMKILICPFB; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::ComicScreenInfo*>* AFDKGNOIJJG; // 0x98
		::System::Collections::Generic::List_1<::System::Object*>* BLOHKEOHNAE; // 0xA0
		::System::Collections::Generic::Dictionary_2<::MoleMole::ComicImgPart, ::UnityEngine::Vector2>* BDPGNEIPGAI; // 0xA8
		::System::Collections::Generic::HashSet_1<::MoleMole::ComicImgPart>* PCGHDBNPOPE; // 0xB0
		::System::Boolean AFCBOKFJJCE; // 0xB8
		::System::Byte _padding0[0x7];
		::UnityEngine::AnimationCurve* BDGDJJALNCJ; // 0xC0
		::MoleMole::ComicScreenInfo* COOOIKHADAO; // 0xC8
		::System::Action* GJJFBEGOGOI; // 0xD0
		::System::String* OMMOFJOLHNN; // 0xD8
		::UnityEngine::GameObject* OMPHGGCEIBD; // 0xE0
		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* NAGOMMIKEDP; // 0xE8
		::System::Collections::Generic::List_1<::System::Object*>* BDJEMFDEKLP; // 0xF0
		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* BOJFNBCDHIL; // 0xF8
		::System::Single LPKMHAGLCLP; // 0x100
		::System::Boolean BFFCOPGIJGG; // 0x104
		::System::Byte _padding1[0x3];
		::System::Single EAKONPNCOFP; // 0x108
		::System::Single LEMHKPCCICG; // 0x10C
		::System::Boolean MNAGCMOEGJF; // 0x110
		::System::Boolean LDAJDAELDOD; // 0x111
		::System::Byte _padding2[0x2];
		::System::Single ICLCGBAHCIE; // 0x114
		::System::Single ACNCAAGKFLF; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_ASSETPATH_OFFSET))(this);
		}

		::System::Void set_AssetPath(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SET_ASSETPATH_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_UPDATETIME_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESET_OFFSET))(this);
		}

		::System::Void InitByStyleConfig(::MoleMole::ComicImgStyle* DEICIAHOEAD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_INITBYSTYLECONFIG_OFFSET))(this, DEICIAHOEAD);
		}

		::UnityEngine::GameObject* get_SelfGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_SELFGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_SelfRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_SELFRECTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean SameStyle(::MoleMole::ComicImgStyle* IFBIKDHCCOF)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ComicImgStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SAMESTYLE_OFFSET))(this, IFBIKDHCCOF);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetImgObjByPart(::MoleMole::ComicImgPart DDCKPCOODAM)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGOBJBYPART_OFFSET))(this, DDCKPCOODAM);
		}

		::System::Void SetImageList(::System::Collections::Generic::List_1<::System::Object*>* BLOHKEOHNAE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SETIMAGELIST_OFFSET))(this, BLOHKEOHNAE);
		}

		::System::Void GetBGNodesByLocation(::MoleMole::ComicImgPart DDCKPCOODAM, ::UnityEngine::Transform*& LODPMIHLJBA, ::UnityEngine::Transform*& PLMPJKECMMF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgPart, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETBGNODESBYLOCATION_OFFSET))(this, DDCKPCOODAM, LODPMIHLJBA, PLMPJKECMMF);
		}

		::System::Boolean IsPlayingAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ISPLAYINGANIMATION_OFFSET))(this);
		}

		::System::Void StartComicAnimation(::UnityEngine::Timeline::SplitScreenEvent* LOEFAGKJLAO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SplitScreenEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_STARTCOMICANIMATION_OFFSET))(this, LOEFAGKJLAO);
		}

		::System::Void TriggerWhenSplitScreenFinish(::System::Action* DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_TRIGGERWHENSPLITSCREENFINISH_OFFSET))(this, DMPEOJCCCLO);
		}

		::System::Void RecordNodesForCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RECORDNODESFORCURTAIN_OFFSET))(this);
		}

		::System::Void StartCurtainAnimation(::System::Single NHLCCIEKEPD, ::System::Single FNIOFNFDEEL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_STARTCURTAINANIMATION_OFFSET))(this, NHLCCIEKEPD, FNIOFNFDEEL);
		}

		::System::Void ResetCurtainStateToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESETCURTAINSTATETODEFAULT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* GetImgMoveVectorWhenSplitScreen()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGMOVEVECTORWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Void SimulateAnimProgressForOuter(::System::Single PMGFIHJAJHL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SIMULATEANIMPROGRESSFOROUTER_OFFSET))(this, PMGFIHJAJHL);
		}

		::UnityEngine::RectTransform* GetImgDecoRoot(::System::Boolean HGADNEALGDH, ::MoleMole::ComicImgPart OLLCOEKKMDO, ::System::Int32 KMOHKCADPNA)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Boolean, ::MoleMole::ComicImgPart, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGDECOROOT_OFFSET))(this, HGADNEALGDH, OLLCOEKKMDO, KMOHKCADPNA);
		}

		::UnityEngine::RectTransform* NCBIBDGHBPM(::System::Int32 KMOHKCADPNA)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_NCBIBDGHBPM_OFFSET))(this, KMOHKCADPNA);
		}

		::UnityEngine::RectTransform* GLFFPBONLCL(::MoleMole::ComicImgPart OLLCOEKKMDO, ::System::Int32 KMOHKCADPNA)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::MoleMole::ComicImgPart, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GLFFPBONLCL_OFFSET))(this, OLLCOEKKMDO, KMOHKCADPNA);
		}

		::System::Void ICJNDBDMCCN(::MoleMole::ComicImgStyle* DEICIAHOEAD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ICJNDBDMCCN_OFFSET))(this, DEICIAHOEAD);
		}

		::System::Void ALJNKBIPAEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ALJNKBIPAEM_OFFSET))(this);
		}

		::UnityEngine::Transform* HMODAHNFCNI(::UnityEngine::RectTransform* KEMCCOLLBMC, ::System::Boolean PKBDIEJPDOL)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_HMODAHNFCNI_OFFSET))(this, KEMCCOLLBMC, PKBDIEJPDOL);
		}

		::System::Void FFJJKPBHKPC(::System::Single PMGFIHJAJHL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_FFJJKPBHKPC_OFFSET))(this, PMGFIHJAJHL);
		}

		::System::Void IOODENDDGEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_IOODENDDGEG_OFFSET))(this);
		}

		::UnityEngine::RectTransform* IIOFIEGGMMG(::UnityEngine::Transform* PKPABDCIDDD)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_IIOFIEGGMMG_OFFSET))(this, PKPABDCIDDD);
		}

		::System::Void DEAGDCOOELJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_DEAGDCOOELJ_OFFSET))(this);
		}

		::System::Void EOKGEIOGBMF(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_EOKGEIOGBMF_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean IOPABPJIMGE(::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>* OEKAANBPGDM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_IOPABPJIMGE_OFFSET))(this, OEKAANBPGDM);
		}

		::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>* MAONANOPIEJ()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_MAONANOPIEJ_OFFSET))(this);
		}
	};
}
