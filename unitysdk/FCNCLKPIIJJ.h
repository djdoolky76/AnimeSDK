#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDKKJDIHMPJ.h"
#include "unitysdk/GEBBPMGAJNH.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define FCNCLKPIIJJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x156B5D60)
#define FCNCLKPIIJJ_DCDNHGDMPKK_OFFSET UNITYSDK_OFFSET(0x156B5BA0)
#define FCNCLKPIIJJ_DDBPHKOFLCN_OFFSET UNITYSDK_OFFSET(0x156B5A80)
#define FCNCLKPIIJJ_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x156B4FB0)
#define FCNCLKPIIJJ_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x156B4DA0)
#define FCNCLKPIIJJ_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x156B4D90)
#define FCNCLKPIIJJ_HFMHKBAPHAI_OFFSET UNITYSDK_OFFSET(0x156B5B10)
#define FCNCLKPIIJJ_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x156B5320)
#define FCNCLKPIIJJ_IKJCCBDEGCN_OFFSET UNITYSDK_OFFSET(0x156B5000)
#define FCNCLKPIIJJ_JJPAGFFFAFO_OFFSET UNITYSDK_OFFSET(0x156B5C30)
#define FCNCLKPIIJJ_LNPPOIIJNDP_OFFSET UNITYSDK_OFFSET(0x156B5870)
#define FCNCLKPIIJJ_MGPPLPIJMHJ_OFFSET UNITYSDK_OFFSET(0x156B5730)
#define FCNCLKPIIJJ_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0x156B59F0)
#define FCNCLKPIIJJ_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x156B5960)
#define FCNCLKPIIJJ_NIONEDLNNKA_OFFSET UNITYSDK_OFFSET(0x156B5360)
#define FCNCLKPIIJJ_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x156B56E0)
#define FCNCLKPIIJJ_OFMKKOGGMPK_OFFSET UNITYSDK_OFFSET(0x156B5570)
#define FCNCLKPIIJJ_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x156B5CD0)
#define FCNCLKPIIJJ_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x156B55C0)
#define FCNCLKPIIJJ_PCDEKIOBJJN_OFFSET UNITYSDK_OFFSET(0x156B5DD0)
#define FCNCLKPIIJJ_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x156B5430)
#define FCNCLKPIIJJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x156B53B0)
#define FCNCLKPIIJJ_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x156B58D0)
#define FCNCLKPIIJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x156B58C0)

inline static constexpr unsigned int FCNCLKPIIJJ_TypeDefinitionIndex = 52585;

class FCNCLKPIIJJ : public ::GEBBPMGAJNH
{
public:
	::System::String* OHOEFEIEIPM; // 0x10
	::System::Action_1<::System::UInt32>* LFIDAANICGN; // 0x18
	::System::Action_1<::System::UInt32>* DEMAACKCDAH; // 0x20
	::System::Boolean AGDFIEDCBMK; // 0x28
	::System::Boolean CGFLLPOCDJM; // 0x29
	::System::Boolean IGJJJBFLKNI; // 0x2A
	::System::Boolean HPINBCPMHJE; // 0x2B
	::System::UInt32 GJICOHACOKA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Boolean NIONEDLNNKA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_NIONEDLNNKA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_PGHAJOMNDDJ_OFFSET))(this);
	}

	::EDKKJDIHMPJ OFMKKOGGMPK()
	{
		return ((::EDKKJDIHMPJ(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_OFMKKOGGMPK_OFFSET))(this);
	}

	::System::Void OMMICIJCCKB(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_OMMICIJCCKB_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void LNPPOIIJNDP(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_LNPPOIIJNDP_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void MGPPLPIJMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_MGPPLPIJMHJ_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void MPPBKPNJPHO(::System::String* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_MPPBKPNJPHO_OFFSET))(this, MIALFKCCCPI);
	}

	::EDKKJDIHMPJ DDBPHKOFLCN()
	{
		return ((::EDKKJDIHMPJ(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_DDBPHKOFLCN_OFFSET))(this);
	}

	::System::Void HFMHKBAPHAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_HFMHKBAPHAI_OFFSET))(this);
	}

	::System::Void DCDNHGDMPKK(::System::String* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_DCDNHGDMPKK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_OENOEFBECOA_OFFSET))(this);
	}

	::System::Boolean JJPAGFFFAFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_JJPAGFFFAFO_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* BCPPCELDALM, ::System::Action_1<::System::UInt32>* LEGHIDIHIHM, ::System::Action_1<::System::UInt32>* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::UInt32>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_BBOMJDBNHIC_OFFSET))(this, BCPPCELDALM, LEGHIDIHIHM, PABLEDCGDGM);
	}

	::System::Void IKJCCBDEGCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_IKJCCBDEGCN_OFFSET))(this);
	}

	::System::Void PCDEKIOBJJN(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FCNCLKPIIJJ_PCDEKIOBJJN_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}
};
