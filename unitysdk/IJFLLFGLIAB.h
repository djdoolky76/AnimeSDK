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

#define IJFLLFGLIAB_ADOKGACNNKG_OFFSET UNITYSDK_OFFSET(0x17430860)
#define IJFLLFGLIAB_AKDADIFEKGL_OFFSET UNITYSDK_OFFSET(0x17436730)
#define IJFLLFGLIAB_APOKLLJNBPE_OFFSET UNITYSDK_OFFSET(0x17434410)
#define IJFLLFGLIAB_BGEBNMOEDEE_OFFSET UNITYSDK_OFFSET(0x17434560)
#define IJFLLFGLIAB_BMJBPKFHANE_OFFSET UNITYSDK_OFFSET(0x174344F0)
#define IJFLLFGLIAB_BPMMLAJPPMH_OFFSET UNITYSDK_OFFSET(0x174317F0)
#define IJFLLFGLIAB_CILNENHBNPL_OFFSET UNITYSDK_OFFSET(0x17434210)
#define IJFLLFGLIAB_CLCLJFEAAMD_OFFSET UNITYSDK_OFFSET(0x17432200)
#define IJFLLFGLIAB_CLJPMAEIEFG_OFFSET UNITYSDK_OFFSET(0x174326B0)
#define IJFLLFGLIAB_CMLDKPMNIFH_OFFSET UNITYSDK_OFFSET(0x17431290)
#define IJFLLFGLIAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1742FF60)
#define IJFLLFGLIAB_DFAEACILLME_OFFSET UNITYSDK_OFFSET(0x17437080)
#define IJFLLFGLIAB_DGJLNIGBBBJ_OFFSET UNITYSDK_OFFSET(0x17432310)
#define IJFLLFGLIAB_DICGECAHNBK_OFFSET UNITYSDK_OFFSET(0x17436B40)
#define IJFLLFGLIAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17435200)
#define IJFLLFGLIAB_ECFCCNAKPPI_OFFSET UNITYSDK_OFFSET(0x17434840)
#define IJFLLFGLIAB_EFDJNLHIMGC_OFFSET UNITYSDK_OFFSET(0x174346E0)
#define IJFLLFGLIAB_EGDAINGIFIH_OFFSET UNITYSDK_OFFSET(0x17434960)
#define IJFLLFGLIAB_GAFDAEFNDHC_OFFSET UNITYSDK_OFFSET(0x17432B80)
#define IJFLLFGLIAB_GAFMCEAHEJJ_OFFSET UNITYSDK_OFFSET(0x17437400)
#define IJFLLFGLIAB_GCODBPBKONJ_OFFSET UNITYSDK_OFFSET(0x17430260)
#define IJFLLFGLIAB_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x17435430)
#define IJFLLFGLIAB_GET_DECELERATION_OFFSET UNITYSDK_OFFSET(0x17435450)
#define IJFLLFGLIAB_GET_DRIVEMOVEMENTWITHOUTANIMATOR_OFFSET UNITYSDK_OFFSET(0x174354D0)
#define IJFLLFGLIAB_GET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0x174354F0)
#define IJFLLFGLIAB_GET_STOPSPEED_OFFSET UNITYSDK_OFFSET(0x17435470)
#define IJFLLFGLIAB_GET_VISUALROLLRADIUS_OFFSET UNITYSDK_OFFSET(0x17435490)
#define IJFLLFGLIAB_GET_VISUALROLLSCALE_OFFSET UNITYSDK_OFFSET(0x174354B0)
#define IJFLLFGLIAB_HHIDEDEFGOE_OFFSET UNITYSDK_OFFSET(0x17432CB0)
#define IJFLLFGLIAB_HOPAOAIGJHJ_OFFSET UNITYSDK_OFFSET(0x17437500)
#define IJFLLFGLIAB_IJMPPOHOLBP_OFFSET UNITYSDK_OFFSET(0x17430700)
#define IJFLLFGLIAB_JAIGEBMIANJ_OFFSET UNITYSDK_OFFSET(0x17432FB0)
#define IJFLLFGLIAB_JEJGOPEBHLJ_OFFSET UNITYSDK_OFFSET(0x174339B0)
#define IJFLLFGLIAB_KAOKEMJBGDO_OFFSET UNITYSDK_OFFSET(0x17434D10)
#define IJFLLFGLIAB_KGECBKCJDMG_OFFSET UNITYSDK_OFFSET(0x17431360)
#define IJFLLFGLIAB_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0x17434370)
#define IJFLLFGLIAB_KJBIABNIMEF_OFFSET UNITYSDK_OFFSET(0x17436110)
#define IJFLLFGLIAB_LAJIJKAIKEE_OFFSET UNITYSDK_OFFSET(0x17430150)
#define IJFLLFGLIAB_LKBKFGFGFFF_OFFSET UNITYSDK_OFFSET(0x17435530)
#define IJFLLFGLIAB_MFGCKIPGKMC_OFFSET UNITYSDK_OFFSET(0x17430620)
#define IJFLLFGLIAB_MJNOBGCDMCP_OFFSET UNITYSDK_OFFSET(0x17434480)
#define IJFLLFGLIAB_NCBCCFHAMHN_OFFSET UNITYSDK_OFFSET(0x17437770)
#define IJFLLFGLIAB_NHGHMKNMOEN_OFFSET UNITYSDK_OFFSET(0x17431E90)
#define IJFLLFGLIAB_OAELKCJNNLC_OFFSET UNITYSDK_OFFSET(0x17432450)
#define IJFLLFGLIAB_OAHKPMBCFGK_OFFSET UNITYSDK_OFFSET(0x17435A40)
#define IJFLLFGLIAB_PAEOCLALHIM_OFFSET UNITYSDK_OFFSET(0x17437390)
#define IJFLLFGLIAB_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x17435440)
#define IJFLLFGLIAB_SET_DECELERATION_OFFSET UNITYSDK_OFFSET(0x17435460)
#define IJFLLFGLIAB_SET_DRIVEMOVEMENTWITHOUTANIMATOR_OFFSET UNITYSDK_OFFSET(0x174354E0)
#define IJFLLFGLIAB_SET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0x17435510)
#define IJFLLFGLIAB_SET_STOPSPEED_OFFSET UNITYSDK_OFFSET(0x17435480)
#define IJFLLFGLIAB_SET_VISUALROLLRADIUS_OFFSET UNITYSDK_OFFSET(0x174354A0)
#define IJFLLFGLIAB_SET_VISUALROLLSCALE_OFFSET UNITYSDK_OFFSET(0x174354C0)
#define IJFLLFGLIAB__PROJECTHITBOXSLIDE_G__CONSIDER_107_0_OFFSET UNITYSDK_OFFSET(0x17436020)

inline static constexpr unsigned int IJFLLFGLIAB_TypeDefinitionIndex = 58314;

	class IJFLLFGLIAB : public ::NBNNPCIIDAJ
	{
	public:
		::Il2CppArray<::UnityEngine::RaycastHit>* GEJKLNFKJFN; // 0x1A0
		::Il2CppArray<::UnityEngine::Collider*>* GBELGBBEHJF; // 0x1A8
		::System::String* ALGOENLNPEP; // 0x1B0
		::Il2CppArray<::UnityEngine::Vector3>* JKOCJCILIEL; // 0x1B8
		::UnityEngine::Transform* HEPLNNAIOLO; // 0x1C0
		::System::String* FPMGNJIEPAG; // 0x1C8
		::System::String* MFPEMBMFAMI; // 0x1D0
		::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* JPEADEPMPBI; // 0x1D8
		::RPG::Client::MonoBalanceBallDeformer* CPHCBLMBKEA; // 0x1E0
		::UnityEngine::Transform* LEEHDBNDCCJ; // 0x1E8
		::System::String* MCIGKCMALDG; // 0x1F0
		::UnityEngine::Collider* KKIMOGDBFKM; // 0x1F8
		::UnityEngine::Transform* KFLPBDEGHIA; // 0x200
		::System::Single ALGHPOFKMAI; // 0x208
		::System::Single _Acceleration_k__BackingField; // 0x20C
		::System::Boolean AKPDBDGFBIM; // 0x210
		::System::Boolean IGJGPJNNOJH; // 0x211
		::System::Boolean ODHHIJCOCPK; // 0x212
		::System::Boolean EHFPMBIICJA; // 0x213
		::System::Single DGLPEGOEFGB; // 0x214
		::System::Single ILDNNHCGNKI; // 0x218
		::UnityEngine::Quaternion NHGGHLCLBLE; // 0x21C
		::System::Single CCLGEOBLIIG; // 0x22C
		::UnityEngine::Vector3 HGFHFCMOLJP; // 0x230
		::UnityEngine::Vector3 OEMGHMBOEOB; // 0x23C
		::System::Single INEODDLKICG; // 0x248
		::System::Single DGBIIKKMOGN; // 0x24C
		::System::Boolean _DriveMovementWithoutAnimator_k__BackingField; // 0x250
		::System::Boolean BOCPLLPJCPP; // 0x251
		::System::Boolean EHADEHKDIOK; // 0x252
		::System::Boolean MNBDCHMOJIN; // 0x253
		::UnityEngine::Vector3 JICMIEJJDCK; // 0x254
		::UnityEngine::Vector3 OFHFBHHCJAI; // 0x260
		::System::Single _VisualRollRadius_k__BackingField; // 0x26C
		::System::Single EPKJMHOKPLA; // 0x270
		::System::Single BFEKPCKLODG; // 0x274
		::UnityEngine::Vector3 FAEBJFKANDG; // 0x278
		::UnityEngine::Vector3 NLPJAEDIGEK; // 0x284
		::UnityEngine::Vector3 PKHGIMAAEOO; // 0x290
		::UnityEngine::Vector3 MPDBKCABJIJ; // 0x29C
		::CLCPFJBFKNO LGDCGOLBKIK; // 0x2A8
		::System::Single PCCOGNJLMFD; // 0x2CC
		::System::Single _StopSpeed_k__BackingField; // 0x2D0
		::System::Single LLNPEHPECHG; // 0x2D4
		::UnityEngine::Vector3 _KinematicVelocity_k__BackingField; // 0x2D8
		::System::Single LOCEGHCAIFP; // 0x2E4
		::System::Single _Deceleration_k__BackingField; // 0x2E8
		::UnityEngine::Vector3 KCFPIBBICLG; // 0x2EC
		::System::Single LCDLBEFPDED; // 0x2F8
		::UnityEngine::Vector3 LFBBIKHFOKB; // 0x2FC
		::UnityEngine::Quaternion GLNICFLDHCP; // 0x308
		::UnityEngine::Quaternion GKHEEOEFPLG; // 0x318
		::System::Boolean LJDBPCIOADG; // 0x328
		::System::Byte _padding0[0x3];
		::System::Single _VisualRollScale_k__BackingField; // 0x32C
		::System::Single LPGFBPLKFCI; // 0x330
		::UnityEngine::Vector3 HLEBDKHOPKA; // 0x334
		::System::Single PIELOKLEFPN; // 0x340
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
