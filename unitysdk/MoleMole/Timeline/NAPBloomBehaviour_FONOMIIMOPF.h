#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NAPBloomBehaviour_FONOMIIMOPF_TypeDefinitionIndex = 67239;

	struct alignas(8) NAPBloomBehaviour_FONOMIIMOPF
	{
		::System::Boolean DECIDLELLCP; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::Universal::HQBloomMode MNJMGGMDOFP; // 0x14
		::System::Boolean BGDMFILAOED; // 0x18
		::System::Boolean FGIICNLMMIN; // 0x19
		::System::Byte _padding1[0x2];
		::UnityEngine::Rendering::Universal::PP_Quality BLKHAIFAEDC; // 0x1C
		::System::Boolean GJAEICGJADL; // 0x20
		::System::Boolean NKBNHNLPBFH; // 0x21
		::System::Byte _padding2[0x2];
		::System::Single BGBCIKGLFNJ; // 0x24
		::System::Boolean IOCOJIDFBOK; // 0x28
		::System::Boolean PABOLLDFLOH; // 0x29
		::System::Byte _padding3[0x2];
		::System::Single NFOBDECMMEP; // 0x2C
		::System::Boolean AGFFLPINFCG; // 0x30
		::System::Boolean DPEBPLFGCOJ; // 0x31
		::System::Byte _padding4[0x2];
		::System::Single EABLADHHCFN; // 0x34
		::System::Boolean PMBCNMMBCKB; // 0x38
		::System::Boolean MJIDPPKCJBP; // 0x39
		::System::Byte _padding5[0x2];
		::System::Single FIOHLIGAIIC; // 0x3C
		::System::Boolean NCINJKDLALK; // 0x40
		::System::Boolean GBHBMGOKHEF; // 0x41
		::System::Byte _padding6[0x2];
		::System::Single DHDCCKKKMMN; // 0x44
		::System::Boolean GFHNADJLCBC; // 0x48
		::System::Boolean HFOHJAHCBOG; // 0x49
		::System::Byte _padding7[0x2];
		::System::Single COGEOKCHKOJ; // 0x4C
		::System::Boolean DLDLLBHHLON; // 0x50
		::System::Boolean EBKIJANMEAE; // 0x51
		::System::Byte _padding8[0x2];
		::System::Single NOPOMDGHLED; // 0x54
		::System::Boolean JAEACHJOAKJ; // 0x58
		::System::Boolean DFDLJDEAMJB; // 0x59
		::System::Byte _padding9[0x2];
		::System::Single EAHCLMFOGOA; // 0x5C
		::System::Boolean KMKJBFFDGOA; // 0x60
		::System::Boolean LFMFGOGODFL; // 0x61
		::System::Byte _padding10[0x2];
		::System::Single LAHHIMEBFAB; // 0x64
		::System::Boolean EFAKMKDIBGE; // 0x68
		::System::Boolean FOCADGJPLFH; // 0x69
		::System::Byte _padding11[0x2];
		::System::Single IPPDBGHNJHB; // 0x6C
		::System::Boolean LNFAIDLGJCK; // 0x70
		::System::Boolean KBJGILFJNGN; // 0x71
		::System::Byte _padding12[0x2];
		::System::Single NIFFDHLNMBJ; // 0x74
		::System::Boolean LKOPKGIPDMM; // 0x78
		::System::Boolean NHNBDEGIPNN; // 0x79
		::System::Byte _padding13[0x2];
		::System::Single BIHDCBFANPJ; // 0x7C
		::System::Boolean NHKELHBAGBK; // 0x80
		::System::Boolean ONKNOCCHELO; // 0x81
		::System::Byte _padding14[0x2];
		::System::Single ALPELOAOFOE; // 0x84
		::System::Boolean FGMKKFNAJDK; // 0x88
		::System::Boolean FPBBBAIDHJM; // 0x89
		::System::Byte _padding15[0x2];
		::System::Single PCHHBKFPGOM; // 0x8C
		::System::Boolean LFAADIIDNKB; // 0x90
		::System::Boolean LIKANCCCBEL; // 0x91
		::System::Byte _padding16[0x2];
		::System::Single OMIMGEOLNHB; // 0x94
		::System::Boolean MCPFOFBNKPF; // 0x98
		::System::Boolean CJNGDDLOPNH; // 0x99
		::System::Byte _padding17[0x2];
		::System::Single LLCBNEEHICG; // 0x9C
		::System::Boolean ABOCNJFOKPG; // 0xA0
		::System::Boolean LEKLCPIILHD; // 0xA1
		::System::Byte _padding18[0x2];
		::System::Single EJLJOIBGDAF; // 0xA4
		::System::Boolean LKIIEHIFHAB; // 0xA8
		::System::Boolean JGNKHMAIFEJ; // 0xA9
		::System::Byte _padding19[0x2];
		::System::Single BOKJBELCFAE; // 0xAC
		::System::Boolean PAONNNADJLI; // 0xB0
		::System::Boolean NFHDJABDBIF; // 0xB1
		::System::Byte _padding20[0x2];
		::System::Single KNHNMEJCKFC; // 0xB4
		::System::Boolean FDJBAHEPKFN; // 0xB8
		::System::Boolean NBNBBIDDGJM; // 0xB9
		::System::Byte _padding21[0x2];
		::System::Single POLKJIAHAJM; // 0xBC
		::System::Boolean DMKFGCOHHPG; // 0xC0
		::System::Boolean AFOCMECOJHD; // 0xC1
		::System::Byte _padding22[0x2];
		::System::Single BPMHFPBINED; // 0xC4
		::System::Boolean IHLIKNENACF; // 0xC8
		::System::Boolean LIDNOOFLBKB; // 0xC9
		::System::Byte _padding23[0x2];
		::System::Single BFFAPFLEDPH; // 0xCC
		::System::Boolean PAFKKJMCIEH; // 0xD0
		::System::Boolean NCMLCDLOFBH; // 0xD1
		::System::Byte _padding24[0x2];
		::System::Single DLDGKJHLGDI; // 0xD4
		::System::Boolean NKJJNKGHCFD; // 0xD8
		::System::Boolean FKPBBAGOFNB; // 0xD9
		::System::Byte _padding25[0x2];
		::System::Single HBLNNJOIDMD; // 0xDC
		::System::Boolean MIBGEMMFHOI; // 0xE0
		::System::Boolean HJOJCJDEEFN; // 0xE1
		::System::Byte _padding26[0x2];
		::UnityEngine::Color IEKBFDAANEM; // 0xE4
		::System::Boolean MFOFMLPGJCB; // 0xF4
		::System::Boolean NOFEPNFBLHC; // 0xF5
		::System::Byte _padding27[0x2];
		::UnityEngine::Rendering::Universal::BloomResolution POGDKDPMJCG; // 0xF8
		::System::Boolean GJDDJNPFCON; // 0xFC
		::System::Boolean PPACKJGBFOI; // 0xFD
		::System::Boolean NOPJKNEFACN; // 0xFE
		::System::Boolean DNHDDBOJHKF; // 0xFF
		::System::Boolean KCKNPBJEGGL; // 0x100
		::System::Byte _padding28[0x3];
		::System::Single EONHMGJNLNL; // 0x104
		::System::Boolean HNBGLMIGHJP; // 0x108
		::System::Boolean JIBKCMGDHFO; // 0x109
		::System::Boolean LPJOPDCMNKL; // 0x10A
		::System::Boolean KDGOEKKKCOK; // 0x10B
		::System::Boolean MEFCJFJKEEE; // 0x10C
		::System::Boolean HIGOHMIJMIJ; // 0x10D
		::System::Boolean AKJEBPOPODG; // 0x10E
		::System::Boolean PDFAOKMEJMF; // 0x10F
		::System::Single HEGCHLIBFND; // 0x110
		::System::Boolean ENFNINGEFJO; // 0x114
		::System::Boolean JLNCMBKDPAM; // 0x115
		::System::Byte _padding29[0x2];
		::System::Single AKOLCNABFHJ; // 0x118
		::System::Boolean OKCNELJLFGG; // 0x11C
		::System::Boolean IHIBHBNLHII; // 0x11D
		::System::Byte _padding30[0x2];
		::System::Single HDDPHEIKKJH; // 0x120
		::System::Boolean KIOLDFCMFCG; // 0x124
		::System::Boolean FDCILLPAIPL; // 0x125
		::System::Byte _padding31[0x2];
		::System::Single ANIKMMADCAO; // 0x128
		::System::Boolean MCPAEIAPGDK; // 0x12C
		::System::Boolean MONOMKJMNDG; // 0x12D
		::System::Byte _padding32[0x2];
		::UnityEngine::Vector4 BKONPPDJLLE; // 0x130
		::System::Boolean IKBEMOKKAPN; // 0x140
		::System::Boolean NIFADDLKIMJ; // 0x141
		::System::Byte _padding33[0x2];
		::System::Single EBFAMNLJIGH; // 0x144
		::System::Boolean OFHJIGMCIDH; // 0x148
		::System::Boolean DJFKLICLDNG; // 0x149
		::System::Byte _padding34[0x2];
		::System::Single MGJINCKBCFE; // 0x14C
		::System::Boolean GKIKJLGOPNG; // 0x150
		::System::Boolean AGKAJFOFFHK; // 0x151
		::System::Byte _padding35[0x2];
		::System::Single HNHBAEOHJME; // 0x154
		::System::Boolean EKKJNLPPMBH; // 0x158
		::System::Boolean GGEJPJPNMMP; // 0x159
		::System::Byte _padding36[0x2];
		::System::Int32 LAABHOKDIPD; // 0x15C
		::System::Boolean OICFICKOHGM; // 0x160
		::System::Boolean DPPJEEHADAE; // 0x161
		::System::Byte _padding37[0x2];
		::UnityEngine::NAPRenderPipeline0::NapBloomQuality HNDHMJOMFHC; // 0x164
		::System::Boolean AEIJFMCJJFM; // 0x168
		::System::Boolean IIKNFGPJNPH; // 0x169
		::System::Byte _padding38[0x2];
		::UnityEngine::Vector4 PIHEDAINDLE; // 0x16C
		::System::Boolean IJADPBDAMNP; // 0x17C
		::System::Boolean MFICMFECKNN; // 0x17D
		::System::Byte _padding39[0x2];
		::System::Int32 IDEGCODIPGO; // 0x180
		::System::Boolean MDGFCBPDPEO; // 0x184
		::System::Boolean HHKCLIOIDKH; // 0x185
		::System::Byte _padding40[0x2];
		::UnityEngine::Texture* AHFDNKHOOKH; // 0x188
		::System::Boolean GFNDMANELDE; // 0x190
		::System::Boolean OKIENBDKBID; // 0x191
		::System::Byte _padding41[0x2];
		::System::Single FGAMGEDHGIA; // 0x194
		::System::Boolean NAOAOJBAILC; // 0x198
		::System::Boolean OHMODIKGBIN; // 0x199
		::System::Boolean OKBPBLAOEJC; // 0x19A
		::System::Boolean BKKPFDCPDPD; // 0x19B
		::System::Boolean NJKJBLMLPHC; // 0x19C
		::System::Boolean GNFHBLAFLBE; // 0x19D
		::System::Boolean FBGLNEGHIOH; // 0x19E
		::System::Boolean DNGCKANEKOB; // 0x19F
		::System::Single HHAMOKNJLNK; // 0x1A0
		::System::Boolean ABJCNNDDGLN; // 0x1A4
		::System::Boolean OBKJMLJGHEP; // 0x1A5
		::System::Byte _padding42[0x2];
		::System::Single OHKKEAGHFML; // 0x1A8
		::System::Boolean DLLNINKALKD; // 0x1AC
		::System::Boolean GBAMIMCCLJJ; // 0x1AD
		::System::Byte _padding43[0x2];
		::System::Single PEAGIAHIEIO; // 0x1B0
		::System::Boolean KOMLLIBMDOK; // 0x1B4
		::System::Boolean GNPAJAPNDNH; // 0x1B5
		::System::Byte _padding44[0x2];
		::System::Single OINGNALGMGM; // 0x1B8
		::System::Boolean CJMHBJGDDCO; // 0x1BC
		::System::Boolean JCBFABOHEFH; // 0x1BD
		::System::Byte _padding45[0x2];
		::System::Single FNPDGFEHEJI; // 0x1C0
		::System::Boolean AEFEJBLFOJB; // 0x1C4
		::System::Boolean JBCILFLNKJF; // 0x1C5
		::System::Byte _padding46[0x2];
		::System::Single BMOELKPILLL; // 0x1C8
		::System::Boolean EGFDPEDEBNL; // 0x1CC
		::System::Boolean JGBEFGBFABH; // 0x1CD
		::System::Byte _padding47[0x2];
		::System::Int32 KIAACFPILIL; // 0x1D0
		::System::Boolean DGIMANIMLMF; // 0x1D4
		::System::Boolean GDONJPONBBH; // 0x1D5
		::System::Byte _padding48[0x2];
		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* DPNLCIKMDEK; // 0x1D8
		::System::Boolean NICIKBKNHBJ; // 0x1E0
		::System::Boolean IPLDKICKJKE; // 0x1E1
		::System::Boolean KIMHAIHMIJD; // 0x1E2
		::System::Boolean KFDPGDMFBEK; // 0x1E3
		::System::Boolean CKNGBJKCGHL; // 0x1E4
		::System::Byte _padding49[0x3];
		::System::Single EOKKLLNJBME; // 0x1E8
		::System::Boolean GPHIGBJBJDE; // 0x1EC
		::System::Boolean BECLNPOJAJD; // 0x1ED
		::System::Byte _padding50[0x2];
		::System::Single OAHOLKPELLL; // 0x1F0
		::System::Boolean DPPJHFJFEAH; // 0x1F4
		::System::Boolean GILPAEFBJCN; // 0x1F5
		::System::Byte _padding51[0x2];
		::System::Single JGKMGELFKLH; // 0x1F8
		::System::Boolean COPOCAJJBEK; // 0x1FC
		::System::Boolean HPKFJGAIMFG; // 0x1FD
		::System::Byte _padding52[0x2];
		::System::Single JONBMAKPFDI; // 0x200
		::System::Boolean NKGFACDPHEO; // 0x204
		::System::Boolean ENKKBJHFPDL; // 0x205
		::System::Byte _padding53[0x2];
		::System::Single DJDOGPJHNBE; // 0x208
		::System::Boolean HMFEMNMLHDA; // 0x20C
		::System::Boolean IOIJGMJEEBF; // 0x20D
		::System::Byte _padding54[0x2];
		::System::Single BLDDDEAMKJF; // 0x210
		::System::Boolean COEDBBOPLGI; // 0x214
		::System::Boolean IAJIMEPKNDJ; // 0x215
		::System::Byte _padding55[0x2];
		::System::Single GGMGAGIIMHG; // 0x218
		::System::Boolean BMNJBFDEICM; // 0x21C
		::System::Boolean EOJPPHNEKCN; // 0x21D
		::System::Byte _padding56[0x2];
		::System::Single HADEBECANFP; // 0x220
		::System::Boolean NHNGBJBEEGN; // 0x224
		::System::Boolean LANNMPDGODC; // 0x225
		::System::Byte _padding57[0x2];
		::System::Single ILHNMAAOGMM; // 0x228
		::System::Boolean KDBILMKBOMN; // 0x22C
		::System::Boolean ONJLOMAEAAG; // 0x22D
		::System::Byte _padding58[0x2];
		::System::Single AONIIFGMGAF; // 0x230
		::System::Boolean ONILGODPKKI; // 0x234
		::System::Boolean EEBLFEEBDON; // 0x235
		::System::Byte _padding59[0x2];
		::System::Single BAPFNHMNDKP; // 0x238
		::System::Boolean IDDDGLPEAHO; // 0x23C
		::System::Boolean JNCMKHLDKLC; // 0x23D
		::System::Byte _padding60[0x2];
		::System::Single BKPNKGHDLFC; // 0x240
		::System::Boolean NAPKKJGALBD; // 0x244
		::System::Boolean CDFPJEFKEEL; // 0x245
		::System::Byte _padding61[0x2];
		::System::Single MILIAJJDMLM; // 0x248
		::System::Boolean PPLALKBJMOL; // 0x24C
		::System::Boolean ACAPJPCDBFG; // 0x24D
		::System::Byte _padding62[0x2];
		::System::Single PIPKPJFKLOP; // 0x250
		::System::Boolean HFHBEKMJMKK; // 0x254
		::System::Boolean CDIOIGHAOLG; // 0x255
		::System::Byte _padding63[0x2];
		::System::Single KPBJKCNKOLJ; // 0x258
		::System::Boolean PDJKCCNEKKJ; // 0x25C
		::System::Boolean FCLIHBELNNN; // 0x25D
		::System::Byte _padding64[0x2];
		::System::Single BMEKEGAHPMF; // 0x260
		::System::Boolean AFOANKDHGLN; // 0x264
		::System::Boolean AJKKKIPAPFC; // 0x265
	};
}
