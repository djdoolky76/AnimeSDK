#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define LHBKFFHANDB_KCMKOFEGAJK_OFFSET UNITYSDK_OFFSET(0x15DF8400)
#define LHBKFFHANDB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15DF8350)
#define LHBKFFHANDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF8340)

inline static constexpr unsigned int LHBKFFHANDB_TypeDefinitionIndex = 53596;

class LHBKFFHANDB : public ::System::Object
{
public:
	::System::Action_3<::System::Int32, ::System::Boolean, ::System::Action*>* DJKOIHODFHF; // 0x10
	::System::Action_3<::System::Boolean, ::System::Int32, ::System::Boolean>* NCDBDMMCJFE; // 0x18
	::System::Int32 EGEGIMGMJHN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBKFFHANDB__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Int32 PPELJIHKBBD, ::System::Boolean BKOLCDPOJAL, ::System::Boolean GMGKJEJEDMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LHBKFFHANDB_OKJCHFGIKBH_OFFSET))(this, PPELJIHKBBD, BKOLCDPOJAL, GMGKJEJEDMF);
	}

	::System::Void KCMKOFEGAJK(::System::Int32 HBEKKMCBGBK, ::System::Boolean PAHDPPPMJIK, ::System::Action* EEMEGNMHDFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LHBKFFHANDB_KCMKOFEGAJK_OFFSET))(this, HBEKKMCBGBK, PAHDPPPMJIK, EEMEGNMHDFO);
	}
};
