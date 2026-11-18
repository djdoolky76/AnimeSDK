#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class LJHFMILANJA_1;

#define EBFCLBMBFNL_NNNOLFEGCMA_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xFDCFD40)
#define EBFCLBMBFNL_NNNOLFEGCMA__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCFDC0)

inline static constexpr unsigned int EBFCLBMBFNL_NNNOLFEGCMA_TypeDefinitionIndex = 49246;

class EBFCLBMBFNL_NNNOLFEGCMA : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::MoleMole::UserLocalDataItem*>* MEANALIFOBK; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFCLBMBFNL_NNNOLFEGCMA__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFCLBMBFNL_NNNOLFEGCMA_ONCREATEPROPERTY_OFFSET))(this);
	}
};
