#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODBDNAFOMKJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODBDNAFOMKJ_DMBMPIELGJN_IKCCBOLOCMI_OFFSET UNITYSDK_OFFSET(0xFD642C0)
#define ODBDNAFOMKJ_DMBMPIELGJN_JCJEADDCEKJ_OFFSET UNITYSDK_OFFSET(0xFD645B0)
#define ODBDNAFOMKJ_DMBMPIELGJN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xFD64240)
#define ODBDNAFOMKJ_DMBMPIELGJN_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0xFD641F0)
#define ODBDNAFOMKJ_DMBMPIELGJN__CTOR_OFFSET UNITYSDK_OFFSET(0xFD64140)

inline static constexpr unsigned int ODBDNAFOMKJ_DMBMPIELGJN_TypeDefinitionIndex = 62270;

class ODBDNAFOMKJ_DMBMPIELGJN : public ::System::Object
{
public:
	::ODBDNAFOMKJ* FGAFEIDLOCB; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* DCNBAPALAOK; // 0x18
	::System::Boolean AMAKBOFGPHO; // 0x20

	::System::Void _ctor(::ODBDNAFOMKJ* DICPEDGFHBH)
	{
		return ((::System::Void(*)(::PVOID, ::ODBDNAFOMKJ*))((::PBYTE)hIl2Cpp + ODBDNAFOMKJ_DMBMPIELGJN__CTOR_OFFSET))(this, DICPEDGFHBH);
	}

	::System::Void PEDANHBGIGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBDNAFOMKJ_DMBMPIELGJN_PEDANHBGIGE_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBDNAFOMKJ_DMBMPIELGJN_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void JCJEADDCEKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBDNAFOMKJ_DMBMPIELGJN_JCJEADDCEKJ_OFFSET))(this);
	}

	::System::Boolean IKCCBOLOCMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBDNAFOMKJ_DMBMPIELGJN_IKCCBOLOCMI_OFFSET))(this);
	}
};
