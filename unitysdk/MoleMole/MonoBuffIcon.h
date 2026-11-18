#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/MonoInLevelBase.h"

class AGJFDPBLDDF;
class LNFCIBHFJHI;
namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening { class Tweener; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOBUFFICON_BGAGMONKDDP_OFFSET UNITYSDK_OFFSET(0x11935C60)
#define MOLEMOLE_MONOBUFFICON_BHPIKOHACDC_OFFSET UNITYSDK_OFFSET(0x11935630)
#define MOLEMOLE_MONOBUFFICON_DDIKMPOJGOI_OFFSET UNITYSDK_OFFSET(0x11935C50)
#define MOLEMOLE_MONOBUFFICON_DJICBAKLCFO_OFFSET UNITYSDK_OFFSET(0x11933D30)
#define MOLEMOLE_MONOBUFFICON_ENABLENUMBERTEXT_OFFSET UNITYSDK_OFFSET(0x119338E0)
#define MOLEMOLE_MONOBUFFICON_GAFLFGPOIME_OFFSET UNITYSDK_OFFSET(0x11935C40)
#define MOLEMOLE_MONOBUFFICON_GETISMORE_OFFSET UNITYSDK_OFFSET(0x11934BE0)
#define MOLEMOLE_MONOBUFFICON_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x11932610)
#define MOLEMOLE_MONOBUFFICON_GET_BUFFNUMBER_OFFSET UNITYSDK_OFFSET(0x11932620)
#define MOLEMOLE_MONOBUFFICON_HMAHLGFKHJA_OFFSET UNITYSDK_OFFSET(0x119342A0)
#define MOLEMOLE_MONOBUFFICON_ICFNIIHCNKN_OFFSET UNITYSDK_OFFSET(0x11935C70)
#define MOLEMOLE_MONOBUFFICON_IDJDKBFAPBJ_OFFSET UNITYSDK_OFFSET(0x11934960)
#define MOLEMOLE_MONOBUFFICON_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x11935D70)
#define MOLEMOLE_MONOBUFFICON_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x11934B90)
#define MOLEMOLE_MONOBUFFICON_JFEDGNBOJOC_OFFSET UNITYSDK_OFFSET(0x11935460)
#define MOLEMOLE_MONOBUFFICON_JMNLIHHOHDA_OFFSET UNITYSDK_OFFSET(0x11935D80)
#define MOLEMOLE_MONOBUFFICON_LNDNBLCELPL_OFFSET UNITYSDK_OFFSET(0x11934840)
#define MOLEMOLE_MONOBUFFICON_MGPFPPPKEPH_OFFSET UNITYSDK_OFFSET(0x11933A50)
#define MOLEMOLE_MONOBUFFICON_MMAHBPMKJPF_OFFSET UNITYSDK_OFFSET(0x11934E90)
#define MOLEMOLE_MONOBUFFICON_MMIGOOBLNHE_OFFSET UNITYSDK_OFFSET(0x11935CD0)
#define MOLEMOLE_MONOBUFFICON_NBBIIONIMFP_OFFSET UNITYSDK_OFFSET(0x119353A0)
#define MOLEMOLE_MONOBUFFICON_OHPIKMLGBCK_OFFSET UNITYSDK_OFFSET(0x11936110)
#define MOLEMOLE_MONOBUFFICON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11935A20)
#define MOLEMOLE_MONOBUFFICON_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x11934460)
#define MOLEMOLE_MONOBUFFICON_PELHKMIAGII_OFFSET UNITYSDK_OFFSET(0x119334D0)
#define MOLEMOLE_MONOBUFFICON_PKOKCBMAHDK_OFFSET UNITYSDK_OFFSET(0x11935AD0)
#define MOLEMOLE_MONOBUFFICON_REFRESHNUMBER_OFFSET UNITYSDK_OFFSET(0x11935920)
#define MOLEMOLE_MONOBUFFICON_REPLACEBUFFIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x11934DD0)
#define MOLEMOLE_MONOBUFFICON_RESETNUMBER_OFFSET UNITYSDK_OFFSET(0x11935970)
#define MOLEMOLE_MONOBUFFICON_SETCUSTOMNUM_OFFSET UNITYSDK_OFFSET(0x119359C0)
#define MOLEMOLE_MONOBUFFICON_SETUPMORESTATE_OFFSET UNITYSDK_OFFSET(0x11934190)
#define MOLEMOLE_MONOBUFFICON_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x11932630)
#define MOLEMOLE_MONOBUFFICON_SWITCHTOBUFF_OFFSET UNITYSDK_OFFSET(0x11934C20)
#define MOLEMOLE_MONOBUFFICON_TICK_OFFSET UNITYSDK_OFFSET(0x11934FF0)
#define MOLEMOLE_MONOBUFFICON__CCTOR_OFFSET UNITYSDK_OFFSET(0x11935C20)
#define MOLEMOLE_MONOBUFFICON__CTOR_OFFSET UNITYSDK_OFFSET(0x11935B40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuffIcon_TypeDefinitionIndex = 65085;

	class MonoBuffIcon : public ::MoleMole::MonoInLevelBase
	{
	public:
		static ::System::Int32* StaticGet_MULTIPLE_ROW_BUFF_ICON_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBuffIcon_TypeDefinitionIndex)->GetStaticField(0xB310);
		}
		static ::System::Int32* StaticGet_BUFF_ICON_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBuffIcon_TypeDefinitionIndex)->GetStaticField(0xB314);
		}
		// static const ::System::Single OCPABBGIAGF; // 0x0
		// static const ::System::String* BUFF_ICON_PATH; // 0x0
		// static const ::System::String* BUFF_ICON_PREFEX_PATH; // 0x0
		// static const ::System::String* FADE_OUT_ANI; // 0x0
		// static const ::System::String* QUEUE_FADE_IN_ANI; // 0x0
		// static const ::System::String* QUEUE_FADE_OUT_ANI; // 0x0
		// static const ::System::String* FADE_IN_ANI; // 0x0
		// static const ::System::String* REPLACE_ANI; // 0x0
		::System::Int32 _EIMOCHDEPEK_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Image* DLBLLEJEJID; // 0x28
		::UnityEngine::GameObject* EBEBDGFCFOP; // 0x30
		::UnityEngine::UI::Image* AHALOOJPCFO; // 0x38
		::UnityEngine::Animation* FDMDJIDCEDF; // 0x40
		::UnityEngine::Transform* HLBMOHMJAIB; // 0x48
		::UnityEngine::Transform* AIAPPCNGODK; // 0x50
		::UnityEngine::GameObject* KPOJNHJDCMD; // 0x58
		::UnityEngine::Transform* JLNBHMLGLND; // 0x60
		::UnityEngine::Transform* MFDDJKIKHAC; // 0x68
		::System::Boolean enableNumberText; // 0x70
		::System::Boolean enableTimeDurationShow; // 0x71
		::System::Boolean FNDBKEMCEGG; // 0x72
		::System::Boolean CECPGHHBDAN; // 0x73
		::System::Single KMOALLAOALN; // 0x74
		::System::Single IMBGJIMAFCD; // 0x78
		::System::Byte _padding1[0x4];
		::UnityEngine::Animation* MOMGIAEEMCK; // 0x80
		::DG::Tweening::Tweener* ODMPOMEAHHF; // 0x88
		::DG::Tweening::TweenCallback* NCJMFBHADHG; // 0x90
		::System::Int32 removeIndex; // 0x98
		::System::Int32 _MCDLCMEGNPL_k__BackingField; // 0x9C
		::UnityEngine::UI::Text* FOIPENHFOHC; // 0xA0
		::System::UInt32 AKNGEGPIHOF; // 0xA8
		::System::Byte _padding2[0x4];
		::AGJFDPBLDDF* GAKFFIKAGFM; // 0xB0
		::System::Int32 OMDJHDKCHGE; // 0xB8
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::LNFCIBHFJHI*>* ODDGMOOJCOO; // 0xC0
		::UnityEngine::Animation* PBNDACOLCJK; // 0xC8
		::Foundation::Coroutine::CoroutineHandle ENBPBOACPHP; // 0xD0
		::System::Byte _padding4[0x4];
		::System::Action* ICOKPCIJEEL; // 0xD8
		::System::Int32 NGAKEHDBFOI; // 0xE0
		::System::Byte _padding5[0x4];
		::System::Action* BPCMCEMKGKC; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON__CCTOR_OFFSET))();
		}

		::System::Int32 get_BuffID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GET_BUFFID_OFFSET))(this);
		}

		::System::Int32 get_BuffNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GET_BUFFNUMBER_OFFSET))(this);
		}

		::System::Void SetupView(::System::Int32 BOBBHFPEPHC, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Int32 OFLGOIKMBCB, ::System::Boolean CGBIIKAGCEL, ::System::Boolean CEDNGGGGDNP, ::System::Boolean CDFBKOOEMHO, ::System::Action* HNDGJKPNIHA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SETUPVIEW_OFFSET))(this, BOBBHFPEPHC, AMNIHACKELI, OFLGOIKMBCB, CGBIIKAGCEL, CEDNGGGGDNP, CDFBKOOEMHO, HNDGJKPNIHA);
		}

		::System::Void OnRemove(::System::Action* DOBFFIICAII, ::System::Boolean JOBHFEMGBDG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ONREMOVE_OFFSET))(this, DOBFFIICAII, JOBHFEMGBDG);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_INTERRUPT_OFFSET))(this);
		}

		::System::Void SetupMoreState(::System::Boolean CGBIIKAGCEL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SETUPMORESTATE_OFFSET))(this, CGBIIKAGCEL);
		}

		::System::Boolean GetIsMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GETISMORE_OFFSET))(this);
		}

		::System::Boolean SwitchToBuff(::System::Int32 BOBBHFPEPHC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SWITCHTOBUFF_OFFSET))(this, BOBBHFPEPHC);
		}

		::System::Void ReplaceBuffImmediate(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Int32 BOBBHFPEPHC, ::System::Boolean JCGLFJPFNIE, ::System::Action* HNDGJKPNIHA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_REPLACEBUFFIMMEDIATE_OFFSET))(this, AMNIHACKELI, BOBBHFPEPHC, JCGLFJPFNIE, HNDGJKPNIHA);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_TICK_OFFSET))(this);
		}

		::System::Void EnableNumberText(::System::Boolean FBILHHBPEHD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ENABLENUMBERTEXT_OFFSET))(this, FBILHHBPEHD);
		}

		::System::Void RefreshNumber()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_REFRESHNUMBER_OFFSET))(this);
		}

		::System::Void ResetNumber()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_RESETNUMBER_OFFSET))(this);
		}

		::System::Void SetCustomNum(::System::Int32 OBKBDAPONOJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SETCUSTOMNUM_OFFSET))(this, OBKBDAPONOJ);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ONDESTROY_OFFSET))(this);
		}

		::System::Void GAFLFGPOIME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GAFLFGPOIME_OFFSET))(this);
		}

		::System::Void PKOKCBMAHDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_PKOKCBMAHDK_OFFSET))(this);
		}

		::System::Void DDIKMPOJGOI(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_DDIKMPOJGOI_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void BGAGMONKDDP(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_BGAGMONKDDP_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void IDJDKBFAPBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_IDJDKBFAPBJ_OFFSET))(this);
		}

		::System::Void MGPFPPPKEPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_MGPFPPPKEPH_OFFSET))(this);
		}

		::System::Void PELHKMIAGII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_PELHKMIAGII_OFFSET))(this);
		}

		::System::Single NBBIIONIMFP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_NBBIIONIMFP_OFFSET))(this);
		}

		::System::Boolean LNDNBLCELPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_LNDNBLCELPL_OFFSET))(this);
		}

		::System::Void DJICBAKLCFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_DJICBAKLCFO_OFFSET))(this);
		}

		::System::Int32 ICFNIIHCNKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ICFNIIHCNKN_OFFSET))(this);
		}

		::System::Void MMIGOOBLNHE(::LNFCIBHFJHI* HBKKHMJJAJA)
		{
			return ((::System::Void(*)(::PVOID, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_MMIGOOBLNHE_OFFSET))(this, HBKKHMJJAJA);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_IFHNMAGGFAE_OFFSET))(this);
		}

		::System::Void HMAHLGFKHJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_HMAHLGFKHJA_OFFSET))(this);
		}

		::System::Void JFEDGNBOJOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_JFEDGNBOJOC_OFFSET))(this);
		}

		::System::Boolean JMNLIHHOHDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_JMNLIHHOHDA_OFFSET))(this);
		}

		::System::Void MMAHBPMKJPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_MMAHBPMKJPF_OFFSET))(this);
		}

		::System::Void BHPIKOHACDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_BHPIKOHACDC_OFFSET))(this);
		}

		::System::Void OHPIKMLGBCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_OHPIKMLGBCK_OFFSET))(this);
		}
	};
}
