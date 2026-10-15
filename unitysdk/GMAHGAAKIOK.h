#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNKMEFBKE;
class BPHJOOGJPKD;

#define GMAHGAAKIOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C61A8F0)
#define GMAHGAAKIOK_GET_ENABLEINFINITETACTICSREFRESH_OFFSET UNITYSDK_OFFSET(0x1C6478D0)
#define GMAHGAAKIOK_GET_IGNORECOLORDICECONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x1C6478B0)
#define GMAHGAAKIOK_SET_ENABLEINFINITETACTICSREFRESH_OFFSET UNITYSDK_OFFSET(0x1C6478E0)
#define GMAHGAAKIOK_SET_IGNORECOLORDICECONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x1C6478C0)

	class GMAHGAAKIOK : public ::System::Object
	{
	public:
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x10
		::BPHJOOGJPKD* FLMODBLFAGD; // 0x18
		::System::Boolean _IgnoreColorDiceConditionCheck_k__BackingField; // 0x20
		::System::Boolean _EnableInfiniteTacticsRefresh_k__BackingField; // 0x21
		::System::Void _ctor(::BPHJOOGJPKD* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BPHJOOGJPKD*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + GMAHGAAKIOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IgnoreColorDiceConditionCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAHGAAKIOK_GET_IGNORECOLORDICECONDITIONCHECK_OFFSET))(this);
		}

		::System::Void set_IgnoreColorDiceConditionCheck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMAHGAAKIOK_SET_IGNORECOLORDICECONDITIONCHECK_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableInfiniteTacticsRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAHGAAKIOK_GET_ENABLEINFINITETACTICSREFRESH_OFFSET))(this);
		}

		::System::Void set_EnableInfiniteTacticsRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMAHGAAKIOK_SET_ENABLEINFINITETACTICSREFRESH_OFFSET))(this, a1);
		}

	};
