#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGPHFADIIBM.h"

namespace MoleMole { class UIMiddleTip; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define JOCEFEBNHBH_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x18A27A50)
#define JOCEFEBNHBH_DFMPDBCBNOH_OFFSET UNITYSDK_OFFSET(0x18A280F0)
#define JOCEFEBNHBH_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x18A28050)
#define JOCEFEBNHBH_ECKGLMBKJFD_OFFSET UNITYSDK_OFFSET(0x18A27A60)
#define JOCEFEBNHBH_GKBAKOMHIGL_OFFSET UNITYSDK_OFFSET(0x18A28610)
#define JOCEFEBNHBH_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x18A27B90)
#define JOCEFEBNHBH_HFMHKBAPHAI_OFFSET UNITYSDK_OFFSET(0x18A28570)
#define JOCEFEBNHBH_ODBPDCACIDM_OFFSET UNITYSDK_OFFSET(0x18A284B0)
#define JOCEFEBNHBH_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x18A28090)
#define JOCEFEBNHBH_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x18A28450)
#define JOCEFEBNHBH__CTOR_OFFSET UNITYSDK_OFFSET(0x18A27A70)

inline static constexpr unsigned int JOCEFEBNHBH_TypeDefinitionIndex = 74787;

class JOCEFEBNHBH : public ::KGPHFADIIBM
{
public:
	::System::Action_1<::System::EventArgs*>* MJOIMCKLHDG; // 0x30
	::System::Action_1<::System::EventArgs*>* DHOEAOEPBJL; // 0x38
	::MoleMole::UIMiddleTip* OBIGDKKGNLA; // 0x40

	::System::Void _ctor(::MoleMole::UIMiddleTip* EODBLNHDIGM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiddleTip*))((::PBYTE)hIl2Cpp + JOCEFEBNHBH__CTOR_OFFSET))(this, EODBLNHDIGM);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean ECKGLMBKJFD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_ECKGLMBKJFD_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void ODBPDCACIDM(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_ODBPDCACIDM_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void HFMHKBAPHAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_HFMHKBAPHAI_OFFSET))(this);
	}

	::System::Void DFMPDBCBNOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_DFMPDBCBNOH_OFFSET))(this);
	}

	::System::Void GKBAKOMHIGL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JOCEFEBNHBH_GKBAKOMHIGL_OFFSET))(this, KOIBHLHLMFC);
	}
};
