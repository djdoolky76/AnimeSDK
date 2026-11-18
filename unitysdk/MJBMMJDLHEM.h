#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCPFHFOLBFF.h"
#include "unitysdk/HCDCPDGBIMB.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/PJHKDJEGJOG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/MJBMMJDLHEM_BMLBBKFKOPM.h"

class AKHOKICACBA;
class CBJMLHDPEKK;
class EDOKGCBMFKB;
class EEHJOPEJOCD;
class FCBNEBOPNIF;
class GEKNEEMAHBC;
class HDGDGHMDJLK;
class MHOKGJKNBOI;
class POFOFGILKAA;
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MJBMMJDLHEM_ACBEJDACLPE_OFFSET UNITYSDK_OFFSET(0x14062880)
#define MJBMMJDLHEM_AJHJCLEODCF_OFFSET UNITYSDK_OFFSET(0x14064E00)
#define MJBMMJDLHEM_AJINNLNIHJC_OFFSET UNITYSDK_OFFSET(0x14065690)
#define MJBMMJDLHEM_AMODKFGCBPJ_OFFSET UNITYSDK_OFFSET(0x14065550)
#define MJBMMJDLHEM_BEBLFMKHGKH_OFFSET UNITYSDK_OFFSET(0x140650B0)
#define MJBMMJDLHEM_BHDIHIEHKHP_OFFSET UNITYSDK_OFFSET(0x140628D0)
#define MJBMMJDLHEM_BIPAGPBHGBP_OFFSET UNITYSDK_OFFSET(0x14065B60)
#define MJBMMJDLHEM_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x14061B50)
#define MJBMMJDLHEM_CKINGEHLFIH_OFFSET UNITYSDK_OFFSET(0x140621E0)
#define MJBMMJDLHEM_CLNIGONFCGH_OFFSET UNITYSDK_OFFSET(0x14065720)
#define MJBMMJDLHEM_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x14060120)
#define MJBMMJDLHEM_DMFIKALJLMI_OFFSET UNITYSDK_OFFSET(0x14060A10)
#define MJBMMJDLHEM_EGIODNKPHHB_OFFSET UNITYSDK_OFFSET(0x140657E0)
#define MJBMMJDLHEM_FDBAGNCDBAA_OFFSET UNITYSDK_OFFSET(0x140622F0)
#define MJBMMJDLHEM_FICLPBCDCDJ_OFFSET UNITYSDK_OFFSET(0x140657D0)
#define MJBMMJDLHEM_FKGPGGNMDFI_OFFSET UNITYSDK_OFFSET(0x14060BE0)
#define MJBMMJDLHEM_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x14062280)
#define MJBMMJDLHEM_FNCGMGKLGAK_OFFSET UNITYSDK_OFFSET(0x14065560)
#define MJBMMJDLHEM_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x14060F40)
#define MJBMMJDLHEM_GHIKPOHDEGM_OFFSET UNITYSDK_OFFSET(0x140655F0)
#define MJBMMJDLHEM_GLFHHIBDPPL_OFFSET UNITYSDK_OFFSET(0x140645D0)
#define MJBMMJDLHEM_GMOJGKPPAKJ_OFFSET UNITYSDK_OFFSET(0x14060290)
#define MJBMMJDLHEM_GPEBDHEKGCI_OFFSET UNITYSDK_OFFSET(0x14060BB0)
#define MJBMMJDLHEM_HBAAHDHHIJA_OFFSET UNITYSDK_OFFSET(0x140659D0)
#define MJBMMJDLHEM_HCPGALIGDFH_OFFSET UNITYSDK_OFFSET(0x14060110)
#define MJBMMJDLHEM_HDBFMMBFEDF_OFFSET UNITYSDK_OFFSET(0x14061C10)
#define MJBMMJDLHEM_HEAGANLBPOC_OFFSET UNITYSDK_OFFSET(0x14064B20)
#define MJBMMJDLHEM_HFDJNCDAHGN_OFFSET UNITYSDK_OFFSET(0x14060A70)
#define MJBMMJDLHEM_HIHMDMNJIIJ_OFFSET UNITYSDK_OFFSET(0x14061EE0)
#define MJBMMJDLHEM_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x14065150)
#define MJBMMJDLHEM_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x14064DD0)
#define MJBMMJDLHEM_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x14061E70)
#define MJBMMJDLHEM_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x14064DF0)
#define MJBMMJDLHEM_KMJOKBIIEDB_OFFSET UNITYSDK_OFFSET(0x14065680)
#define MJBMMJDLHEM_KMNNJJEAKKN_OFFSET UNITYSDK_OFFSET(0x14065160)
#define MJBMMJDLHEM_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x14064DE0)
#define MJBMMJDLHEM_KNAOEKLMFPN_OFFSET UNITYSDK_OFFSET(0x140648B0)
#define MJBMMJDLHEM_LAKHJJCLDKB_OFFSET UNITYSDK_OFFSET(0x14065000)
#define MJBMMJDLHEM_LDJOPMDBNPL_OFFSET UNITYSDK_OFFSET(0x14060BF0)
#define MJBMMJDLHEM_LEOKODLANAJ_OFFSET UNITYSDK_OFFSET(0x14060BC0)
#define MJBMMJDLHEM_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x14060A00)
#define MJBMMJDLHEM_MPEAJLHINBP_OFFSET UNITYSDK_OFFSET(0x14064F70)
#define MJBMMJDLHEM_NKJJNAIPGHF_OFFSET UNITYSDK_OFFSET(0x140615B0)
#define MJBMMJDLHEM_NMNOHGIFONK_OFFSET UNITYSDK_OFFSET(0x14061E00)
#define MJBMMJDLHEM_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x140609A0)
#define MJBMMJDLHEM_OMPDOHONEMB_OFFSET UNITYSDK_OFFSET(0x14064ED0)
#define MJBMMJDLHEM_OPCDJBJBPBD_OFFSET UNITYSDK_OFFSET(0x14060BD0)
#define MJBMMJDLHEM_PBPDIFMOAJD_OFFSET UNITYSDK_OFFSET(0x14064D20)
#define MJBMMJDLHEM_PCPELDFMGCL_OFFSET UNITYSDK_OFFSET(0x14064500)
#define MJBMMJDLHEM_PFNIIMHIBGF_OFFSET UNITYSDK_OFFSET(0x140626B0)
#define MJBMMJDLHEM_PLDJINBELMF_OFFSET UNITYSDK_OFFSET(0x14061340)
#define MJBMMJDLHEM_PMLILGDNPPC_OFFSET UNITYSDK_OFFSET(0x140650A0)
#define MJBMMJDLHEM_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x14061280)
#define MJBMMJDLHEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x140645C0)
#define MJBMMJDLHEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14064540)

inline static constexpr unsigned int MJBMMJDLHEM_TypeDefinitionIndex = 87065;

class MJBMMJDLHEM : public ::PJHKDJEGJOG
{
public:
	static ::System::Single* StaticGet_NKMLLNNALDG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MJBMMJDLHEM_TypeDefinitionIndex)->GetStaticField(0xFD70);
	}
	::MoleMole::Project::Config::BabelFloorInfoTemplateExt* CBMDMEPMCJL; // 0x2F8
	::MHOKGJKNBOI* EFKMGPGJDND; // 0x300
	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* IGAAKDOIPNN; // 0x308
	::System::Nullable_1<::System::Int32> JAJDFIBMLLA; // 0x310
	::System::Int32 _LPIKGDBOJIK_k__BackingField; // 0x318
	::System::Boolean _OHOMBEILHNF_k__BackingField; // 0x31C
	::System::Byte _padding0[0x3];
	::System::Int32 _GKEDIBNJDHE_k__BackingField; // 0x320
	::System::Int32 _HIHFHALDFPK_k__BackingField; // 0x324

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJBMMJDLHEM__CCTOR_OFFSET))();
	}

	::System::Boolean HCPGALIGDFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_HCPGALIGDFH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_NPHBLJDPFHH_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Int32 DMFIKALJLMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_DMFIKALJLMI_OFFSET))(this);
	}

	::System::Int32 GPEBDHEKGCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_GPEBDHEKGCI_OFFSET))(this);
	}

	::System::Void LEOKODLANAJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_LEOKODLANAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OPCDJBJBPBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_OPCDJBJBPBD_OFFSET))(this);
	}

	::System::Void FKGPGGNMDFI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_FKGPGGNMDFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LDJOPMDBNPL(::GEKNEEMAHBC* AKFNMBMKBAI)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_LDJOPMDBNPL_OFFSET))(this, AKFNMBMKBAI);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Void NKJJNAIPGHF(::EEHJOPEJOCD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_NKJJNAIPGHF_OFFSET))(this, AAOCANGHBDG);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::System::Void HDBFMMBFEDF(::AKHOKICACBA* MIMNNMMMJJF)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_HDBFMMBFEDF_OFFSET))(this, MIMNNMMMJJF);
	}

	::System::Void NMNOHGIFONK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_NMNOHGIFONK_OFFSET))(this);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_JLHBKJKDGDE_OFFSET))(this);
	}

	::System::Boolean HIHMDMNJIIJ(::MoleMole::Level::RatingType& NILNNELOMCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_HIHMDMNJIIJ_OFFSET))(this, NILNNELOMCG);
	}

	::System::Boolean CKINGEHLFIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_CKINGEHLFIH_OFFSET))(this);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Void PFNIIMHIBGF(::MoleMole::Level::RatingType& NILNNELOMCG, ::System::Single& PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType&, ::System::Single&))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_PFNIIMHIBGF_OFFSET))(this, NILNNELOMCG, PMGFIHJAJHL);
	}

	::HDGDGHMDJLK* ACBEJDACLPE()
	{
		return ((::HDGDGHMDJLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_ACBEJDACLPE_OFFSET))(this);
	}

	::System::Boolean PCPELDFMGCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_PCPELDFMGCL_OFFSET))(this);
	}

	::System::Double GLFHHIBDPPL()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_GLFHHIBDPPL_OFFSET))(this);
	}

	::System::Single KNAOEKLMFPN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_KNAOEKLMFPN_OFFSET))(this);
	}

	::CBJMLHDPEKK* BHDIHIEHKHP()
	{
		return ((::CBJMLHDPEKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_BHDIHIEHKHP_OFFSET))(this);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_JJCECLNIHEK_OFFSET))(this);
	}

	::System::Void PBPDIFMOAJD(::DCPFHFOLBFF& FBLPJEENJPK, ::System::Single& PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::DCPFHFOLBFF&, ::System::Single&))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_PBPDIFMOAJD_OFFSET))(this, FBLPJEENJPK, PMGFIHJAJHL);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_JNENFEELMBP_OFFSET))(this);
	}

	::System::Single AJHJCLEODCF(::MoleMole::Level::RatingType EGODKLPFBFF)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_AJHJCLEODCF_OFFSET))(this, EGODKLPFBFF);
	}

	::MoleMole::UIBaseController* OMPDOHONEMB(::MoleMole::UIBaseController* MIALFKCCCPI, ::UnityEngine::Transform* KMGKAIDEIBA)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_OMPDOHONEMB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void MPEAJLHINBP(::GEKNEEMAHBC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_MPEAJLHINBP_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Project::Config::BabelFloorInfoTemplateExt* HFDJNCDAHGN()
	{
		return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_HFDJNCDAHGN_OFFSET))(this);
	}

	::System::Boolean LAKHJJCLDKB(::MoleMole::Level::RatingType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_LAKHJJCLDKB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PMLILGDNPPC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_PMLILGDNPPC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BEBLFMKHGKH(::EEHJOPEJOCD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_BEBLFMKHGKH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* GMOJGKPPAKJ(::System::Boolean FKGMECIECDM)
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_GMOJGKPPAKJ_OFFSET))(this, FKGMECIECDM);
	}

	::System::Void AMODKFGCBPJ(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_AMODKFGCBPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Single FNCGMGKLGAK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_FNCGMGKLGAK_OFFSET))(this);
	}

	::System::Boolean GHIKPOHDEGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_GHIKPOHDEGM_OFFSET))(this);
	}

	::System::Int32 KMJOKBIIEDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_KMJOKBIIEDB_OFFSET))(this);
	}

	::System::Void AJINNLNIHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_AJINNLNIHJC_OFFSET))(this);
	}

	::System::Int32 PLDJINBELMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_PLDJINBELMF_OFFSET))(this);
	}

	::System::Int32 CLNIGONFCGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_CLNIGONFCGH_OFFSET))(this);
	}

	::System::Void FICLPBCDCDJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_FICLPBCDCDJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FDBAGNCDBAA(::EDOKGCBMFKB* LHFGDMKIDAP)
	{
		return ((::System::Void(*)(::PVOID, ::EDOKGCBMFKB*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_FDBAGNCDBAA_OFFSET))(this, LHFGDMKIDAP);
	}

	::System::Single EGIODNKPHHB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_EGIODNKPHHB_OFFSET))(this);
	}

	::System::Void KMNNJJEAKKN(::System::Int32 KCJHDEGPBNI, ::MJBMMJDLHEM_BMLBBKFKOPM& param_1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MJBMMJDLHEM_BMLBBKFKOPM&))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_KMNNJJEAKKN_OFFSET))(this, KCJHDEGPBNI, param_1);
	}

	::System::Single HEAGANLBPOC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_HEAGANLBPOC_OFFSET))(this);
	}

	::System::Single HBAAHDHHIJA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_HBAAHDHHIJA_OFFSET))(this);
	}

	::System::Void BIPAGPBHGBP(::AKHOKICACBA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + MJBMMJDLHEM_BIPAGPBHGBP_OFFSET))(this, MIALFKCCCPI);
	}
};
