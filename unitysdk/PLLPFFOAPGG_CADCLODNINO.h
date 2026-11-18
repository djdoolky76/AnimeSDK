#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IMJOHEPEJHK;
class ODAPINADIMD;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

#define PLLPFFOAPGG_CADCLODNINO_HHHKPBDGDFF_OFFSET UNITYSDK_OFFSET(0x1D9D34A0)
#define PLLPFFOAPGG_CADCLODNINO_LIEENPMPIEM_OFFSET UNITYSDK_OFFSET(0x1D9D34F0)
#define PLLPFFOAPGG_CADCLODNINO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D3490)

inline static constexpr unsigned int PLLPFFOAPGG_CADCLODNINO_TypeDefinitionIndex = 75220;

class PLLPFFOAPGG_CADCLODNINO : public ::System::Object
{
public:
	::System::Action* LMOKHKNJANO; // 0x10
	::System::Action_1<::ODAPINADIMD*>* LJMIPGJJELP; // 0x18
	::System::Func_3<::IMJOHEPEJHK*, ::IMJOHEPEJHK*, ::ODAPINADIMD*>* MJJJNCNLPMK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLPFFOAPGG_CADCLODNINO__CTOR_OFFSET))(this);
	}

	static ::ODAPINADIMD* HHHKPBDGDFF(::IMJOHEPEJHK* CBLGCIFLMKL, ::IMJOHEPEJHK* LIBPKNHDIGP)
	{
		return ((::ODAPINADIMD*(*)(::IMJOHEPEJHK*, ::IMJOHEPEJHK*))((::PBYTE)hIl2Cpp + PLLPFFOAPGG_CADCLODNINO_HHHKPBDGDFF_OFFSET))(CBLGCIFLMKL, LIBPKNHDIGP);
	}

	static ::System::Void LIEENPMPIEM(::ODAPINADIMD* HOHHLOALCHG)
	{
		return ((::System::Void(*)(::ODAPINADIMD*))((::PBYTE)hIl2Cpp + PLLPFFOAPGG_CADCLODNINO_LIEENPMPIEM_OFFSET))(HOHHLOALCHG);
	}
};
