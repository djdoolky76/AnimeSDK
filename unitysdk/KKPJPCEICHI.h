#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KKPJPCEICHI_CEOJOJPFEDJ_OFFSET UNITYSDK_OFFSET(0x15B98ED0)
#define KKPJPCEICHI_CKHGNLKLNFC_OFFSET UNITYSDK_OFFSET(0x15B99100)
#define KKPJPCEICHI_DFKMDOJLCBD_OFFSET UNITYSDK_OFFSET(0x15B99070)
#define KKPJPCEICHI_DGPHLBLIADM_OFFSET UNITYSDK_OFFSET(0x15B99110)
#define KKPJPCEICHI_EAEGBBCFJKP_OFFSET UNITYSDK_OFFSET(0x15B99180)
#define KKPJPCEICHI_FMGAGKBKEME_OFFSET UNITYSDK_OFFSET(0x15B98E60)
#define KKPJPCEICHI_HJEMCBFJDHH_OFFSET UNITYSDK_OFFSET(0x15B99090)
#define KKPJPCEICHI_HODMGLCKAIM_OFFSET UNITYSDK_OFFSET(0x15B98F70)
#define KKPJPCEICHI_JJACFCMBBII_OFFSET UNITYSDK_OFFSET(0x15B98FE0)
#define KKPJPCEICHI_JLAPEIIPAIG_OFFSET UNITYSDK_OFFSET(0x15B991B0)
#define KKPJPCEICHI_JOAJEMFJEIN_OFFSET UNITYSDK_OFFSET(0x15B990A0)
#define KKPJPCEICHI_KBDKLNHFLKL_OFFSET UNITYSDK_OFFSET(0x15B99080)
#define KKPJPCEICHI_KOBCOILDLAP_OFFSET UNITYSDK_OFFSET(0x15B99190)
#define KKPJPCEICHI_KOOBOANGKDG_OFFSET UNITYSDK_OFFSET(0x15B98EE0)
#define KKPJPCEICHI_LKBOKAEIJGN_OFFSET UNITYSDK_OFFSET(0x15B991A0)
#define KKPJPCEICHI__CTOR_OFFSET UNITYSDK_OFFSET(0x15B98E50)

inline static constexpr unsigned int KKPJPCEICHI_TypeDefinitionIndex = 44847;

class KKPJPCEICHI : public ::System::Object
{
public:
	::System::String* _PNLEBPBEDEL_k__BackingField; // 0x10
	::MoleMole::GalGame::GalgameSubFilterType _AHCJNAPPMAE_k__BackingField; // 0x18
	::MoleMole::GalGame::GalgameFilterType _KMEBHHBDNPE_k__BackingField; // 0x1C
	::System::Boolean DMGIBOAEMPA; // 0x20
	::System::Byte _padding0[0x3];
	::MoleMole::GalGame::GalgameRainMode MGHIHNCPKDM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI__CTOR_OFFSET))(this);
	}

	::KKPJPCEICHI* FMGAGKBKEME(::MoleMole::GalGame::GalgameRainMode LNHJAAMCDIP, ::System::Boolean JCGJCDJMBHF, ::System::String* KIAPIANMIEO)
	{
		return ((::KKPJPCEICHI*(*)(::PVOID, ::MoleMole::GalGame::GalgameRainMode, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + KKPJPCEICHI_FMGAGKBKEME_OFFSET))(this, LNHJAAMCDIP, JCGJCDJMBHF, KIAPIANMIEO);
	}

	::System::Boolean CEOJOJPFEDJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_CEOJOJPFEDJ_OFFSET))(this);
	}

	::System::Boolean KOOBOANGKDG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_KOOBOANGKDG_OFFSET))(this);
	}

	::System::Boolean JJACFCMBBII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_JJACFCMBBII_OFFSET))(this);
	}

	::System::Void DFKMDOJLCBD(::MoleMole::GalGame::GalgameSubFilterType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameSubFilterType))((::PBYTE)hIl2Cpp + KKPJPCEICHI_DFKMDOJLCBD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KBDKLNHFLKL(::MoleMole::GalGame::GalgameFilterType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType))((::PBYTE)hIl2Cpp + KKPJPCEICHI_KBDKLNHFLKL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean HJEMCBFJDHH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_HJEMCBFJDHH_OFFSET))(this);
	}

	::KKPJPCEICHI* JOAJEMFJEIN(::MoleMole::GalGame::GalgameFilterType JOJPEDPKGEN, ::MoleMole::GalGame::GalgameSubFilterType GECDFEFPABA)
	{
		return ((::KKPJPCEICHI*(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType, ::MoleMole::GalGame::GalgameSubFilterType))((::PBYTE)hIl2Cpp + KKPJPCEICHI_JOAJEMFJEIN_OFFSET))(this, JOJPEDPKGEN, GECDFEFPABA);
	}

	::System::Void CKHGNLKLNFC(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KKPJPCEICHI_CKHGNLKLNFC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean HODMGLCKAIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_HODMGLCKAIM_OFFSET))(this);
	}

	::MoleMole::GalGame::GalgameFilterType EAEGBBCFJKP()
	{
		return ((::MoleMole::GalGame::GalgameFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_EAEGBBCFJKP_OFFSET))(this);
	}

	::System::String* KOBCOILDLAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_KOBCOILDLAP_OFFSET))(this);
	}

	::System::Boolean DGPHLBLIADM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_DGPHLBLIADM_OFFSET))(this);
	}

	::MoleMole::GalGame::GalgameSubFilterType LKBOKAEIJGN()
	{
		return ((::MoleMole::GalGame::GalgameSubFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_LKBOKAEIJGN_OFFSET))(this);
	}

	::System::Boolean JLAPEIIPAIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJPCEICHI_JLAPEIIPAIG_OFFSET))(this);
	}
};
