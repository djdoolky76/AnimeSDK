#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLGBOCKNLMG_POIECJEIEHL.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define DLGBOCKNLMG_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1941CAD0)
#define DLGBOCKNLMG_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x194179D0)
#define DLGBOCKNLMG_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x1941CAB0)
#define DLGBOCKNLMG_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x19418590)
#define DLGBOCKNLMG_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x19418130)
#define DLGBOCKNLMG_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1941CAC0)
#define DLGBOCKNLMG_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1941AFF0)
#define DLGBOCKNLMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1941CA30)

inline static constexpr unsigned int DLGBOCKNLMG_TypeDefinitionIndex = 65543;

class DLGBOCKNLMG
{
public:
	::UnityEngine::Texture* IDFKLMNBMIC; // 0x38
	::UnityEngine::Texture* HJPGOMCLLDG; // 0x40
	::UnityEngine::Texture* HALDANADNIC; // 0x48
	::DLGBOCKNLMG_POIECJEIEHL IJMHNGFLIKI; // 0x50
	::UnityEngine::Texture* IJPMDLDLFFN; // 0x180
	::System::Boolean OGBEPAIEPBA; // 0x188
	::System::Boolean MNKIFLDNGLH; // 0x189
	::System::Boolean KDOKMHKLHJG; // 0x18A
	::System::Boolean JENMGMPHJGG; // 0x18B
	::System::Boolean HCIAKOOKEKO; // 0x18C
	::System::Boolean ODONEKFIIMK; // 0x18D
	::System::Boolean AFCOLOIMABD; // 0x18E
	::System::Byte _padding0[0x1];
	::System::Single JELIAGAHPDN; // 0x190
	::UnityEngine::Color FJONHBHOELK; // 0x194
	::System::Single HJBPBAONCCK; // 0x1A4
	::System::Boolean CDPIKBAEBNF; // 0x1A8
	::System::Boolean MHPABKFDIOI; // 0x1A9
	::System::Boolean OIIGANBFCBN; // 0x1AA
	::System::Boolean DEOCEGANNMB; // 0x1AB
	::System::Single CBIJMLKFMNE; // 0x1AC
	::UnityEngine::Vector4 HPDEKJPAMKJ; // 0x1B0
	::UnityEngine::Vector2 NAGAEDLPCJH; // 0x1C0
	::System::Single HJKFJGINIBA; // 0x1C8
	::System::Single IDFBIIBKPJC; // 0x1CC
	::System::Boolean EDBHGHPMIGN; // 0x1D0
	::System::Boolean IMNILPGDLKO; // 0x1D1
	::System::Boolean CGINNGIPBJC; // 0x1D2
	::System::Boolean CGOIPAMNFJP; // 0x1D3
	::System::Single LLJCCNMBBFF; // 0x1D4
	::System::Single JCKPMBDMFAI; // 0x1D8
	::System::Boolean HIMHODIKGJD; // 0x1DC
	::System::Boolean MLHKHKPLHBG; // 0x1DD
	::System::Boolean DFBLPIAIKME; // 0x1DE
	::System::Boolean NFHOHBHFIJD; // 0x1DF
	::System::Single OMEPMDIPNGB; // 0x1E0
	::System::Single ILCMCMIIOMC; // 0x1E4
	::UnityEngine::Vector2 DDEAMMCMOPI; // 0x1E8
	::System::Single AMOKJPPCBBM; // 0x1F0
	::System::Boolean GHHBILLDIAB; // 0x1F4
	::System::Boolean LBDHMIKEACF; // 0x1F5
	::System::Boolean JCOFEJEPNKE; // 0x1F6
	::System::Boolean LCEGKBPHOKD; // 0x1F7
	::System::Single BAGNPGBCFDF; // 0x1F8
	::System::Single NGEFPAIJFCN; // 0x1FC
	::System::Boolean DLNNAIFJMDN; // 0x200
	::System::Boolean CNOEGGPGLFA; // 0x201
	::System::Boolean MHJNEDNMNKB; // 0x202
	::System::Boolean BCIOFCKHIIN; // 0x203
	::System::Single EDDNHBHCCHL; // 0x204
	::System::Single INLGEOFGFMM; // 0x208
	::System::Boolean FGGDLJNBEJO; // 0x20C
	::System::Boolean DNPIONLEKAP; // 0x20D
	::System::Boolean HOCBFIMFOKF; // 0x20E
	::System::Boolean GLDMGMENHMF; // 0x20F
	::System::Single DMOOGIHBCBF; // 0x210
	::UnityEngine::Vector4 PKNDGLHPJKI; // 0x214
	::UnityEngine::Vector2 NJNDHKHIHFE; // 0x224
	::System::Single KKNDLIEJLAA; // 0x22C
	::System::Single AKMLHHGDEFL; // 0x230
	::System::Boolean BONNEBINDLK; // 0x234
	::System::Boolean KIHLEEHCEHN; // 0x235
	::System::Boolean KAHPIBMCEIF; // 0x236
	::System::Boolean ICFNNAEKGAG; // 0x237

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGBOCKNLMG__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGBOCKNLMG_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DLGBOCKNLMG_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DLGBOCKNLMG_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLGBOCKNLMG_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGBOCKNLMG_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DLGBOCKNLMG_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DLGBOCKNLMG_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
