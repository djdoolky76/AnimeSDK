#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGHFLFOFLJH.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector4.h"

class GIGFDLPMNND;
class NapGradient;
namespace MoleMole { class MonoGhostEffect; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_AEJHKCHMCAE_OFFSET UNITYSDK_OFFSET(0x13105920)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_AJJAJPAOAKF_OFFSET UNITYSDK_OFFSET(0x13106130)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_AKCKHPEIPEK_OFFSET UNITYSDK_OFFSET(0x131055C0)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_ANAOOKAKIJF_OFFSET UNITYSDK_OFFSET(0x130FBB90)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_BAFKCBEMIBI_OFFSET UNITYSDK_OFFSET(0x131021E0)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_BEIIKMKLFOJ_OFFSET UNITYSDK_OFFSET(0x13102120)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_BNGFJEKHEGK_OFFSET UNITYSDK_OFFSET(0x13102900)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_DLECDHPPDIF_OFFSET UNITYSDK_OFFSET(0x13102230)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_EABKLBJMELL_OFFSET UNITYSDK_OFFSET(0x13106210)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x13106930)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GBCNCMFKKEB_OFFSET UNITYSDK_OFFSET(0x131057E0)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GDLNPOIHMAO_OFFSET UNITYSDK_OFFSET(0x13105820)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GKBDOKIICDP_OFFSET UNITYSDK_OFFSET(0x13103BF0)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GNLCMMFEHCK_OFFSET UNITYSDK_OFFSET(0x13103990)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GNNHEOMHGOB_OFFSET UNITYSDK_OFFSET(0x13106800)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_HCFGBNKJHDL_OFFSET UNITYSDK_OFFSET(0x13106990)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_HFLPEDOOGFD_OFFSET UNITYSDK_OFFSET(0x13102990)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_HMGCMOKGBJP_OFFSET UNITYSDK_OFFSET(0x13103920)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_IEOABLCNHJA_OFFSET UNITYSDK_OFFSET(0x13102A50)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_JAHHKOFAHPC_OFFSET UNITYSDK_OFFSET(0x13103480)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_KOJKNLHIDLE_OFFSET UNITYSDK_OFFSET(0x131032C0)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_LEOMFIHJMJM_OFFSET UNITYSDK_OFFSET(0x131036A0)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_LJMFBHIKHLN_OFFSET UNITYSDK_OFFSET(0x13106010)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_LPGKPDMEPLA_OFFSET UNITYSDK_OFFSET(0x13104920)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_MCNADLFHADK_OFFSET UNITYSDK_OFFSET(0x131068D0)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_MFFEICNIILI_OFFSET UNITYSDK_OFFSET(0x13105860)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_MFIJBDPGDAI_OFFSET UNITYSDK_OFFSET(0x13103360)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_MKPNGOCMKEM_OFFSET UNITYSDK_OFFSET(0x13105160)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_OIPMAIAGEBO_OFFSET UNITYSDK_OFFSET(0x13106C80)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13106260)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_PCPHHBHICLG_OFFSET UNITYSDK_OFFSET(0x13105240)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_PLFKEFCCLCL_OFFSET UNITYSDK_OFFSET(0x13102490)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_PPFPFELNIPK_OFFSET UNITYSDK_OFFSET(0x131067A0)
#define MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC__CTOR_OFFSET UNITYSDK_OFFSET(0x130FB5B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_LGKKLIANKEC_TypeDefinitionIndex = 85703;

	class MonoGhostEffect_LGKKLIANKEC : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* LDLMPHEEKBG; // 0x10
		::MoleMole::EntityHandle AAGGGPCGIDC; // 0x18
		::MoleMole::Config::ConfigGhostMove* DOFEKCMLMLE; // 0x28
		::UnityEngine::Renderer* CEOHIONPCJG; // 0x30
		::Il2CppArray<::UnityEngine::Material*>* HELBJOBPJND; // 0x38
		::UnityEngine::MeshRenderer* LINDDFMOHOI; // 0x40
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Object*>*>* KINADFPOHDB; // 0x48
		::Il2CppArray<::UnityEngine::Material*>* LKDIAKCPCGA; // 0x50
		::UnityEngine::SkinnedMeshRenderer* INJKBGIJLKO; // 0x58
		::UnityEngine::Mesh* BLFDJKGCDHN; // 0x60
		::MoleMole::MonoGhostEffect* KIPFEFJJNIM; // 0x68
		::Il2CppArray<::UnityEngine::Material*>* FKGLFOOMCDO; // 0x70
		::UnityEngine::GameObject* FGFEIKPKKBD; // 0x78
		::System::Single JIDDFIIHMLK; // 0x80
		::System::Boolean LNBKDHJMKOJ; // 0x84
		::System::Boolean BAOKLEHOMCO; // 0x85
		::System::Boolean CENCLKKMFGE; // 0x86
		::System::Boolean DKOKAHJMHDF; // 0x87
		::System::Int32 ILAEKHLEHIF; // 0x88
		::BGHFLFOFLJH JIHKFIIBNPL; // 0x8C
		::UnityEngine::Vector3 DDKBAIELJHN; // 0x9C
		::UnityEngine::Vector3 IDODHMGOOGK; // 0xA8
		::System::Int32 AHKKMIJAOHE; // 0xB4
		::System::Single MLKLCEKJGPE; // 0xB8
		::System::Single EIFCNLDPDBH; // 0xBC
		::System::Single NDNEEPFPAHO; // 0xC0
		::UnityEngine::Vector3 NCOOOBJHBID; // 0xC4
		::System::Single NOGLBGICGLF; // 0xD0

		::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* IEBPHKDAGBB, ::UnityEngine::MeshRenderer* PHNLGLAANGB, ::UnityEngine::Mesh* BEEGIMMGFPF, ::System::Single MLKLCEKJGPE, ::MoleMole::Battle::Entity* DJNMGBDLGND, ::MoleMole::MonoGhostEffect* PPEPCOCKOCE, ::UnityEngine::Material* OMOCNMFPNOJ, ::System::Boolean EINKGPGBHNI, ::System::Int32 FDMJCLGCCNA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::MeshRenderer*, ::UnityEngine::Mesh*, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::MonoGhostEffect*, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC__CTOR_OFFSET))(this, IEBPHKDAGBB, PHNLGLAANGB, BEEGIMMGFPF, MLKLCEKJGPE, DJNMGBDLGND, PPEPCOCKOCE, OMOCNMFPNOJ, EINKGPGBHNI, FDMJCLGCCNA);
		}

		::System::Void BAFKCBEMIBI(::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_BAFKCBEMIBI_OFFSET))(this, AEIHFBNNLBP);
		}

		::System::Void DLECDHPPDIF(::GIGFDLPMNND* NLNNFINONOI, ::System::Single LEFHBNBFIFK)
		{
			return ((::System::Void(*)(::PVOID, ::GIGFDLPMNND*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_DLECDHPPDIF_OFFSET))(this, NLNNFINONOI, LEFHBNBFIFK);
		}

		::System::Void PLFKEFCCLCL(::System::Boolean& KNHPFGOIIKO, ::UnityEngine::Vector4& LCLFABNEFNC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_PLFKEFCCLCL_OFFSET))(this, KNHPFGOIIKO, LCLFABNEFNC);
		}

		::System::Void BNGFJEKHEGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_BNGFJEKHEGK_OFFSET))(this);
		}

		::System::Void HFLPEDOOGFD(::MoleMole::EntityHandle MHBNPHEHDDK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_HFLPEDOOGFD_OFFSET))(this, MHBNPHEHDDK);
		}

		::System::Void IEOABLCNHJA(::System::Single PGBPIAEGPJD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_IEOABLCNHJA_OFFSET))(this, PGBPIAEGPJD);
		}

		::System::Void KOJKNLHIDLE(::System::UInt32 MPMBGHLKNDD, ::UnityEngine::Vector3 EKDFMJLPIPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_KOJKNLHIDLE_OFFSET))(this, MPMBGHLKNDD, EKDFMJLPIPI);
		}

		::System::Void MFIJBDPGDAI(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion GJNLCLDFFIN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_MFIJBDPGDAI_OFFSET))(this, OHOGDOMNHNK, GJNLCLDFFIN);
		}

		::System::Void JAHHKOFAHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_JAHHKOFAHPC_OFFSET))(this);
		}

		::System::Boolean LEOMFIHJMJM(::UnityEngine::Vector3& CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_LEOMFIHJMJM_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Void GNLCMMFEHCK(::UnityEngine::Material* KNNDDLMOKCG, ::UnityEngine::Vector4 LCLFABNEFNC, ::System::Boolean KNHPFGOIIKO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GNLCMMFEHCK_OFFSET))(this, KNNDDLMOKCG, LCLFABNEFNC, KNHPFGOIIKO);
		}

		::System::Void GKBDOKIICDP(::UnityEngine::SkinnedMeshRenderer* NMEAJGLDGIL, ::UnityEngine::Material* BCILHHMOEOA, ::UnityEngine::Material* NELMIJAADCP, ::System::Single MLKLCEKJGPE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GKBDOKIICDP_OFFSET))(this, NMEAJGLDGIL, BCILHHMOEOA, NELMIJAADCP, MLKLCEKJGPE);
		}

		::System::String* BEIIKMKLFOJ(::System::String* HLFFCMIFFIB)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_BEIIKMKLFOJ_OFFSET))(this, HLFFCMIFFIB);
		}

		::System::Void MKPNGOCMKEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_MKPNGOCMKEM_OFFSET))(this);
		}

		::UnityEngine::Transform* HMGCMOKGBJP()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_HMGCMOKGBJP_OFFSET))(this);
		}

		::System::Void PCPHHBHICLG(::UnityEngine::Material* OMOCNMFPNOJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_PCPHHBHICLG_OFFSET))(this, OMOCNMFPNOJ);
		}

		::System::Void GBCNCMFKKEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GBCNCMFKKEB_OFFSET))(this);
		}

		::System::Void MFFEICNIILI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_MFFEICNIILI_OFFSET))(this);
		}

		::System::Void AEJHKCHMCAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_AEJHKCHMCAE_OFFSET))(this);
		}

		::System::Void LJMFBHIKHLN(::UnityEngine::Vector3 JPKIKNCMAID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_LJMFBHIKHLN_OFFSET))(this, JPKIKNCMAID);
		}

		::System::Void AJJAJPAOAKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_AJJAJPAOAKF_OFFSET))(this);
		}

		::System::Boolean EABKLBJMELL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_EABKLBJMELL_OFFSET))(this);
		}

		::System::Void ANAOOKAKIJF(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* FEDMEHBPMKL, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>* COEABFOGOBI, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>* JFHIFPPDOEG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_ANAOOKAKIJF_OFFSET))(this, FEDMEHBPMKL, COEABFOGOBI, JFHIFPPDOEG);
		}

		::System::Void GDLNPOIHMAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GDLNPOIHMAO_OFFSET))(this);
		}

		::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void LPGKPDMEPLA(::UnityEngine::Material* OMOCNMFPNOJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_LPGKPDMEPLA_OFFSET))(this, OMOCNMFPNOJ);
		}

		::System::Void PPFPFELNIPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_PPFPFELNIPK_OFFSET))(this);
		}

		::System::Void GNNHEOMHGOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_GNNHEOMHGOB_OFFSET))(this);
		}

		::UnityEngine::Transform* MCNADLFHADK()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_MCNADLFHADK_OFFSET))(this);
		}

		::System::Void EMCPPBMEKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_EMCPPBMEKKK_OFFSET))(this);
		}

		::System::Void AKCKHPEIPEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_AKCKHPEIPEK_OFFSET))(this);
		}

		::System::Void HCFGBNKJHDL(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_HCFGBNKJHDL_OFFSET))(this, FIPHFGHNNBE);
		}

		::System::Void OIPMAIAGEBO(::UnityEngine::Vector3 OHOGDOMNHNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LGKKLIANKEC_OIPMAIAGEBO_OFFSET))(this, OHOGDOMNHNK);
		}
	};
}
