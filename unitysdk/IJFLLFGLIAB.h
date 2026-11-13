#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLCPFJBFKNO.h"
#include "unitysdk/NBNNPCIIDAJ.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/IJFLLFGLIAB___c__DisplayClass107_0.h"
namespace RPG::Client { class MonoBalanceBallController; }
namespace RPG::Client { class MonoBalanceBallDeformer; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define IJFLLFGLIAB_ADOKGACNNKG_OFFSET UNITYSDK_OFFSET(0x1804EC50)
#define IJFLLFGLIAB_AKDADIFEKGL_OFFSET UNITYSDK_OFFSET(0x18054A50)
#define IJFLLFGLIAB_APOKLLJNBPE_OFFSET UNITYSDK_OFFSET(0x18052740)
#define IJFLLFGLIAB_BGEBNMOEDEE_OFFSET UNITYSDK_OFFSET(0x18052890)
#define IJFLLFGLIAB_BMJBPKFHANE_OFFSET UNITYSDK_OFFSET(0x18052820)
#define IJFLLFGLIAB_BPMMLAJPPMH_OFFSET UNITYSDK_OFFSET(0x1804FB20)
#define IJFLLFGLIAB_CILNENHBNPL_OFFSET UNITYSDK_OFFSET(0x18052540)
#define IJFLLFGLIAB_CLCLJFEAAMD_OFFSET UNITYSDK_OFFSET(0x18050530)
#define IJFLLFGLIAB_CLJPMAEIEFG_OFFSET UNITYSDK_OFFSET(0x180509E0)
#define IJFLLFGLIAB_CMLDKPMNIFH_OFFSET UNITYSDK_OFFSET(0x1804F650)
#define IJFLLFGLIAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1804E340)
#define IJFLLFGLIAB_DFAEACILLME_OFFSET UNITYSDK_OFFSET(0x180553A0)
#define IJFLLFGLIAB_DGJLNIGBBBJ_OFFSET UNITYSDK_OFFSET(0x18050640)
#define IJFLLFGLIAB_DICGECAHNBK_OFFSET UNITYSDK_OFFSET(0x18054E60)
#define IJFLLFGLIAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18053530)
#define IJFLLFGLIAB_ECFCCNAKPPI_OFFSET UNITYSDK_OFFSET(0x18052B80)
#define IJFLLFGLIAB_EFDJNLHIMGC_OFFSET UNITYSDK_OFFSET(0x18052A20)
#define IJFLLFGLIAB_EGDAINGIFIH_OFFSET UNITYSDK_OFFSET(0x18052CA0)
#define IJFLLFGLIAB_GAFDAEFNDHC_OFFSET UNITYSDK_OFFSET(0x18050EB0)
#define IJFLLFGLIAB_GAFMCEAHEJJ_OFFSET UNITYSDK_OFFSET(0x18055720)
#define IJFLLFGLIAB_GCODBPBKONJ_OFFSET UNITYSDK_OFFSET(0x1804E650)
#define IJFLLFGLIAB_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x18053750)
#define IJFLLFGLIAB_GET_DECELERATION_OFFSET UNITYSDK_OFFSET(0x18053770)
#define IJFLLFGLIAB_GET_DRIVEMOVEMENTWITHOUTANIMATOR_OFFSET UNITYSDK_OFFSET(0x180537F0)
#define IJFLLFGLIAB_GET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0x18053810)
#define IJFLLFGLIAB_GET_STOPSPEED_OFFSET UNITYSDK_OFFSET(0x18053790)
#define IJFLLFGLIAB_GET_VISUALROLLRADIUS_OFFSET UNITYSDK_OFFSET(0x180537B0)
#define IJFLLFGLIAB_GET_VISUALROLLSCALE_OFFSET UNITYSDK_OFFSET(0x180537D0)
#define IJFLLFGLIAB_HHIDEDEFGOE_OFFSET UNITYSDK_OFFSET(0x18050FE0)
#define IJFLLFGLIAB_HOPAOAIGJHJ_OFFSET UNITYSDK_OFFSET(0x18055820)
#define IJFLLFGLIAB_IJMPPOHOLBP_OFFSET UNITYSDK_OFFSET(0x1804EAF0)
#define IJFLLFGLIAB_JAIGEBMIANJ_OFFSET UNITYSDK_OFFSET(0x180512E0)
#define IJFLLFGLIAB_JEJGOPEBHLJ_OFFSET UNITYSDK_OFFSET(0x18051CE0)
#define IJFLLFGLIAB_KAOKEMJBGDO_OFFSET UNITYSDK_OFFSET(0x18053050)
#define IJFLLFGLIAB_KGECBKCJDMG_OFFSET UNITYSDK_OFFSET(0x1804F720)
#define IJFLLFGLIAB_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0x180526A0)
#define IJFLLFGLIAB_KJBIABNIMEF_OFFSET UNITYSDK_OFFSET(0x18054430)
#define IJFLLFGLIAB_LAJIJKAIKEE_OFFSET UNITYSDK_OFFSET(0x1804E540)
#define IJFLLFGLIAB_LKBKFGFGFFF_OFFSET UNITYSDK_OFFSET(0x18053850)
#define IJFLLFGLIAB_MFGCKIPGKMC_OFFSET UNITYSDK_OFFSET(0x1804EA10)
#define IJFLLFGLIAB_MJNOBGCDMCP_OFFSET UNITYSDK_OFFSET(0x180527B0)
#define IJFLLFGLIAB_NCBCCFHAMHN_OFFSET UNITYSDK_OFFSET(0x18055A90)
#define IJFLLFGLIAB_NHGHMKNMOEN_OFFSET UNITYSDK_OFFSET(0x180501C0)
#define IJFLLFGLIAB_OAELKCJNNLC_OFFSET UNITYSDK_OFFSET(0x18050780)
#define IJFLLFGLIAB_OAHKPMBCFGK_OFFSET UNITYSDK_OFFSET(0x18053D60)
#define IJFLLFGLIAB_PAEOCLALHIM_OFFSET UNITYSDK_OFFSET(0x180556B0)
#define IJFLLFGLIAB_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x18053760)
#define IJFLLFGLIAB_SET_DECELERATION_OFFSET UNITYSDK_OFFSET(0x18053780)
#define IJFLLFGLIAB_SET_DRIVEMOVEMENTWITHOUTANIMATOR_OFFSET UNITYSDK_OFFSET(0x18053800)
#define IJFLLFGLIAB_SET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0x18053830)
#define IJFLLFGLIAB_SET_STOPSPEED_OFFSET UNITYSDK_OFFSET(0x180537A0)
#define IJFLLFGLIAB_SET_VISUALROLLRADIUS_OFFSET UNITYSDK_OFFSET(0x180537C0)
#define IJFLLFGLIAB_SET_VISUALROLLSCALE_OFFSET UNITYSDK_OFFSET(0x180537E0)
#define IJFLLFGLIAB__PROJECTHITBOXSLIDE_G__CONSIDER_107_0_OFFSET UNITYSDK_OFFSET(0x18054340)

inline static constexpr unsigned int IJFLLFGLIAB_TypeDefinitionIndex = 58314;

	class IJFLLFGLIAB : public ::NBNNPCIIDAJ
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* JKOCJCILIEL; // 0x1A0
		::System::String* MFPEMBMFAMI; // 0x1A8
		::System::String* ALGOENLNPEP; // 0x1B0
		::UnityEngine::Transform* HEPLNNAIOLO; // 0x1B8
		::UnityEngine::Transform* KFLPBDEGHIA; // 0x1C0
		::RPG::Client::MonoBalanceBallDeformer* CPHCBLMBKEA; // 0x1C8
		::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* JPEADEPMPBI; // 0x1D0
		::Il2CppArray<::UnityEngine::RaycastHit>* GEJKLNFKJFN; // 0x1D8
		::System::String* MCIGKCMALDG; // 0x1E0
		::UnityEngine::Collider* KKIMOGDBFKM; // 0x1E8
		::UnityEngine::Transform* LEEHDBNDCCJ; // 0x1F0
		::System::String* FPMGNJIEPAG; // 0x1F8
		::Il2CppArray<::UnityEngine::Collider*>* GBELGBBEHJF; // 0x200
		::System::Single PCCOGNJLMFD; // 0x208
		::UnityEngine::Vector3 NLPJAEDIGEK; // 0x20C
		::System::Boolean _DriveMovementWithoutAnimator_k__BackingField; // 0x218
		::System::Boolean LJDBPCIOADG; // 0x219
		::System::Byte _padding0[0x2];
		::System::Single INEODDLKICG; // 0x21C
		::UnityEngine::Vector3 JICMIEJJDCK; // 0x220
		::UnityEngine::Quaternion GKHEEOEFPLG; // 0x22C
		::UnityEngine::Vector3 _KinematicVelocity_k__BackingField; // 0x23C
		::System::Single DGBIIKKMOGN; // 0x248
		::UnityEngine::Vector3 HLEBDKHOPKA; // 0x24C
		::System::Single ALGHPOFKMAI; // 0x258
		::UnityEngine::Vector3 KCFPIBBICLG; // 0x25C
		::System::Single _VisualRollScale_k__BackingField; // 0x268
		::UnityEngine::Vector3 MPDBKCABJIJ; // 0x26C
		::System::Single CCLGEOBLIIG; // 0x278
		::System::Single _StopSpeed_k__BackingField; // 0x27C
		::System::Single PIELOKLEFPN; // 0x280
		::System::Boolean AKPDBDGFBIM; // 0x284
		::System::Boolean EHADEHKDIOK; // 0x285
		::System::Boolean EHFPMBIICJA; // 0x286
		::System::Boolean ODHHIJCOCPK; // 0x287
		::UnityEngine::Quaternion GLNICFLDHCP; // 0x288
		::System::Single DGLPEGOEFGB; // 0x298
		::UnityEngine::Vector3 OFHFBHHCJAI; // 0x29C
		::System::Single _Deceleration_k__BackingField; // 0x2A8
		::System::Single BFEKPCKLODG; // 0x2AC
		::System::Boolean MNBDCHMOJIN; // 0x2B0
		::System::Boolean IGJGPJNNOJH; // 0x2B1
		::System::Boolean BOCPLLPJCPP; // 0x2B2
		::System::Byte _padding1[0x1];
		::UnityEngine::Vector3 HGFHFCMOLJP; // 0x2B4
		::UnityEngine::Vector3 FAEBJFKANDG; // 0x2C0
		::System::Single LCDLBEFPDED; // 0x2CC
		::System::Single LOCEGHCAIFP; // 0x2D0
		::System::Single LPGFBPLKFCI; // 0x2D4
		::UnityEngine::Vector3 LFBBIKHFOKB; // 0x2D8
		::UnityEngine::Vector3 OEMGHMBOEOB; // 0x2E4
		::System::Single ILDNNHCGNKI; // 0x2F0
		::System::Single _Acceleration_k__BackingField; // 0x2F4
		::System::Single LLNPEHPECHG; // 0x2F8
		::UnityEngine::Quaternion NHGGHLCLBLE; // 0x2FC
		::CLCPFJBFKNO LGDCGOLBKIK; // 0x30C
		::System::Single EPKJMHOKPLA; // 0x330
		::UnityEngine::Vector3 PKHGIMAAEOO; // 0x334
		::System::Single _VisualRollRadius_k__BackingField; // 0x340
		// static const ::System::Object DDHNMMLNGLP; // 0x0
		// static const ::System::Object HCDAABDLJLH; // 0x0
		// static const ::System::Object LJKLJJMOCEJ; // 0x0
		// static const ::System::Object MCHEMIEDKEO; // 0x0
		// static const ::System::Object JOBOOJPMPJJ; // 0x0
		// static const ::System::Object GHCHJKBCFIA; // 0x0
		// static const ::System::Object OIFMOBAKLBJ; // 0x0
		// static const ::System::Object BFNBDCAGBBG; // 0x0
		// static const ::System::Object AADKHJOIJAM; // 0x0
		// static const ::System::Object JMCONLAPNJL; // 0x0
		// static const ::System::Object GFGGMECBDJO; // 0x0
		// static const ::System::Object BNOCIDMOHHF; // 0x0
		// static const ::System::Object IMFMIDCFCCJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::String*))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LAJIJKAIKEE(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_LAJIJKAIKEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GCODBPBKONJ(::RPG::Client::MonoBalanceBallController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoBalanceBallController*))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GCODBPBKONJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BPMMLAJPPMH(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_BPMMLAJPPMH_OFFSET))(this, a1, a2);
		}

		::System::Void CLCLJFEAAMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_CLCLJFEAAMD_OFFSET))(this, a1);
		}

		::System::Void GAFDAEFNDHC(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GAFDAEFNDHC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHIMHKPIMGJ(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_KHIMHKPIMGJ_OFFSET))(this, a1);
		}

		::System::Void APOKLLJNBPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_APOKLLJNBPE_OFFSET))(this);
		}

		::System::Void MJNOBGCDMCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_MJNOBGCDMCP_OFFSET))(this);
		}

		::System::Void BMJBPKFHANE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_BMJBPKFHANE_OFFSET))(this);
		}

		::System::Void BGEBNMOEDEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_BGEBNMOEDEE_OFFSET))(this);
		}

		::System::Void EFDJNLHIMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_EFDJNLHIMGC_OFFSET))(this);
		}

		::System::Void ECFCCNAKPPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_ECFCCNAKPPI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_DISPOSE_OFFSET))(this);
		}

		::System::Single get_Acceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_Acceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_SET_ACCELERATION_OFFSET))(this, a1);
		}

		::System::Single get_Deceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GET_DECELERATION_OFFSET))(this);
		}

		::System::Void set_Deceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_SET_DECELERATION_OFFSET))(this, a1);
		}

		::System::Single get_StopSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GET_STOPSPEED_OFFSET))(this);
		}

		::System::Void set_StopSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_SET_STOPSPEED_OFFSET))(this, a1);
		}

		::System::Single get_VisualRollRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GET_VISUALROLLRADIUS_OFFSET))(this);
		}

		::System::Void set_VisualRollRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_SET_VISUALROLLRADIUS_OFFSET))(this, a1);
		}

		::System::Single get_VisualRollScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GET_VISUALROLLSCALE_OFFSET))(this);
		}

		::System::Void set_VisualRollScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_SET_VISUALROLLSCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_DriveMovementWithoutAnimator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GET_DRIVEMOVEMENTWITHOUTANIMATOR_OFFSET))(this);
		}

		::System::Void set_DriveMovementWithoutAnimator(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_SET_DRIVEMOVEMENTWITHOUTANIMATOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_KinematicVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GET_KINEMATICVELOCITY_OFFSET))(this);
		}

		::System::Void set_KinematicVelocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_SET_KINEMATICVELOCITY_OFFSET))(this, a1);
		}

		::System::Void ADOKGACNNKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_ADOKGACNNKG_OFFSET))(this);
		}

		::System::Void JAIGEBMIANJ(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_JAIGEBMIANJ_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 OAHKPMBCFGK(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_OAHKPMBCFGK_OFFSET))(this, a1, a2);
		}

		::System::Void CILNENHBNPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_CILNENHBNPL_OFFSET))(this);
		}

		::System::Boolean HHIDEDEFGOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_HHIDEDEFGOE_OFFSET))(this);
		}

		::System::Boolean KJBIABNIMEF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_KJBIABNIMEF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LKBKFGFGFFF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_LKBKFGFGFFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 DICGECAHNBK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_DICGECAHNBK_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 AKDADIFEKGL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_AKDADIFEKGL_OFFSET))(this, a1);
		}

		::System::Void NHGHMKNMOEN(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_NHGHMKNMOEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGJLNIGBBBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_DGJLNIGBBBJ_OFFSET))(this);
		}

		::System::Void KGECBKCJDMG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_KGECBKCJDMG_OFFSET))(this, a1);
		}

		::System::Void IJMPPOHOLBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_IJMPPOHOLBP_OFFSET))(this, a1);
		}

		::System::Void CLJPMAEIEFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_CLJPMAEIEFG_OFFSET))(this);
		}

		::System::Void KAOKEMJBGDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_KAOKEMJBGDO_OFFSET))(this);
		}

		::System::Void CMLDKPMNIFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_CMLDKPMNIFH_OFFSET))(this);
		}

		::System::Void OAELKCJNNLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_OAELKCJNNLC_OFFSET))(this);
		}

		::System::Void MFGCKIPGKMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_MFGCKIPGKMC_OFFSET))(this);
		}

		::UnityEngine::Vector3 DFAEACILLME(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_DFAEACILLME_OFFSET))(this, a1);
		}

		::System::Void EGDAINGIFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_EGDAINGIFIH_OFFSET))(this);
		}

		::System::Boolean JEJGOPEBHLJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_JEJGOPEBHLJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HOPAOAIGJHJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit a4, ::UnityEngine::RaycastHit a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_HOPAOAIGJHJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean PAEOCLALHIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_PAEOCLALHIM_OFFSET))(this);
		}

		::System::Boolean GAFMCEAHEJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_GAFMCEAHEJJ_OFFSET))(this);
		}

		::System::Boolean NCBCCFHAMHN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IJFLLFGLIAB_NCBCCFHAMHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ProjectHitboxSlide_g__Consider_107_0(::UnityEngine::Vector3 a1, ::IJFLLFGLIAB___c__DisplayClass107_0 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::IJFLLFGLIAB___c__DisplayClass107_0))((::PBYTE)hIl2Cpp + IJFLLFGLIAB__PROJECTHITBOXSLIDE_G__CONSIDER_107_0_OFFSET))(this, a1, a2);
		}

	};
