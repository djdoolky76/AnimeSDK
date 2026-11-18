#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PGFBGFBDBAH_NBICHNOEJGN.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH_GMCIAMDGJOA;
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define PGFBGFBDBAH_LJCHGMGFNEO_AAJEJLEGBJG_OFFSET UNITYSDK_OFFSET(0x1C1D2680)
#define PGFBGFBDBAH_LJCHGMGFNEO_AFJNIDOGIJE_OFFSET UNITYSDK_OFFSET(0x1C1D2BC0)
#define PGFBGFBDBAH_LJCHGMGFNEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CAEF0)

inline static constexpr unsigned int PGFBGFBDBAH_LJCHGMGFNEO_TypeDefinitionIndex = 46122;

class PGFBGFBDBAH_LJCHGMGFNEO : public ::System::Object
{
public:
	::PGFBGFBDBAH_GMCIAMDGJOA* EEMOEMFLABI; // 0x10
	::PGFBGFBDBAH_NBICHNOEJGN KPNIHKEKDOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_LJCHGMGFNEO__CTOR_OFFSET))(this);
	}

	::System::Boolean AAJEJLEGBJG(::MoleMole::UIUrbanMapPointWidgetContext* IPMMCGDMODG, ::PGFBGFBDBAH_NBICHNOEJGN PNPMMLNCDNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapPointWidgetContext*, ::PGFBGFBDBAH_NBICHNOEJGN))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_LJCHGMGFNEO_AAJEJLEGBJG_OFFSET))(this, IPMMCGDMODG, PNPMMLNCDNK);
	}

	::System::Collections::Generic::IList_1<::System::Object*>* AFJNIDOGIJE()
	{
		return ((::System::Collections::Generic::IList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_LJCHGMGFNEO_AFJNIDOGIJE_OFFSET))(this);
	}
};
