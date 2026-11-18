#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMHIFCLDOAM.h"
#include "unitysdk/HLGGOFJIBHM.h"
#include "unitysdk/MLAPANAKCML.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_OOABFKDMAAA.h"
#include "unitysdk/OABGFGIBPHL.h"
#include "unitysdk/OKPFOMOALJK.h"
#include "unitysdk/PPNEHKEDMBK.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class GGPBCCEOONG;
class LGMMGPPLLHN;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class MonoGamepadVirtualCursor_CCursorTransitionParam; }
namespace MoleMole { class MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam; }
namespace MoleMole { class MonoGamepadVirtualCursor_GKOMHIKLIAL; }
namespace MoleMole { class MonoGamepadVirtualCursor_HKJAOAAIJAH; }
namespace MoleMole { class MonoGamepadVirtualCursor_NLOHLMCCMKH; }
namespace MoleMole { class MonoGamepadVirtualCursor_OILGIJNNPCI; }
namespace MoleMole { class MonoGamepadVirtualCursor_OOMOKMCIMHP; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_ACLACPPNLBO_OFFSET UNITYSDK_OFFSET(0x14698960)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_AILAEAKKNMI_OFFSET UNITYSDK_OFFSET(0x146976F0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_AMJOKPEJDCH_OFFSET UNITYSDK_OFFSET(0x14697D10)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_AOLBOBMIECN_OFFSET UNITYSDK_OFFSET(0x14697120)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_DICGBNHLALG_OFFSET UNITYSDK_OFFSET(0x14697750)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x14693630)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_EGLEIPIDDEB_OFFSET UNITYSDK_OFFSET(0x146940D0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_EHDMEKGNDPM_OFFSET UNITYSDK_OFFSET(0x14695980)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_FHCCBMPHBHJ_OFFSET UNITYSDK_OFFSET(0x146979B0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_FIJCPOACEEF_OFFSET UNITYSDK_OFFSET(0x14698160)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_FMLLCFINFDB_OFFSET UNITYSDK_OFFSET(0x14695370)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_FNNGPEIIPNC_OFFSET UNITYSDK_OFFSET(0x14692CF0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GCMIFBNEFCJ_OFFSET UNITYSDK_OFFSET(0x14697C60)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_CURRENTCURSORSCREENPOS_OFFSET UNITYSDK_OFFSET(0x14690EE0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_CURRENTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x14690ED0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_SCROLLVIEWWRAPPER_OFFSET UNITYSDK_OFFSET(0x14690C80)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GFMAJJCMDNB_OFFSET UNITYSDK_OFFSET(0x146980D0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GJLPOKHMOJI_OFFSET UNITYSDK_OFFSET(0x14699190)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GOFJJEFCFPO_OFFSET UNITYSDK_OFFSET(0x14691690)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x146935D0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HEDKEJGHLJK_OFFSET UNITYSDK_OFFSET(0x14697BB0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HOLJCCGECNF_OFFSET UNITYSDK_OFFSET(0x14691FC0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HPOKDICDKAA_OFFSET UNITYSDK_OFFSET(0x146981F0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_IDDBBFMNJMP_OFFSET UNITYSDK_OFFSET(0x14693020)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_IGAOCOLMELL_OFFSET UNITYSDK_OFFSET(0x14693340)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_IKMOMLCKEHG_OFFSET UNITYSDK_OFFSET(0x14694A70)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_IMHDDPANAMJ_OFFSET UNITYSDK_OFFSET(0x14698CE0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_ISRAYSEGMENTINTERSECT_OFFSET UNITYSDK_OFFSET(0x14695C60)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_JEADPKGPBCF_OFFSET UNITYSDK_OFFSET(0x14697D60)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_KHGMJKKFELJ_OFFSET UNITYSDK_OFFSET(0x14696350)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_KJLKHOPODEA_OFFSET UNITYSDK_OFFSET(0x146910B0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_KMKNDCPHIHC_OFFSET UNITYSDK_OFFSET(0x14698950)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_LGFCOIEAKLH_OFFSET UNITYSDK_OFFSET(0x14691DB0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_LLBDDDHHBGN_OFFSET UNITYSDK_OFFSET(0x14697740)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MANUALREFRESHALLSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x146958F0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MANUALRESETPOS_OFFSET UNITYSDK_OFFSET(0x14692F60)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MBCEBFOBHAM_OFFSET UNITYSDK_OFFSET(0x14694330)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NEFHNCBMFIJ_OFFSET UNITYSDK_OFFSET(0x14698910)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OCNPOBKIHIO_OFFSET UNITYSDK_OFFSET(0x14692E40)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OHBDDFOLDDD_OFFSET UNITYSDK_OFFSET(0x14691320)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OJEHIOPHDBK_OFFSET UNITYSDK_OFFSET(0x14694220)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OKAKGIJONEG_OFFSET UNITYSDK_OFFSET(0x14691A10)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OLAOMPEMNOK_OFFSET UNITYSDK_OFFSET(0x146914E0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_PGNPHKCPCNE_OFFSET UNITYSDK_OFFSET(0x14692EB0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETCURSORTOSELECTBLE_OFFSET UNITYSDK_OFFSET(0x14694D20)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETHIDECURSORSTATEANDLOCKSELECT_OFFSET UNITYSDK_OFFSET(0x14691C00)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETHIDECURSORSTATE_OFFSET UNITYSDK_OFFSET(0x14691E10)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETLOCKSELECT_OFFSET UNITYSDK_OFFSET(0x14694170)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SET_SCROLLVIEWWRAPPER_OFFSET UNITYSDK_OFFSET(0x14690C90)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14695FD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_TypeDefinitionIndex = 59843;

	class MonoGamepadVirtualCursor : public ::MoleMole::MonoGamepadModule
	{
	public:
		::UnityEngine::GameObject* CursorGa; // 0xF0
		::UnityEngine::RectTransform* Viewport; // 0xF8
		::PPNEHKEDMBK ItemType; // 0x100
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* ItemRoot; // 0x108
		::UnityEngine::Component* ScrollView; // 0x110
		::System::Single Speed; // 0x118
		::HLGGOFJIBHM MoveMode; // 0x11C
		::OKPFOMOALJK AlignType; // 0x120
		::System::Single NearAlignDistance; // 0x124
		::System::Single AlignSpeed; // 0x128
		::FMHIFCLDOAM PriorityMode; // 0x12C
		::System::Single CheckEdgeHorizontal; // 0x130
		::System::Single CheckEdgeVertical; // 0x134
		::System::Single MoveSpeed; // 0x138
		::System::Boolean DirectMove; // 0x13C
		::System::Boolean DirectMoveThenMoveCursor; // 0x13D
		::System::Boolean CanHideCursorMode; // 0x13E
		::System::Boolean LockSelectMode; // 0x13F
		::System::Single LockSelectModeMinSpeed; // 0x140
		::System::Single LockSelectModeMaxDis; // 0x144
		::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam* CursorTransitionParam; // 0x148
		::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* SelectTransitionParam; // 0x150
		::System::Boolean GetSelectableInChildren; // 0x158
		::System::Byte _padding1[0x3];
		::OABGFGIBPHL ResetMode; // 0x15C
		::MoleMole::InputLogicEventType AxisEvent; // 0x160
		::MoleMole::InputLogicEventType UpEvent; // 0x164
		::MoleMole::InputLogicEventType DownEvent; // 0x168
		::MoleMole::InputLogicEventType LeftEvent; // 0x16C
		::MoleMole::InputLogicEventType RightEvent; // 0x170
		::MoleMole::InputLogicEventType ClickItemEvent; // 0x174
		::MoleMole::InputLogicEventType HideCursorEvent; // 0x178
		::MoleMole::InputLogicEventType ReshowCursorEvent; // 0x17C
		::MoleMole::MonoGamepadVirtualCursor_NLOHLMCCMKH* CustomGetItemPosFunc; // 0x180
		::MoleMole::MonoGamepadVirtualCursor_GKOMHIKLIAL* CustomCollectAllItemFunc; // 0x188
		::System::Func_3<::System::Object*, ::System::Object*, ::System::Int32>* CustomCompareSelectItemFunc; // 0x190
		::MoleMole::MonoGamepadVirtualCursor_OOMOKMCIMHP* CustomSetItemSelectStateFunc; // 0x198
		::System::Action* CustomOnSelectEmptyFunc; // 0x1A0
		::System::Action_1<::System::Object*>* CustomUpdateCurrentSelectFunc; // 0x1A8
		::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* CustomConvertCursorPosFunc; // 0x1B0
		::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* CustomUIPosFunc; // 0x1B8
		::System::Action_2<::System::Object*, ::System::Single>* CustomAutoMoveToFunc; // 0x1C0
		::System::Func_3<::System::Object*, ::System::Single, ::System::Boolean>* CustomCheckRaycastItem; // 0x1C8
		::MoleMole::MonoGamepadVirtualCursor_HKJAOAAIJAH* CustomCheckEdgeFunc; // 0x1D0
		::MoleMole::MonoGamepadVirtualCursor_OILGIJNNPCI* CustomOnClickItemFunc; // 0x1D8
		::System::Boolean IBJPJNIGPJK; // 0x1E0
		::System::Boolean KJDDJAELOOF; // 0x1E1
		::System::Byte _padding2[0x2];
		::MLAPANAKCML FJMBAAJPPFN; // 0x1E4
		::UnityEngine::RectTransform* CKLEKIIIBHK; // 0x1E8
		::UnityEngine::UI::Graphic* OLHHEEJEIDH; // 0x1F0
		::UnityEngine::Animation* OJFIEKNGCAB; // 0x1F8
		::UnityEngine::Vector2 BDDFHBFEEDD; // 0x200
		::UnityEngine::Vector2 GEPMMDKBFDH; // 0x208
		::System::Single IFJGADNIHLF; // 0x210
		::UnityEngine::Vector2 LGKPNJLFEOJ; // 0x214
		::UnityEngine::Vector2 KIGAHMHLICD; // 0x21C
		::UnityEngine::Vector2 ALGJNFBEEEF; // 0x224
		::System::Byte _padding3[0x4];
		::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA KBGJADOODBP; // 0x230
		::UnityEngine::Vector2 FAEECDEOOCA; // 0x290
		::Il2CppArray<::UnityEngine::Vector2>* IALECNJMOOO; // 0x298
		::Il2CppArray<::UnityEngine::Vector2>* KALNNMIEONH; // 0x2A0
		::System::Single DAADPADHJIL; // 0x2A8
		::System::Single MMNBHKEJKPC; // 0x2AC
		::System::Boolean CJINICFKJGN; // 0x2B0
		::System::Byte _padding4[0x7];
		::Il2CppArray<::UnityEngine::Vector3>* OPENGAEMFCB; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Component* get_ScrollViewWrapper()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_SCROLLVIEWWRAPPER_OFFSET))(this);
		}

		::System::Void set_ScrollViewWrapper(::UnityEngine::Component* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SET_SCROLLVIEWWRAPPER_OFFSET))(this, EGEGIMGMJHN);
		}

		::LGMMGPPLLHN* get_CurrentSelectable()
		{
			return ((::LGMMGPPLLHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_CURRENTSELECTABLE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CurrentCursorScreenPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_CURRENTCURSORSCREENPOS_OFFSET))(this);
		}

		::System::Boolean KJLKHOPODEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_KJLKHOPODEA_OFFSET))(this);
		}

		::System::Void OHBDDFOLDDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OHBDDFOLDDD_OFFSET))(this);
		}

		::System::Void SetHideCursorStateAndLockSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETHIDECURSORSTATEANDLOCKSELECT_OFFSET))(this);
		}

		::System::Void SetHideCursorState(::System::Boolean FPFKJNCINEM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETHIDECURSORSTATE_OFFSET))(this, FPFKJNCINEM);
		}

		::System::Void FNNGPEIIPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_FNNGPEIIPNC_OFFSET))(this);
		}

		::System::Void ManualResetPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MANUALRESETPOS_OFFSET))(this);
		}

		::System::Void IDDBBFMNJMP(::System::Boolean MNDGBAGHIBF, ::System::Boolean GHGCCMKDIPO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_IDDBBFMNJMP_OFFSET))(this, MNDGBAGHIBF, GHGCCMKDIPO);
		}

		::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_DIHCGHDHPJP_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Void SetLockSelect(::MLAPANAKCML FCPCLIJNDLA, ::System::Boolean PAKOBHFGLEE)
		{
			return ((::System::Void(*)(::PVOID, ::MLAPANAKCML, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETLOCKSELECT_OFFSET))(this, FCPCLIJNDLA, PAKOBHFGLEE);
		}

		::System::Void MBCEBFOBHAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MBCEBFOBHAM_OFFSET))(this);
		}

		::System::Void SetCursorToSelectble(::LGMMGPPLLHN* ECMGJGNOMJJ)
		{
			return ((::System::Void(*)(::PVOID, ::LGMMGPPLLHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETCURSORTOSELECTBLE_OFFSET))(this, ECMGJGNOMJJ);
		}

		::System::Void ManualRefreshAllSelectState(::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MANUALREFRESHALLSELECTSTATE_OFFSET))(this, NPPMJEIPMFC);
		}

		::MoleMole::MonoGamepadSelectable* EHDMEKGNDPM(::UnityEngine::Transform* LNEEMAGIHLB)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_EHDMEKGNDPM_OFFSET))(this, LNEEMAGIHLB);
		}

		::System::Boolean IsRaySegmentIntersect(::UnityEngine::Vector2 HEAJMIGHEHG, ::UnityEngine::Vector2 DAAEHEHLLLD, ::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC, ::UnityEngine::Vector2& OPMPKFEHOBM)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_ISRAYSEGMENTINTERSECT_OFFSET))(this, HEAJMIGHEHG, DAAEHEHLLLD, EJCBEJMGFAJ, EBFCACIEKBC, OPMPKFEHOBM);
		}

		::System::Void IGAOCOLMELL(::LGMMGPPLLHN* ECMGJGNOMJJ, ::System::Boolean CFCGDNFGANM, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::LGMMGPPLLHN*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_IGAOCOLMELL_OFFSET))(this, ECMGJGNOMJJ, CFCGDNFGANM, NPPMJEIPMFC);
		}

		::System::Void PGNPHKCPCNE(::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam* CNFJPNDBMAA, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* FDOPBPMKMIG, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam*, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_PGNPHKCPCNE_OFFSET))(this, CNFJPNDBMAA, FDOPBPMKMIG, NPPMJEIPMFC);
		}

		::System::Void LLBDDDHHBGN(::System::Boolean MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_LLBDDDHHBGN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void IKMOMLCKEHG(::UnityEngine::Vector2 CKPGOKHECCH, ::System::Boolean HKJAKFAJJLK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_IKMOMLCKEHG_OFFSET))(this, CKPGOKHECCH, HKJAKFAJJLK);
		}

		::System::Void LGFCOIEAKLH(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_LGFCOIEAKLH_OFFSET))(this, FIPHFGHNNBE);
		}

		::System::Void AILAEAKKNMI(::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* FDOPBPMKMIG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_AILAEAKKNMI_OFFSET))(this, FDOPBPMKMIG);
		}

		::System::Void OLAOMPEMNOK(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OLAOMPEMNOK_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void FHCCBMPHBHJ(::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* FDOPBPMKMIG, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA ECMGJGNOMJJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam*, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_FHCCBMPHBHJ_OFFSET))(this, FDOPBPMKMIG, ECMGJGNOMJJ);
		}

		::UnityEngine::Vector2 EGLEIPIDDEB(::UnityEngine::Vector2 HBEKKMCBGBK, ::System::Single IAKPGBCAAKM)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_EGLEIPIDDEB_OFFSET))(this, HBEKKMCBGBK, IAKPGBCAAKM);
		}

		::System::Boolean HEDKEJGHLJK(::MoleMole::InputActionEvent MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HEDKEJGHLJK_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GCMIFBNEFCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GCMIFBNEFCJ_OFFSET))(this);
		}

		::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA AMJOKPEJDCH()
		{
			return ((::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_AMJOKPEJDCH_OFFSET))(this);
		}

		::System::Int32 JEADPKGPBCF(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA HAAEBCOBKFF, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA BFMMEICFNCD)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_JEADPKGPBCF_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
		}

		::System::Void GOFJJEFCFPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GOFJJEFCFPO_OFFSET))(this);
		}

		::System::Boolean GFMAJJCMDNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GFMAJJCMDNB_OFFSET))(this);
		}

		::System::Void OKAKGIJONEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OKAKGIJONEG_OFFSET))(this);
		}

		::MoleMole::MonoGamepadSelectable* FIJCPOACEEF(::UnityEngine::Transform* MIALFKCCCPI)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_FIJCPOACEEF_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Vector2 HPOKDICDKAA(::UnityEngine::Vector2 LFLJMBPFLDI, ::UnityEngine::Vector2 HBEKKMCBGBK, ::UnityEngine::Vector2 GFDNLIBCJDM)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HPOKDICDKAA_OFFSET))(this, LFLJMBPFLDI, HBEKKMCBGBK, GFDNLIBCJDM);
		}

		::System::Void KMKNDCPHIHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_KMKNDCPHIHC_OFFSET))(this);
		}

		::System::Void FMLLCFINFDB(::System::Collections::Generic::List_1<::System::Object*>* IDKNEIEMPAP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_FMLLCFINFDB_OFFSET))(this, IDKNEIEMPAP);
		}

		::System::Boolean ACLACPPNLBO(::UnityEngine::Transform* LNEEMAGIHLB, ::MoleMole::MonoGamepadSelectable* ECMGJGNOMJJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::MonoGamepadSelectable*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_ACLACPPNLBO_OFFSET))(this, LNEEMAGIHLB, ECMGJGNOMJJ);
		}

		::System::Boolean IMHDDPANAMJ(::UnityEngine::Vector2 CKPGOKHECCH, ::UnityEngine::Vector2 DGPEPKDNABL, ::UnityEngine::Vector2 NPPGNJCIGJC, ::UnityEngine::Vector2 IJOHADBJEJD, ::UnityEngine::Vector2 FMDAPKKIHJJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_IMHDDPANAMJ_OFFSET))(this, CKPGOKHECCH, DGPEPKDNABL, NPPGNJCIGJC, IJOHADBJEJD, FMDAPKKIHJJ);
		}

		::GGPBCCEOONG* NEFHNCBMFIJ()
		{
			return ((::GGPBCCEOONG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NEFHNCBMFIJ_OFFSET))(this);
		}

		::System::Boolean KHGMJKKFELJ(::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam* CNFJPNDBMAA, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_KHGMJKKFELJ_OFFSET))(this, CNFJPNDBMAA, NPPMJEIPMFC);
		}

		::System::Void OCNPOBKIHIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OCNPOBKIHIO_OFFSET))(this);
		}

		::System::Void HDLGEDBNEIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HDLGEDBNEIP_OFFSET))(this);
		}

		::System::Void DICGBNHLALG(::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* FDOPBPMKMIG, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA ECMGJGNOMJJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam*, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_DICGBNHLALG_OFFSET))(this, FDOPBPMKMIG, ECMGJGNOMJJ);
		}

		::System::Void GJLPOKHMOJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GJLPOKHMOJI_OFFSET))(this);
		}

		::System::Void HOLJCCGECNF(::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HOLJCCGECNF_OFFSET))(this, NPPMJEIPMFC);
		}

		::System::Void OJEHIOPHDBK(::UnityEngine::Vector2 HBEKKMCBGBK, ::System::Boolean HKJAKFAJJLK, ::UnityEngine::Vector2 BHFAGMPDIGJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OJEHIOPHDBK_OFFSET))(this, HBEKKMCBGBK, HKJAKFAJJLK, BHFAGMPDIGJ);
		}

		::System::Void AOLBOBMIECN(::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam* CNFJPNDBMAA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_AOLBOBMIECN_OFFSET))(this, CNFJPNDBMAA);
		}
	};
}
