#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/ComicBubbleImgType.h"
#include "unitysdk/UnityEngine/UI/Image.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MoleMole/Comic/MonoComicBubbleImage_KFMJLKIPCIH.h"
#include "unitysdk/MoleMole/Comic/MonoComicBubbleImage_MGLICLCOHHG.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class ComicBubbleImgConfig;
namespace MoleMole::Comic { class ComicBubbleImgTypePicConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ABLMEJBAKPL_OFFSET UNITYSDK_OFFSET(0x19280700)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ACCOIALFDDN_OFFSET UNITYSDK_OFFSET(0x1927BF90)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_BAFPOBKAJBC_OFFSET UNITYSDK_OFFSET(0x19282CC0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_BCLFIEJFFMB_OFFSET UNITYSDK_OFFSET(0x1927F8C0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_BOFBGDMPHDF_OFFSET UNITYSDK_OFFSET(0x1927FDC0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_BPKHNJLOLDP_OFFSET UNITYSDK_OFFSET(0x1927F150)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_CHHBMCGCOLN_OFFSET UNITYSDK_OFFSET(0x1927B0A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_CHIOHBPMJMC_OFFSET UNITYSDK_OFFSET(0x19280620)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_CNGNBMKJFLJ_OFFSET UNITYSDK_OFFSET(0x19282C10)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ECJKGELMGHC_OFFSET UNITYSDK_OFFSET(0x1927E830)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_GFAKFNDPLNO_OFFSET UNITYSDK_OFFSET(0x19280570)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_GOKBADGGEMB_OFFSET UNITYSDK_OFFSET(0x19282D00)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_HAAEBJLNDFB_OFFSET UNITYSDK_OFFSET(0x1927F310)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_HEEFLJGOIEM_OFFSET UNITYSDK_OFFSET(0x1927A660)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_HIAPBAGPHII_OFFSET UNITYSDK_OFFSET(0x19280C50)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_HIJFJJNLOAK_OFFSET UNITYSDK_OFFSET(0x1927AB80)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_IJLAJFOGJFP_OFFSET UNITYSDK_OFFSET(0x192809A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_INITGRAPHICPARAMS_OFFSET UNITYSDK_OFFSET(0x1927A460)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_INITIMGCONFIG_OFFSET UNITYSDK_OFFSET(0x1927E520)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_JIPDOKNEONP_OFFSET UNITYSDK_OFFSET(0x1927AB30)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_KHKNHBHCLGO_OFFSET UNITYSDK_OFFSET(0x1927E760)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_MAMMOMBDOEE_OFFSET UNITYSDK_OFFSET(0x19280170)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_MEBPIHCOGDP_OFFSET UNITYSDK_OFFSET(0x1927DC50)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_NIFHLLKBDAG_OFFSET UNITYSDK_OFFSET(0x1927E4C0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_NMOIAOFEMDM_OFFSET UNITYSDK_OFFSET(0x1927B030)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_OFGOLNINCME_OFFSET UNITYSDK_OFFSET(0x1927EF80)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_OJDJFDDKEFI_OFFSET UNITYSDK_OFFSET(0x1927C010)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1927ABF0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_OPHOIEEHJKI_OFFSET UNITYSDK_OFFSET(0x1927BB60)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_PDBHPFKNGOM_OFFSET UNITYSDK_OFFSET(0x19280010)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1927E680)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1927E570)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubbleImage_TypeDefinitionIndex = 55318;

	class MonoComicBubbleImage : public ::UnityEngine::UI::Image
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_GAMJODDBGAI()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MonoComicBubbleImage_TypeDefinitionIndex)->GetStaticField(0x52090);
		}
		::System::Single r; // 0x140
		::System::Int32 precision; // 0x144
		::System::Single bezierPrecision; // 0x148
		::System::Single bezierLenOnTriangle; // 0x14C
		::System::Single bezierLenOnBubble; // 0x150
		::System::Single w; // 0x154
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* targets; // 0x158
		::System::Int32 LPCDCGNGCBI; // 0x160
		::System::Single LEBGHBILJLN; // 0x164
		::System::Single LKEONCKNKOB; // 0x168
		::System::Single HHCLBBINEKI; // 0x16C
		::System::Single LMALLFGFJGA; // 0x170
		::System::Single BCOPHAGNFFN; // 0x174
		::System::Single GBAONJOLDBI; // 0x178
		::System::Single AJPEGBLMNBF; // 0x17C
		::System::Single MGFEDNFADJN; // 0x180
		::System::Single BNFAPFMBNDF; // 0x184
		::UnityEngine::Rect MGOFOAFCFIJ; // 0x188
		::UnityEngine::Vector2 JJEHEEPBOIB; // 0x198
		::System::Boolean FDPJIHODMGH; // 0x1A0
		::System::Byte _padding0[0x3];
		::MoleMole::Comic::ComicBubbleImgType LIMFLMAHKHC; // 0x1A4
		::ComicBubbleImgConfig* CEJENBBHBBG; // 0x1A8
		::UnityEngine::RectTransform* CIAJAFMONFL; // 0x1B0
		::UnityEngine::UI::Image* CGPGBALIFDM; // 0x1B8
		::UnityEngine::CanvasGroup* DBCCHHMMAFN; // 0x1C0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* CKCBHEJGBAK; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE__CCTOR_OFFSET))();
		}

		::System::Void InitGraphicParams(::UnityEngine::Rect JEDDLOIDJHO, ::UnityEngine::Vector2 PCKJLIFJIJF, ::MoleMole::Comic::ComicBubbleImgType OBNIAHNMHPF, ::System::Boolean PJCDCCMFJND)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::MoleMole::Comic::ComicBubbleImgType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_INITGRAPHICPARAMS_OFFSET))(this, JEDDLOIDJHO, PCKJLIFJIJF, OBNIAHNMHPF, PJCDCCMFJND);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* CDAHODBFMLM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ONPOPULATEMESH_OFFSET))(this, CDAHODBFMLM);
		}

		::System::Void InitImgConfig(::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* CKCBHEJGBAK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_INITIMGCONFIG_OFFSET))(this, CKCBHEJGBAK);
		}

		static ::UnityEngine::Vector2 KHKNHBHCLGO(::UnityEngine::Vector2 EIIDOADGOIF, ::System::Single NIHOCHEHENL, ::System::Single INOJCDGMELC, ::System::Single MKBCMHIAMHF, ::System::Boolean GEGFGCFHMHG)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_KHKNHBHCLGO_OFFSET))(EIIDOADGOIF, NIHOCHEHENL, INOJCDGMELC, MKBCMHIAMHF, GEGFGCFHMHG);
		}

		::System::Void ECJKGELMGHC(::UnityEngine::UI::VertexHelper* CDAHODBFMLM, ::UnityEngine::Vector2 MPLDDNMCECG, ::System::Single LNOBNPNPFCH, ::System::Single HCAAHGHMPBA, ::System::Single AMHAFNIKJPG, ::UnityEngine::Color32 HFDBFMGMDKB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ECJKGELMGHC_OFFSET))(this, CDAHODBFMLM, MPLDDNMCECG, LNOBNPNPFCH, HCAAHGHMPBA, AMHAFNIKJPG, HFDBFMGMDKB);
		}

		::UnityEngine::Vector2 HAAEBJLNDFB(::UnityEngine::Vector2 GBEFFCCPBIC, ::UnityEngine::Vector4 KCEGPDMBDJF, ::System::Single ACGKMJOPHNI, ::System::Single& LNOBNPNPFCH)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_HAAEBJLNDFB_OFFSET))(this, GBEFFCCPBIC, KCEGPDMBDJF, ACGKMJOPHNI, LNOBNPNPFCH);
		}

		::System::Void NIFHLLKBDAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_NIFHLLKBDAG_OFFSET))(this);
		}

		::System::Void BCLFIEJFFMB(::UnityEngine::UI::VertexHelper* CDAHODBFMLM, ::UnityEngine::Vector2 HODAIDNDKHD, ::UnityEngine::Vector4 HFMHOELKCAJ, ::UnityEngine::Vector2 MPLDDNMCECG, ::UnityEngine::Color32 EGBDAGNDMJN, ::UnityEngine::Rect MGOFOAFCFIJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_BCLFIEJFFMB_OFFSET))(this, CDAHODBFMLM, HODAIDNDKHD, HFMHOELKCAJ, MPLDDNMCECG, EGBDAGNDMJN, MGOFOAFCFIJ);
		}

		::System::Void MAMMOMBDOEE(::UnityEngine::Rect MBMBDJNDGKJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_MAMMOMBDOEE_OFFSET))(this, MBMBDJNDGKJ);
		}

		static ::UnityEngine::Vector2 IJLAJFOGJFP(::UnityEngine::Vector2 LGPCAKNALGD, ::System::Single DLJPLHKELCO, ::UnityEngine::Vector2 BELCOIKIBOM, ::System::Boolean GDECGONPELC, ::System::Single KGKGLNJAJGN)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_IJLAJFOGJFP_OFFSET))(LGPCAKNALGD, DLJPLHKELCO, BELCOIKIBOM, GDECGONPELC, KGKGLNJAJGN);
		}

		::System::Void HIAPBAGPHII(::System::Single KHCPKKIEECK, ::System::Single JFEIPFNCCKH, ::UnityEngine::Vector2 OPMPKFEHOBM, ::MoleMole::Comic::MonoComicBubbleImage_KFMJLKIPCIH& param_3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Comic::MonoComicBubbleImage_KFMJLKIPCIH&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_HIAPBAGPHII_OFFSET))(this, KHCPKKIEECK, JFEIPFNCCKH, OPMPKFEHOBM, param_3);
		}

		static ::UnityEngine::Vector2 CNGNBMKJFLJ(::System::Single BOHGCCCOLFO, ::System::Single FLKGFJKLNID, ::System::Single DMDIKFPFPMN, ::System::Single BDNHOEOAHPK)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_CNGNBMKJFLJ_OFFSET))(BOHGCCCOLFO, FLKGFJKLNID, DMDIKFPFPMN, BDNHOEOAHPK);
		}

		::System::Void HIJFJJNLOAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_HIJFJJNLOAK_OFFSET))(this);
		}

		::System::Void CHHBMCGCOLN(::UnityEngine::UI::VertexHelper* CDAHODBFMLM, ::UnityEngine::Vector4 HFMHOELKCAJ, ::UnityEngine::Vector2 MPLDDNMCECG, ::UnityEngine::Color32 EGBDAGNDMJN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_CHHBMCGCOLN_OFFSET))(this, CDAHODBFMLM, HFMHOELKCAJ, MPLDDNMCECG, EGBDAGNDMJN);
		}

		::System::Int32 GFAKFNDPLNO(::UnityEngine::Rect MBMBDJNDGKJ)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_GFAKFNDPLNO_OFFSET))(this, MBMBDJNDGKJ);
		}

		::System::Int32 CHIOHBPMJMC(::UnityEngine::Rect MBMBDJNDGKJ)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_CHIOHBPMJMC_OFFSET))(this, MBMBDJNDGKJ);
		}

		::System::Void GOKBADGGEMB(::UnityEngine::UI::VertexHelper* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_GOKBADGGEMB_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single OFGOLNINCME(::UnityEngine::Vector2 PDNNNIMMEDP, ::UnityEngine::Vector2 HHFJJBAPNJP)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_OFGOLNINCME_OFFSET))(this, PDNNNIMMEDP, HHFJJBAPNJP);
		}

		::System::Void ACCOIALFDDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ACCOIALFDDN_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 BAFPOBKAJBC(::UnityEngine::Vector2 OIKMICDBAPP, ::UnityEngine::Vector2 KIAIIPAMCBC, ::System::Single BDEDDEGJFKL)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_BAFPOBKAJBC_OFFSET))(OIKMICDBAPP, KIAIIPAMCBC, BDEDDEGJFKL);
		}

		::System::Void NMOIAOFEMDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_NMOIAOFEMDM_OFFSET))(this);
		}

		::UnityEngine::Vector2 BOFBGDMPHDF(::System::Single BOKAFOIPMII, ::System::Boolean KILPCOMOCMD, ::System::Single& JIECGNDHGBN, ::MoleMole::Comic::MonoComicBubbleImage_MGLICLCOHHG& param_3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single&, ::MoleMole::Comic::MonoComicBubbleImage_MGLICLCOHHG&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_BOFBGDMPHDF_OFFSET))(this, BOKAFOIPMII, KILPCOMOCMD, JIECGNDHGBN, param_3);
		}

		::UnityEngine::Sprite* ABLMEJBAKPL(::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* FMGPDEPOECF, ::MoleMole::Comic::ComicBubbleImgType OBNIAHNMHPF, ::System::String* HIAIKHDFCLN)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>*, ::MoleMole::Comic::ComicBubbleImgType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ABLMEJBAKPL_OFFSET))(this, FMGPDEPOECF, OBNIAHNMHPF, HIAIKHDFCLN);
		}

		::System::Void HEEFLJGOIEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_HEEFLJGOIEM_OFFSET))(this);
		}

		static ::System::Void PDBHPFKNGOM(::UnityEngine::UI::VertexHelper* CDAHODBFMLM, ::UnityEngine::Color32 EGBDAGNDMJN, ::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC, ::UnityEngine::Vector2 CBLGCIFLMKL)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_PDBHPFKNGOM_OFFSET))(CDAHODBFMLM, EGBDAGNDMJN, EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL);
		}

		::System::Boolean JIPDOKNEONP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_JIPDOKNEONP_OFFSET))(this);
		}

		::System::Void OJDJFDDKEFI(::UnityEngine::UI::VertexHelper* CDAHODBFMLM, ::UnityEngine::Vector4 KCEGPDMBDJF, ::UnityEngine::Vector2 MPLDDNMCECG, ::UnityEngine::Color32 HFDBFMGMDKB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_OJDJFDDKEFI_OFFSET))(this, CDAHODBFMLM, KCEGPDMBDJF, MPLDDNMCECG, HFDBFMGMDKB);
		}

		::System::Void OPHOIEEHJKI(::UnityEngine::UI::VertexHelper* CDAHODBFMLM, ::UnityEngine::Vector2 HODAIDNDKHD, ::UnityEngine::Vector4 ICOABDLJKHF, ::UnityEngine::Vector2 MPLDDNMCECG, ::UnityEngine::Color32 EGBDAGNDMJN, ::UnityEngine::Rect MGOFOAFCFIJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_OPHOIEEHJKI_OFFSET))(this, CDAHODBFMLM, HODAIDNDKHD, ICOABDLJKHF, MPLDDNMCECG, EGBDAGNDMJN, MGOFOAFCFIJ);
		}

		static ::System::Void BPKHNJLOLDP(::UnityEngine::UI::VertexHelper* CDAHODBFMLM, ::UnityEngine::Vector3 LCDLAKOLLJJ, ::UnityEngine::Vector3 LBOICOIDEIH, ::UnityEngine::Vector3 NCFJDGIOPMK)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_BPKHNJLOLDP_OFFSET))(CDAHODBFMLM, LCDLAKOLLJJ, LBOICOIDEIH, NCFJDGIOPMK);
		}

		::System::Void MEBPIHCOGDP(::UnityEngine::UI::VertexHelper* CDAHODBFMLM, ::UnityEngine::Vector2 JJEHEEPBOIB, ::UnityEngine::Vector4 KCEGPDMBDJF, ::UnityEngine::Vector2 MPLDDNMCECG, ::UnityEngine::Color32 HFDBFMGMDKB, ::UnityEngine::Rect AOEHPCBEGCE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_MEBPIHCOGDP_OFFSET))(this, CDAHODBFMLM, JJEHEEPBOIB, KCEGPDMBDJF, MPLDDNMCECG, HFDBFMGMDKB, AOEHPCBEGCE);
		}
	};
}
