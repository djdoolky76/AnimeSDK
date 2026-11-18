#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABNCMJIFADF.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Func_1; }

#define GBKIEKGCFMH_EFAPIGJJKEB_OFFSET UNITYSDK_OFFSET(0x179CDC50)
#define GBKIEKGCFMH_OGPBMJMKDBP_OFFSET UNITYSDK_OFFSET(0x179CDD40)
#define GBKIEKGCFMH__CTOR_OFFSET UNITYSDK_OFFSET(0x179CDCF0)

inline static constexpr unsigned int GBKIEKGCFMH_TypeDefinitionIndex = 71678;

class GBKIEKGCFMH : public ::ABNCMJIFADF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIEKGCFMH__CTOR_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* EFAPIGJJKEB(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + GBKIEKGCFMH_EFAPIGJJKEB_OFFSET))(this, MNDIBLLFAJI);
	}

	::MoleMole::ScrollViewItemWidgetController* OGPBMJMKDBP(::System::Func_1<::MoleMole::UIControlReference*>* MIALFKCCCPI)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + GBKIEKGCFMH_OGPBMJMKDBP_OFFSET))(this, MIALFKCCCPI);
	}
};
